var intakeType = 1;
function AddMedicineController($scope) {
    $scope.defaultShowHide = false;
    var medicineid = sessionStorage.getItem('medicineDetails');
    sessionStorage.removeItem('medicineDetails');
    $scope.medicineType = sessionStorage.getItem('medicinetype');
    $scope.noOfIntake = [];
    $scope.noOfMedicineShape = [];
    $scope.option = "";
    $scope.newValue = function (value) {
        $scope.option = value;
    }

    $scope.isMedicineView = (medicineid != undefined && medicineid != null);
    $scope.onNext = function () {
        if ($scope.option == "")
        {
            $scope.errorMessage = "Please select an option";
            return;
        }
        
        if ($scope.option == "exjade") {
           // sessionStorage.setItem('medicinetype', '1');
            $scope.medicineType = '1';
         }
        else {
           // sessionStorage.setItem('medicinetype', '0');
            $scope.medicineType = '0';
           }
        $scope.isMedicineView = true;
    }
    $scope.getmedicineName = function (value) {
        $scope.medicine.name = value;
       
        $scope.createMedicineShape(value);
        
    }
    $scope.createMedicineShape = function (value) {
        if (value == undefined)
            value = $(this).val();
        var arr = ['', 'EXJADE 125mg', 'EXJADE 250mg', 'EXJADE 500mg'];
        var data = [[0], [1], [1, 2], [1, 2, 3]];
        var option = data[arr.indexOf(value)];
        $scope.noOfMedicineShape = option;
        $scope.$apply();
    }
    $scope.changeIntakeTimeForFrequency = function (value) {

        if (value == undefined)
            value = $(this).val();
        var fq = ["Once Daily", "Twice Daily", "Three times a day", "Four times a day", "Five times a day"];
        var data = [[1], [1, 2], [1, 2, 3], [1, 2, 3, 4], [1, 2, 3, 4, 5]];

        var options = data[fq.indexOf(value)];
        $scope.noOfIntake = options;
        $scope.$apply();
      
        return options;


    }
 
    // $scope.pageClass = 'addmedicine';
    $scope.medicine = new Medicine();
    //dynamicdropDownforFrequencyDays();
    
    // set medicine values to edit
    
    
    medicine = g_medicineList.medicineList[medicineid];
    
    if (medicine == undefined || medicine == null) {
        medicine = new Medicine();
       
    }
    else {
        $('#resetbutton').hide();
    }

   
    $scope.medicine.id = medicineid;
    $scope.medicine.name = medicine.name;
    $scope.medicine.strength = medicine.strength;
    $scope.medicine.startDate = medicine.startDate;
    $scope.medicine.endDate = medicine.endDate;
    
    $scope.medicine.type = $scope.medicineType;
    
    $('#medicine-color-opts').mobileSelect('destroy');
    $('#medicine-color-opts').val(medicine.color).attr("selected", "selected");
    $('#medicine-color-opts').mobileSelect({
        title: 'Select your medicine color',
        onClose: function () {
            changeMedicineColor($(this).val());
        }
    });
    
    $('#medicine-shape-opts').mobileSelect('destroy');
    $('#medicine-shape-opts').val(medicine.shape).attr("selected", "selected");
    $('#medicine-shape-opts').mobileSelect({
        title: 'Select your medicine shape',
        onClose: function () {
            changeShape();
        }
    });
    changeMedicineColor(medicine.color);
    
    $('#medicine-strength-opts').mobileSelect('destroy');
    $('#medicine-strength-opts').val(medicine.medStrength).attr("selected", "selected");
    $('#medicine-strength-opts').mobileSelect({
        title: 'Select your medicine strength'
    });
    
    $('#exjade-opts').mobileSelect('destroy');
    $('#exjade-opts').val(medicine.name).attr("selected", "selected");
    $('#exjade-opts').mobileSelect({
        title: 'Select your medicine ',
        onClose: function () {
            $scope.getmedicineName($(this).val());
        }
    });
     if (medicine.noOfMedicineShape > 0) {
        $scope.noOfMedicineShape = [];
        for (var index = 0; index < medicine.noOfMedicineShape; index++) {
            $scope.noOfMedicineShape.push("" + (index + 1));
        }
    }
   
    $('#reminder-timing-opts').mobileSelect('destroy');
    $('#reminder-timing-opts').val(medicine.reminderTiming).attr("selected", "selected");
    $('#reminder-timing-opts').mobileSelect({
        title: 'Select the frequency',
        onClose: function(){
            changeTimeParttern($(this).val());
            if ($(this).val().toLowerCase() == "frequency") {
                intakeType = 1;
                $scope.changeIntakeTimeForFrequency("Once Daily");
                $scope.resetInTakeInterval("Once Daily");
            }
            else {
                intakeType = 2;
                $scope.resetInTakeInterval("hourly");
            }
        }
    });


    if (medicine.intakeType == 1) {
        $scope.noOfIntake = [];
       
        for (var index = 0; index < medicine.intakeTime.length; index++) {
            $scope.noOfIntake.push("" + (index + 1));
            
        }
       
        setTimeout(function () {

            for (var index = 0; index < medicine.intakeTime.length; index++) {
              
                $("#intake-hour-opts-" + (index + 1)).val(medicine.intakeTime[index].hour);
                $("#intake-minutes-opts-" + (index + 1)).val(medicine.intakeTime[index].min);
                $("#intake-meridiem-opts-" + (index + 1)).val(medicine.intakeTime[index].ampm);
            }

            $('.intake').mobileSelect({
                title: 'Select the time'

            });
        }, 1000);
   
    }
    else if (medicine.intakeType == 2) {
        var type2 = medicine.intakeTime;
        
        $scope.noOfIntake = [1];
        $('#weekly').show();
        var hobj = {2:'Two hours once',   4: 'Four hours once' , 6 :'Six hours once' , 8:'Eight hours once' };
        var hourly = ["Two hours once", "Four hours once", "Six hours once", "Eight hours once"];
        $('#reminder-frequency-opts').mobileSelect('destroy');
        $('#reminder-frequency-opts').mobileSelect({
            title: 'Select reminder frequency'

        });
        changeTimeParttern(medicine.reminderTiming);
       
       $('#reminder-frequency-opts').val(medicine.reminderDay).attr("selected", "selected");
      

       
        setTimeout(function () {
            $("#intake-hourly-opts").val(hobj[medicine.intakeTime.repeat]);
            $('#intake-hourly-opts').mobileSelect({
                title: 'Select number of in takes'
            });
                $("#intake-hour-opts-" + 1).val(medicine.intakeTime.hour);
                $("#intake-minutes-opts-" + 1).val(medicine.intakeTime.min);
                $("#intake-meridiem-opts-" + 1).val(medicine.intakeTime.ampm);
                $('.intake').mobileSelect({
                    title: 'Select the time'
                });                    
        }, 1000);
     }
    else if (medicine.intakeType == 3) {
        var type3 = medicine.intakeTime;
        $scope.noOfIntake = [1];
        $('#weekly').show();
        $('.intake').mobileSelect('destroy');
        $('#timehourdpdwn').hide();
        $('#hourly').hide();
        
        $('#weekly').show();
        //  setTimeout(function () {
        $('#intake-weekly-opts').mobileSelect({
            title: 'Select number of in takes',
            onClose: function () {
                getIntakeTimeWeekly();
            }
        });

        $('.intake').mobileSelect({
            title: 'Select the time'

        });
         var hobj = {0:'sunday',1:'monday', 2:'tuesday', 3:'wednessday', 4:'thursday',5:'friday', 6:'saturday' };
         var hourly = ["Two hours once", "Four hours once", "Six hours once", "Eight hours once"];
         $('#reminder-frequency-opts').mobileSelect('destroy');
         $('#reminder-frequency-opts').mobileSelect({
             title: 'Select reminder frequency'

         });
         changeTimeParttern(medicine.reminderTiming);
        $('#reminder-frequency-opts').val(medicine.reminderDay).attr("selected", "selected");



         setTimeout(function () {
             $("#intake-hourly-opts").val(hobj[medicine.intakeTime.repeat]);
             $('#intake-hourly-opts').mobileSelect({
                 title: 'Select number of in takes'

             });

                 $("#intake-hour-opts-" + 1).val(medicine.intakeTime.hour);
                 $("#intake-minutes-opts-" + 1).val(medicine.intakeTime.min);
                 $("#intake-meridiem-opts-" + 1).val(medicine.intakeTime.ampm);

             $('.intake').mobileSelect({
                 title: 'Select the time'

             });
         }, 500);


    }
    
    $('#reminder-frequency-opts').mobileSelect('destroy');
    $('#reminder-frequency-opts').val(medicine.reminderDay).attr("selected", "selected");
    $('#reminder-frequency-opts').mobileSelect({
                                            title: 'Reminder time',
                                            onClose: function () { $scope.resetInTakeInterval($(this).val());}
    });

    $scope.resetInTakeInterval = function (value) {
                                           
        if (value.toLowerCase() == 'weekly') {

            intakeType = 3;

            $('.intake').mobileSelect('destroy');
            $('#timehourdpdwn').hide();
            $('#hourly').hide();
            $scope.noOfIntake = [1];
            $scope.$apply();
            $('#weekly').show();
            //  setTimeout(function () {
            $('#intake-weekly-opts').mobileSelect({
                title: 'Select number of in takes',
                onClose: function () {
                    getIntakeTimeWeekly();
                }
            });

            $('.intake').mobileSelect({
                title: 'Select the time'

            });
            //   }, 1000);
                                                  
                                                    

            // enable mobile select for hourly options
            // hide frequency options
            // show hourly option
        }

        else if (value.toLowerCase() == 'hourly') {
            // hide weekly option
            // show hourly option
            // enable mobile select for hourly options
            //$('.intake').mobileSelect('destroy');

            intakeType = 2;
           
            $('#weekly').hide();
            $scope.noOfIntake = [1];
            $scope.$apply();
            $('#timehourdpdwn').hide();
            $('#hourly').show();
            $('#intake-hourly-opts').mobileSelect({
                title: 'Select number of in takes',
                onClose: function () {
                    getIntakeTimeHourly();
                }
            });
            $('.intake').mobileSelect({
                title: 'Select the time'

            });
        }
        else {
            $scope.noOfIntake = [];
            $scope.$apply();
            $scope.changeIntakeTimeForFrequency(value);
            $('#intake-hour-opts-1').val("08").attr("selected");
            $('#intake-hour-opts-2').val("09").attr("selected");
            $('#intake-hour-opts-3').val("10").attr("selected");
            $('#intake-hour-opts-4').val("11").attr("selected");
            $('#intake-hour-opts-5').val("12").attr("selected");
            $('.intake').mobileSelect({
                title: 'Select the time'

            });

        }
    }
 
    try {
    changeInTakeTime(medicine.reminderDay);
    }
    catch(err){}
    g_intake = medicine.intakeTime;
    try {
    loadTime();
    }
    catch(errr){}
    /*$('#intake-opts').mobileSelect('destroy');
    $('#intake-opts').val("1").attr("selected", "selected");
    $('#intake-opts').mobileSelect({
                                  title: 'Select number of in takes',
                                  onClose : loadTime
                                  });
    $('#intake-hour-opts').mobileSelect('destroy');
    $('#intake-hour-opts').val(medicine.intakeTime[0].hour).attr("selected", "selected");
    $('#intake-hour-opts').mobileSelect({
                                        title: 'Select the hour',
                                        onClose:getIntakeTime
                                        });
    $('#intake-minutes-opts').mobileSelect('destroy');
    $('#intake-minutes-opts').val(medicine.intakeTime[0].min).attr("selected", "selected");
    $('#intake-minutes-opts').mobileSelect({
                                           title: 'Select the minute',
                                           onClose:getIntakeTime
                                           });
    $('#intake-meridiem-opts').mobileSelect('destroy');
    $('#intake-meridiem-opts').val(medicine.intakeTime[0].ampm).attr("selected", "selected");
    $('#intake-meridiem-opts').mobileSelect({
                                            title: 'Select the meridiem',
                                            onClose:getIntakeTime
                                            });
     */

   
    $('#food-affliation-opts').mobileSelect('destroy');
    $('#food-affliation-opts').val(medicine.foodAfiliation).attr("selected", "selected");
    $('#food-affliation-opts').mobileSelect({
                                            title: 'Select the food affiliation'
                                            });
    
    $('#ringtones-opts').mobileSelect('destroy');
    $('#ringtones-opts').val(medicine.reminderTone).attr("selected", "selected");
    $('#ringtones-opts').mobileSelect({
                                      title: 'Select the ring tone'
                                      });

       

        
    
    
    $scope.resetFields = function () {

        $('#errormessage').html("");
        $scope.medicine = new Medicine();
        $scope.medicine.name = medicine.name;
        $scope.medicine.strength = medicine.strength;
        $scope.medicine.startDate = medicine.startDate;
        $scope.medicine.endDate = medicine.endDate;
       
        $('#medicine-color-opts').mobileSelect('destroy');
        $('#medicine-color-opts').val(medicine.color).attr("selected", "selected");
        $('#medicine-color-opts').mobileSelect({
            title: 'Select your medicine color',
            onClose: function () {
                changeMedicineColor($(this).val());
            }
        });

        $('#medicine-shape-opts').mobileSelect('destroy');
        $('#medicine-shape-opts').val(medicine.shape).attr("selected", "selected");
        $('#medicine-shape-opts').mobileSelect({
            title: 'Select your medicine shape',
            onClose: function () {
                changeShape();
            }
        });
        changeMedicineColor(medicine.color);

        $('#medicine-strength-opts').mobileSelect('destroy');
        $('#medicine-strength-opts').val(medicine.medStrength).attr("selected", "selected");
        $('#medicine-strength-opts').mobileSelect({
            title: 'Select your medicine strength'
        });
        $('#exjade-opts').mobileSelect('destroy');
        $('#exjade-opts').val(medicine.name).attr("selected", "selected");
        $('#exjade-opts').mobileSelect({
            title: 'Select your medicine ',
            onClose: function () {
                $scope.getmedicineName($(this).val());
            }
        });
       
        $scope.noOfMedicineShape = [];
        $('#reminder-timing-opts').mobileSelect('destroy');
        $('#reminder-timing-opts').val(medicine.reminderTiming).attr("selected", "selected");
        $('#reminder-timing-opts').mobileSelect({
            title: 'Select the frequency',
            onClose: function () {
                changeTimeParttern($(this).val());
                if ($(this).val().toLowerCase() == "frequency") {
                    intakeType = 1;
                    $scope.changeIntakeTimeForFrequency("Once Daily");
                   
                    $('.intake').mobileSelect({
                        title: 'Select intake time of medicine',
                    });
                    $scope.resetInTakeInterval("Once Daily");
                }
                else {
                    intakeType = 2;
                    $scope.resetInTakeInterval("hourly");
                }
            }
        });

        $('#reminder-frequency-opts').mobileSelect('destroy');
        $('#reminder-frequency-opts').val(medicine.reminderDay).attr("selected", "selected");
        $('#reminder-frequency-opts').mobileSelect({
            title: 'Reminder time',
            onClose: function () { $scope.resetInTakeInterval($(this).val()); }
        });

        $scope.resetInTakeInterval = function (value) {

            if (value.toLowerCase() == 'weekly') {

                intakeType = 3;

                $('.intake').mobileSelect('destroy');
                $('#timehourdpdwn').hide();
                $('#hourly').hide();
                $scope.noOfIntake = [1];
                $scope.$apply();
                $('#weekly').show();
                //  setTimeout(function () {
                $('#intake-weekly-opts').mobileSelect({
                    title: 'Select number of in takes',
                    onClose: function () {
                        getIntakeTimeWeekly();
                    }
                });

                $('.intake').mobileSelect({
                    title: 'Select the time'

                });
              }

            else if (value.toLowerCase() == 'hourly') {
                 intakeType = 2;

                $('#weekly').hide();
                $scope.noOfIntake = [1];
                $scope.$apply();
                $('#timehourdpdwn').hide();
                $('#hourly').show();
                $('#intake-hourly-opts').mobileSelect({
                    title: 'Select number of in takes',
                    onClose: function () {
                        getIntakeTimeHourly();
                    }
                });
                $('.intake').mobileSelect({
                    title: 'Select the time'

                });
            }
            else {
                $scope.noOfIntake = [];
                $scope.$apply();
                $scope.changeIntakeTimeForFrequency(value);

                $('.intake').mobileSelect({
                    title: 'Select the time'

                });

            }
        }

        try {
            changeInTakeTime(medicine.reminderDay);
        }
        catch (err) { }
        g_intake = medicine.intakeTime;
        try {
            loadTime();
        }
        catch (errr) { }
      
        $('#food-affliation-opts').mobileSelect('destroy');
        $('#food-affliation-opts').val(medicine.foodAfiliation).attr("selected", "selected");
        $('#food-affliation-opts').mobileSelect({
            title: 'Select the food affiliation'
        });

        $('#ringtones-opts').mobileSelect('destroy');
        $('#ringtones-opts').val(medicine.reminderTone).attr("selected", "selected");
        $('#ringtones-opts').mobileSelect({
            title: 'Select the ring tone'
        });

       
       

      
    }
    
    $scope.addMedicine = function() {
       
        var medicine = new Medicine();
        medicine.id = $scope.medicine.id;
        medicine.name = $scope.medicine.name;
        medicine.strength = $scope.medicine.strength;
        medicine.startDate = $("#startDate").val();
        medicine.endDate = $scope.medicine.endDate;
        medicine.intakeType = intakeType;
        medicine.type = $scope.medicineType;
        medicine.noOfMedicineShape = $scope.noOfMedicineShape.length;
        //medicine.name = $.trim($('#medicineName').val());
        medicine.color = $('#medicine-color-opts').children("option").filter(":selected").val();
        medicine.shape = $('#medicine-shape-opts').children("option").filter(":selected").val();
        //medicine.strength = $.trim($('#medicineStrength').val());
        medicine.medStrength = $('#medicine-strength-opts').children("option").filter(":selected").text();
        medicine.reminderTiming = $('#reminder-timing-opts').children("option").filter(":selected").text();
        medicine.reminderDay = $('#reminder-frequency-opts').children("option").filter(":selected").text();
        //medicine.startDate = $.trim($('#startDate').val());
        //medicine.endDate = $.trim($('#endDate').val());
        if (medicine.intakeType == 1) {
            medicine.intakeTime = [];
            for (var index = 1; index <= $scope.noOfIntake.length; index++) {
                //medicine.intakeTime = $scope.noOfIntake;
                medicine.intakeTime.push({
                    hour: $("#intake-hour-opts-" + index).children("option").filter(":selected").text(),
                    min: $("#intake-minutes-opts-" + index).children("option").filter(":selected").text(),
                    ampm: $("#intake-meridiem-opts-" + index).children("option").filter(":selected").text()
                });
            }

        }
        else if (medicine.intakeType == 2) {
            getIntakeTimeHourly();
            medicine.intakeTime = intakeTimeHourly;

        }
        else {
            getIntakeTimeWeekly();
            medicine.intakeTime = intakeTimeWeekly;
      
        }

        
        //medicine.amOrPm = $('#intake-time-am-opts').children("option").filter(":selected").text();
        //medicine.intakeDay = $('#intake-day-opts').children("option").filter(":selected").text();
        //medicine.remindMeBefore = $('#remindme-before-opts').children("option").filter(":selected").val();
        medicine.foodAfiliation = $('#food-affliation-opts').children("option").filter(":selected").text();
        medicine.reminderTone = $('#ringtones-opts').children("option").filter(":selected").text();
        
        medicine.noOfIntakes = $('#intake-hour-opts').children("option").filter(":selected").text();
        // validate fields
        if (medicine.name == "") {
            $('#errormessage').html("Please provide name of the medicine");
            return;
        }
        else if ($scope.defaultShowHide == true) {
             if (medicine.color == "" || medicine.color == undefined) {
               $('#errormessage').html("Please choose color of the medicine");
               return;
               }
               else if (medicine.shape == "" || medicine.shape == undefined) {
               $('#errormessage').html("Please choose shape of the medicine");
               return;
               }
               else if (medicine.strength == "") {
               $('#errormessage').html("Please provide units for the dose");
               return;
               }
               else if (medicine.medStrength == "" || medicine.medStrength == undefined) {
               $('#errormessage').html("Please select strength of the medicine");
               return;
               }
               else if (medicine.foodAfiliation == "") {
                   $('#errormessage').html("Please select food afiliation");
                   return;
               }
        }
        
        else if (medicine.reminderTiming == "") {
            $('#errormessage').html("Please select type of reminder");
            return;
        }
        else if (medicine.reminderDay == "") {
            $('#errormessage').html("Please select reminder frequency");
            return;
        }
        else if (medicine.startDate == '') {
            $('#errormessage').html("Please select reminder start date");
            return;
        }
        else if (medicine.endDate == '') {
            $('#errormessage').html("Please select reminder end date");
            return;
        }
      
       
        else if (medicine.reminderTone == "") {
            $('#errormessage').html("Please select a reminder tone");
            return;
        }

        else if(medicine.reminderDay == 'Weekly')
            if (medicine.intakeTime.days == null) {
            $('#errormessage').html("Please select intake hour, intake minute and intake meridiem of the medicine");
            return;
       }
      
       
 
      
        
        if (new Date(medicine.startDate) >= new Date(new Date().getDate())) {
            var medid = medicine.id;
            var id = g_medicineList.addMedicine(medicine);
            if(id == medid)
                window.location = "uniwebview://reminder?type=edit&ctxid=" + id;
            else
                window.location = "uniwebview://reminder?type=add&ctxid=" + id;
            
            $('#errormessage').css("display", "none");
           // $('#successmessage').html("Medicine added successfully.");
        }
     
    }
    
    /*medicine = {};
     medicine.name = "Sample medicine";
     medicine.strength = "50";
    medicine.startDate = "04/17/2017";
    medicine.endDate = "04/18/2017";

    $('#medicineName').val(medicine.name);
    $('#medicineStrength').val(medicine.strength);
    $('#startDate').val(medicine.startDate);
    $('#endDate').val(medicine.endDate);*/

   

}


function Init() {

    $('#endDate').datepicker({ minDate: 0 });
    
    $('#exjade-opts').mobileSelect({
        title: 'Select the medicine option',
        onClose: function () {
            $scope.getmedicineName($(this).val());
        }
       
    });
    $('#medicine-color-opts').mobileSelect({
        title: 'Select the medicine color',
        onClose: function () {
                changeMedicineColor($(this).val());
        }
    });
    
    $('#medicine-shape-opts').mobileSelect({
        title: 'Select the medicine shape',
        onClose: function () {
            changeShape();
        }
    });
    $('#medicine-strength-opts').mobileSelect({
        title: 'Select the medicine strength'
    });
    
    $('#reminder-timing-opts').mobileSelect({
        title: 'Select the frequency of in take',
        onClose: function(){
            changeTimeParttern($(this).val());
            if ($(this).val().toLowerCase() == "frequency") {
                intakeType = 1;
                $scope.noOfIntake = [];
                $scope.$apply();
                $scope.changeIntakeTimeForFrequency($(this).val());
                $('.intake').mobileSelect({
                    title: 'Select the time'

                });
            }

            else {
                intakeType = 2;
            }
        }
    });

    $('#reminder-frequency-opts').mobileSelect({
        title: 'Select reminder frequency',
        onClose: function () {
           
            if ($(this).val().toLowerCase() == 'weekly') {

               intakeType = 3;
                $('#timehourdpdwn').hide();
                $('#hourly').hide();
                $scope.noOfIntake = [1];
                $scope.$apply();
                $('#weekly').show();
                $('#intake-weekly-opts').mobileSelect({
                    title: 'Select number of in takes',
                    onClose: function () {
                        getIntakeTimeWeekly();
                        
                    }
                });
                $('.intake').mobileSelect({
                    title: 'Select the time'

                });
              
            }

          else if ($(this).val().toLowerCase() == 'hourly') {
               
              intakeType = 2;
              $('#timehourdpdwn').hide();
                $('#weekly').hide();
                $('#hourly').show();
                $scope.noOfIntake = [1];
                $scope.$apply();
                $('#intake-hourly-opts').mobileSelect({
                    title: 'Select number of in takes',
                    onClose: function () {
                    getIntakeTimeHourly();
                    }
                });
                $('.intake').mobileSelect({
                    title: 'Select the time'

                });
          }
          else {
              $scope.noOfIntake = [];
              $scope.$apply();
              $scope.changeIntakeTimeForFrequency($(this).val());
              $('.intake').mobileSelect({
                  title: 'Select the time'

              });
          }
        }
    });
    $('#intake-day-opts').mobileSelect({
          title: 'Select number of in takes',
          onClose : function() {
              loadTime();
           
          }
    });
   
 
    $('#intake-hour-opts').mobileSelect({
                                              title: 'Select the hour',
                                        onClose:getIntakeTime
                                              });
    
    $('#intake-minutes-opts').mobileSelect({
                                        title: 'Select the minute',
                                           onClose:getIntakeTime
                                        });
    $('#intake-meridiem-opts').mobileSelect({
                                           title: 'Select the meridiem',
                                            onClose:getIntakeTime
                                           });
    $('#food-affliation-opts').mobileSelect({
                                            title: 'Select the food affiliation'
                                            });
    $('#ringtones-opts').mobileSelect({
                                            title: 'Select the ring tone'
                                            });
    
    var sd = $('#startDate').datepicker({
                                        minDate: 0,
                                        onSelect: function (date) {
                                        $("#endDate").datepicker('option', 'minDate', date);
                                        }
                                        });
    
    var ed = $('#endDate').datepicker({
      
    });
}

function changeMedicineColor(color) {
    $('#medicine-color').find('.btn-mobileSelect-gen').find('.text').css('color', color);
    $('#medicine-shape').find('.btn-mobileSelect-gen').find('i').css('color', color);
}

function changeShape() {
    var color = $('#medicine-color-opts').children("option").filter(":selected").val();
    $('#medicine-shape').find('.btn-mobileSelect-gen').find('i').css('color', color);
}



function clearFields() {
    $scope.medicine = new Medicine();
    /*$('#loader').css("display", "block");
    setTimeout(function () {
        window.location.reload();
        $('#loader').fadeOut('slow');
    }, 1000);*/
}

function formatDate(d) {
    return (d.getMonth() + 1) + '/' + d.getDate() + '/' + d.getFullYear();
}
var intakeTimeHourly = {};
function getIntakeTimeHourly() {
    var repeat = $('#intake-hourly-opts').val();
    var intaketime = $('#intake-hour-opts-1').children("option").filter(":selected").text();
    var minute = $('#intake-minutes-opts-1').children("option").filter(":selected").text();
    var amPm = $('#intake-meridiem-opts-1').children("option").filter(":selected").text();

    intakeTimeHourly = {
        repeat: repeat,
        hour: intaketime,
        min: minute,
        ampm:amPm
    }

    return intakeTimeHourly;
     
}
var intakeTimeWeekly = {};
function getIntakeTimeWeekly() {

    var value = $('#intake-weekly-opts').val();
    var intaketime = $('#intake-hour-opts-1').children("option").filter(":selected").text();
    var minute = $('#intake-minutes-opts-1').children("option").filter(":selected").text();
    var amPm = $('#intake-meridiem-opts-1').children("option").filter(":selected").text();

    intakeTimeWeekly = {
        days:value,
        hour: intaketime,
        min: minute,
        ampm: amPm
    }

    if (intakeTimeWeekly.days !=null && intakeTimeWeekly.days.length != 0)
    {
        $('#weekly').find('.btn-mobileSelect-gen').find('.text').html(intakeTimeWeekly.days.length + ' day(s) selected');
    }
   
    return intakeTimeWeekly;

}



function changeTimeParttern(value) {
  
    var fq = ["Once Daily", "Twice Daily", "Three times a day", "Four times a day", "Five times a day"]
    var interval = ["Hourly", "Weekly"];
    
    var options = (value == "Interval") ? interval : fq;
    var str = "";
    
    
    for(var index = 0; index < options.length; index++)
        str += "<option value='" + options[index] + "'>" + options[index] + "</option>";
    
    
    $("#reminder-frequency-opts").html(str);
    $("#reminder-frequency-opts").mobileSelect('refresh');
    changeInTakeTime($("#reminder-frequency-opts").val());
   
}

var intervalFirstTimeClick = true;


function changeInTakeTime(value) {
    if(value == undefined)
        value = $(this).val();
    
    var fq = ["Once Daily", "Twice Daily", "Three times a day", "Four times a day", "Five times a day", "Hourly", "Weekly"];
    var data = [[1], [1,2], [1,2,3], [1,2,3,4], [1,2,3,4,5], ["Two hours once", "Four hours once", "Six hours once", "Eight hours once"], ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"]];
    
    var options = data[fq.indexOf(value)];
    var str = "";
   
    g_intake = [];
    
    if (value == "Weekly")
    {
        $("#intake-opts").attr("multiple", "multiple");
        for (var index = 0; index < options.length; index++) {
            str += "<option value='" + options[index] + "'>" + options[index] + "</option>";
            g_intake.push({ hour: "08", min: "00", ampm: "AM" });
        }
    }
    else {
        for (var index = 0; index < options.length; index++) {
            str += "<option value='" + options[index] + "'>" + options[index] + "</option>";
            g_intake.push({ hour: "08", min: "00", ampm: "AM" });
        }
    }
   
    
 
    $("#intake-opts").html(str);

    $("#intake-opts").mobileSelect('refresh');
    
}

var g_intake = [];

function getIntakeTime() {
  
    var intakeValue = $('#intake-opts').children("option").filter(":selected").text() - 1;

   

        if (g_intake[intakeValue] == undefined)
            g_intake[intakeValue] = { hour: "08", min: "00", ampm: "AM" };
        g_intake[intakeValue].hour =parseInt(g_intake[intakeValue].hour)+  1;
   
    var intaketime = $('#intake-hour-opts').children("option").filter(":selected").text();
    var minute = $('#intake-minutes-opts').children("option").filter(":selected").text();
    var amPm = $('#intake-meridiem-opts').children("option").filter(":selected").text();
    

    //if (intake[intakeValue].hour == "08" && intake[intakeValue].min == "00" && intake[intakeValue].ampm == "AM")
    g_intake[intakeValue] = { hour: intaketime, min: minute, ampm: amPm };
   

    //sessionStorage.setItem("intake", JSON.stringify(intake));
    //return intake;
}

function loadTime() {
    var intakeValue = $('#intake-opts').children("option").filter(":selected").text() - 1;
    
    if(g_intake[intakeValue] == undefined)
        g_intake[intakeValue] = { hour: "08", min: "00", ampm: "AM" };
    
    $('#intake-hour-opts').mobileSelect('destroy');
    $('#intake-hour-opts').val(g_intake[intakeValue].hour).attr("selected", "selected");
    $('#intake-hour-opts').mobileSelect({
                                              title: 'Select the hour',
                                        onClose:getIntakeTime
                                              });
    
    $('#intake-minutes-opts').mobileSelect('destroy');
    $('#intake-minutes-opts').val(g_intake[intakeValue].min).attr("selected", "selected");
    $('#intake-minutes-opts').mobileSelect({
                                              title: 'Select the minute',
                                           onClose:getIntakeTime
                                              });
    
    $('#intake-meridiem-opts').mobileSelect('destroy');
    $('#intake-meridiem-opts').val(g_intake[intakeValue].ampm).attr("selected", "selected");
    $('#intake-meridiem-opts').mobileSelect({
                                              title: 'Select the meridiem',
                                            onClose:getIntakeTime
                                              });
}


 

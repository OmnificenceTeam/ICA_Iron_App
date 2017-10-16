function Medicine() {
    this.id = 0;
    this.name = "";
    this.type = 0;
    this.color = "";
    this.shape = "";
    this.strength ="";
    this.medStrength = ""; 
    this.reminderTiming = "";
    this.reminderDay = "";
    this.startDate = formatDate(new Date());
    this.endDate = formatDate(new Date());
    this.noOfIntakes = "";
    this.intakeTime = [{hour:"08", min:"00", ampm:"AM"}];
    //this.intakeHour = "";
    //this.intakeMin = "";
    //this.amOrPm = "";
    this.intakeDay = "";
    this.remindMeBefore = "";    
    this.reminders = [];
    this.foodAfiliation ="";
    this.reminderTone = "";
    this.intake = [];
    this.intakeType = 1;
    this.noOfMedicineShape = 0;
    this.generateReminders = function () {
        if (this.intakeType == 1)
            this.generateRemindersDaily();
        else if (this.intakeType == 2)
            this.generateRemindersHourly(this);
        else
            this.generateRemindersWeekly(this);
    }
    this.generateRemindersDaily = function () {
        try {
            var curDate = new Date();

            var remId = new Date().getTime() + "" + this.id;

            var intaketime = this.intakeTime;
            var sdate = new Date(this.startDate);
            var edate = new Date(this.endDate + " 11:59:59 PM");
            if (sdate < edate) {

                //  var startdate = new Date(this.startDate + " " + time + ":00 " + this.amOrPm);
                //  var enddate = new Date(this.endDate + " " + time + ":00 " + this.amOrPm);


                var days = [];
                var remIndex = 1;

                for (var index = 0; index < this.intakeTime.length; index++) {

                    var startdate = new Date(this.startDate + " " + intaketime[index].hour + ":" + intaketime[index].min + " " + intaketime[index].ampm);
                    var enddate = new Date(this.endDate + " " + intaketime[index].hour + ":" + intaketime[index].min + " " + intaketime[index].ampm);

                    for (var date = startdate ; date <= enddate; date.setDate(date.getDate() + 1)) {

                        var intake = {};
                        var MillisecPerMins = 60000;

                        //var reminderMeBefore = this.remindMeBefore;

                        //var reminderTime = new Date(date - reminderMeBefore * MillisecPerMins);
                        intake.reminderId = this.id + "-" + remIndex++;
                        intake.reminderDate = new Date(date);
                        intake.status = "nottaken";
                        intake.reminderTime = new Date(date);

                        var reminderDate = (intake.reminderDate.getMonth() + 1) + '/' + intake.reminderDate.getDate() + '/' + intake.reminderDate.getFullYear();
                        var currentDate = (new Date().getMonth() + 1) + '/' + new Date().getDate() + '/' + new Date().getFullYear();

                        if (reminderDate >= currentDate)

                            days.push(intake);

                    }

                }

                this.reminders = days;

            }
        }
        catch (e) { }

    };

    this.generateRemindersHourly = function (medicine) {
        var remIndex = 1;
        var sdate = new Date(medicine.startDate + " " + medicine.intakeTime.hour + ":" + medicine.intakeTime.min + " " + medicine.intakeTime.ampm);
        var edate = new Date(medicine.endDate + " 11:59:59 PM ");
        var days = [];

        while (sdate < edate) {
            if (new Date() < sdate)
                days.push({ reminderDate: sdate, reminderId: medicine.id + "-"+remIndex++, status: "nottaken" });
            sdate = new Date(sdate.getTime() + (60 * 1000 * 60 * parseInt(medicine.intakeTime.repeat)));
        }

        medicine.reminders = days;
    }
    
    this.generateRemindersWeekly = function (medicine) {
        var remIndex = 1;
        var sdate = new Date(medicine.startDate + " " + medicine.intakeTime.hour + ":" + medicine.intakeTime.min + " " + medicine.intakeTime.ampm);
        var edate = new Date(medicine.endDate + " 11:59:59 PM ");
        var days = [];

        while (sdate <= edate) {
            var isExists = medicine.intakeTime.days.indexOf("" + sdate.getDay()) > -1;
            if (new Date() < sdate && isExists)
                days.push({ reminderDate: sdate, reminderId: medicine.id + "-" + remIndex++, status: "nottaken" });
            sdate = new Date(sdate.getTime() + (60 * 1000 * 60 * 24));
        }

        medicine.reminders = days;
    }

}


function MedicineList() {


    this.medicineList = JSON.parse(localStorage.getItem("list"));
	this.uniqueid = JSON.parse(localStorage.getItem("uniqueid"));
	if(this.uniqueid == null || this.uniqueid == undefined)
		this.uniqueid = 0;
    if (this.medicineList == null || this.medicineList == undefined) {
        this.medicineList = {};
    }
    
    this.save=function(){
        localStorage.setItem("list", JSON.stringify(this.medicineList));
		localStorage.setItem("uniqueid", this.uniqueid + "");
    }
    this.addMedicine = function (medicine) {

        if(medicine.id == undefined || medicine.id == null || medicine.id == "")
            medicine.id = ++this.uniqueid + "";
        
        medicine.generateReminders();
        this.medicineList[medicine.id] = medicine;

        this.save();
        return medicine.id;
    };

    this.getMedicineByDay = function (date) {

        var dayMedList = [];
        if (date == undefined) {

            date = new Date();
        }


        var medList = Object.keys(this.medicineList);

        for (var medIndex = 0; medIndex < medList.length; medIndex++) {
            if (this.medicineList[medList[medIndex]].name == "EXJADE 125mg" || this.medicineList[medList[medIndex]].name == "EXJADE 250mg" || this.medicineList[medList[medIndex]].name == "EXJADE 500mg" )
            {
            var remd = this.medicineList[medList[medIndex]].reminders;

            for (var remdIndex = 0; remdIndex < remd.length; remdIndex++) {

                var remDate = new Date(this.medicineList[medList[medIndex]].reminders[remdIndex].reminderDate);
                var curdate=new Date(date);

                if ((remDate.getMonth() == curdate.getMonth()) && (remDate.getDate() == curdate.getDate()) && (remDate.getFullYear() == curdate.getFullYear())) {

                    var currentdate = new Date(parseInt(remDate.getTime()));
                    //var localeSpecificTime = currentdate.toLocaleTimeString();
                    
                    var hour = remDate.getHours() % 12;
                    if (remDate.getHours() == 12)
                        hour = 12;
                    var min = remDate.getMinutes();
                    var ampm = remDate.getHours() >= 12 ? "PM" : "AM";

                    dayMedList.push({

                        id: this.medicineList[medList[medIndex]].id,
                        name: this.medicineList[medList[medIndex]].name,
                        status: this.medicineList[medList[medIndex]].reminders[remdIndex].status,
                        date: this.medicineList[medList[medIndex]].reminders[remdIndex].reminderDate,
                        time: hour+" "+ampm

                    });


                }
            }
           }
        }

        return dayMedList;
    }

    this.calculatePercentage = function () {
        try {
            var btaken = false;
            var bnottaken = false;
            var percentage = "";
            var takenCount = 0;
            var noOfMedicines = 0;
            var nottakenCount = 0;
            var medListKeys = Object.keys(this.medicineList)
            for (var medIndex = 0; medIndex < medListKeys.length; medIndex++) {

                var remd = this.medicineList[medListKeys[medIndex]].reminders;

                for (var remdIndex = 0; remdIndex < remd.length; remdIndex++) {

                    var remDate = new Date(this.medicineList[medListKeys[medIndex]].reminders[remdIndex].reminderDate);
                    var status = Object.keys(Status);
                    var exjadeObj = Object.keys(ExjadeObj);
                    if (remDate <= new Date()) {

                        for (var i = 0; i <= exjadeObj.length; i++) {
                            if (remd[remdIndex].status == status[0].toLowerCase()) {

                                if ((this.medicineList[medListKeys[medIndex]].name.toLowerCase() == exjadeObj[i])) {
                                    takenCount++;
                                    noOfMedicines++;
                                    btaken = true;
                                }



                            }
                            else if ((this.medicineList[medListKeys[medIndex]].name.toLowerCase() == exjadeObj[i])) {
                                nottakenCount++;
                                noOfMedicines++;
                                bnottaken = true;
                            }

                        }


                    }
                }
            }
        }
        catch (err) { }
        if (percentage == NaN || percentage == null || percentage == undefined)
            percentage = 0;
        else
            percentage = parseInt((takenCount / noOfMedicines) * 100);
       
        return percentage;
    }
    this.getDayMedicines = function (date) {

        var btaken = false;
        var bnotTaken = false;

        if (date == undefined)
            date = new Date();
        var dayMedList = this.getMedicineByDay(date);
        var dayMedicines = {};

        timeArrayForDayView = ["12 AM", "1 AM", "2 AM", "3 AM", "4 AM", "5 AM",
        "6 AM", "7 AM", "8 AM", "9 AM", "10 AM", "11 AM", "12 PM", "1 PM", "2 PM", "3 PM", "4 PM", "5 PM", "6 PM", "7 PM", "8 PM", "9 PM", "10 PM", "11 PM"];
        var statusColor = ["red", "yellow", "lightgray"];
        var medStatus;
        var status = Object.keys(Status);
        for (var dayMedIndex = 0; dayMedIndex < dayMedList.length; dayMedIndex++) {

            for (var timeIndex = 0; timeIndex < timeArrayForDayView.length; timeIndex++) {

                var remdDate = new Date(dayMedList[dayMedIndex].date);
                var reminderDate = (remdDate.getMonth() + 1) + '/' + remdDate.getDate() + '/' + remdDate.getFullYear();
                var currentDate = (new Date().getMonth() + 1) + '/' + new Date().getDate() + '/' + new Date().getFullYear();

            //    if (reminderDate <= currentDate) {
              
                    if (dayMedList[dayMedIndex].time == timeArrayForDayView[timeIndex]) {

                        if (dayMedList[dayMedIndex].status == status[0].toLowerCase())
                            dayMedList[dayMedIndex].medstatus = statusColor[1];
                        else if (dayMedList[dayMedIndex].status == status[1].toLowerCase())
                            dayMedList[dayMedIndex].medstatus = statusColor[0];
                        
                        if (dayMedicines[dayMedList[dayMedIndex].time] == undefined)
                            dayMedicines[dayMedList[dayMedIndex].time] = [];
                        
                        if(reminderDate >currentDate)
                            dayMedList[dayMedIndex].medstatus=statusColor[2];
                        
                        dayMedicines[dayMedList[dayMedIndex].time].push(dayMedList[dayMedIndex]);

                    }
             //   }

            }

        }

        return dayMedicines;

    }


    this.reminderStatus = function (dayList) {

        var btaken = false;
        var bnotTaken = false;

        for (var dayListIndex = 0; dayListIndex < dayList.length; dayListIndex++) {

            var status = Object.keys(Status);

            if (dayList[dayListIndex].status == status[1].toLowerCase()) {
                bnotTaken = true;
            }
            else if (dayList[dayListIndex].status == status[0].toLowerCase()) {
                btaken = true;
            }

            var dailystatus = Object.keys(DailyStatus);
            if (btaken == true && bnotTaken == false) {

                dayList[dayListIndex].status = dailystatus[0];
            }
            else if (btaken == false && bnotTaken == true) {

                dayList[dayListIndex].status = dailystatus[1];
            }
            else if (btaken == true && bnotTaken == true) {
                dayList[dayListIndex].status = dailystatus[2];
            }
            else {
                dayList[dayListIndex].status = dailystatus[3];
            }

        }
        return dayList;

    }


    this.getWeekStatus = function (date) {

        var btaken = false;
        var bnotTaken = false;
        var weekStatus = [{}, {}, {}, {}, {}, {}, {}];
        var weekMedList = this.getMedicineByWeek(date);


        var statusColor = ["red", "yellow", "lightgray"];
        var status = Object.keys(Status);

        for (var index = 0; index < weekMedList.length; index++) {

            var timeKeys = Object.keys(weekMedList[index]);
            var s = {};
            for (var timeIndex = 0; timeIndex < timeKeys.length; timeIndex++) {

                var time = timeKeys[timeIndex];

                var medArray = weekMedList[index][time];
                for (var medIndex = 0; medIndex < medArray.length; medIndex++) {

                    if (new Date(medArray[medIndex].date) <= new Date()) {
                        if (medArray[medIndex].status == status[0].toLowerCase())
                            btaken = true;
                        else if (medArray[medIndex].status == status[1].toLowerCase())
                            bnotTaken = true;
                    }
                    else {
                       btaken = false;
                       bnotTaken = false;
                    }
                }


                var weekstatusIndex = 0;
                if ((bnotTaken == true && btaken == false) || (btaken==true && bnotTaken==true)) {
                    s[time] = (statusColor[0]);
                }
                else if (bnotTaken == false && btaken == true) {
                    s[time] = (statusColor[1]);
                }
                else if (bnotTaken == false && btaken == false) {
                    s[time] = (statusColor[2]);
                }

            }
            weekStatus[index] = s;

        }

        return weekStatus;
    }
    this.getMedicineByWeek = function (date) {

        var weekMedList = [];
        if (date == undefined) {

            date = new Date();
        }

        var mList = [];
        var nextday = new Date(date);
        var previousDay = new Date(date);

        if (date.getDay() == 6) {

            var day = new Date(nextday.setDate(nextday.getDate() - 6));
            mList = this.getDayMedicines(day);
            weekMedList[day.getDay()] = mList;
        }
        while (previousDay.getDay() != 6) {

            mList = this.getDayMedicines(previousDay);

            weekMedList[previousDay.getDay()] = mList;

            previousDay.setDate(previousDay.getDate() - 1);


        }

        while (nextday.getDay() != 6) {

            nextday.setDate(nextday.getDate() + 1);

            mList = this.getDayMedicines(nextday);
            // weekMedList.push(mList);
            weekMedList[nextday.getDay()] = mList;


        }

        return weekMedList;

    }

    this.getMedicineByMonth = function (date) {


        var btaken = false;
        var bnotTaken = false;
        var weekStatus = [{}, {}, {}, {}, {}, {}, {}];
        var weekMedList = this.getMedicineByWeek(date);


        var statusColor = ["red", "green", "yellow","gray"];
        var status = Object.keys(Status);
        var s = {};
        for (var index = 0; index < weekMedList.length; index++) {

            var timeKeys = Object.keys(weekMedList[index]);
           
            for (var timeIndex = 0; timeIndex < timeKeys.length; timeIndex++) {

                var time = timeKeys[timeIndex];
                
                var medArray = weekMedList[index][time];
                
               
                for (var medIndex = 0; medIndex < medArray.length; medIndex++) {

                    var date=(new Date(medArray[medIndex].date)).getDate();
                    if (medArray[medIndex].status == status[0].toLowerCase())
                        btaken = true;
                    else if (medArray[medIndex].status == status[1].toLowerCase())
                        bnotTaken = true;
                }

                var weekstatusIndex = 0;
                if (bnotTaken == true && btaken == false) {
                    s[date] = (statusColor[0]);
                }
                else if (bnotTaken == false && btaken == true) {
                    s[date] = (statusColor[1]);
                }
                else if (bnotTaken == false && btaken == false) {
                    s[date] = (statusColor[2]);
                }
               

            }
           // weekStatus[index] = s;

        }

        return s;

    }

    this.getMedicineByYear = function (date) {

        var yearStatus = {};
        var firstDay = new Date(date.getFullYear(), 0, 1);
        var year = date.getFullYear();
        var yearList = [];
        while (firstDay.getFullYear() == year) {

            yearList = this.getMedicineByDay(firstDay);

            var yearListids = Object.keys(yearList);

            var noOfDays = 1;
            for (var yearListIndex = 0 ; yearListIndex < yearListids.length ; yearListIndex++) {

                yearStatus["d" + noOfDays] = yearList[yearListIndex].status;
            }

            noOfDays++;
            firstDay.setDate(firstDay.getDate() + 1);
        }

        return yearStatus;

    }
    
    this.getMedicineList = function () {
        
        var todayMedList = [];
        var medListKeys = Object.keys(this.medicineList);
        for (var medListIndex = 0; medListIndex < medListKeys.length; medListIndex++) {
            
            //var remdKeys = this.medicineList[medListKeys[medListIndex]].reminders;
            
            //for (var remdIndex = 0; remdIndex < remdKeys.length; remdIndex++) {
                
                //var remDate = new Date(this.medicineList[medListKeys[medListIndex]].reminders[remdIndex].reminderDate);
                
                //if ((remDate.getMonth() == new Date().getMonth()) && (remDate.getDate() == new Date().getDate()) && (remDate.getFullYear() == new Date().getFullYear())) {
                    
                    todayMedList.push({
                                      
                                      id: this.medicineList[medListKeys[medListIndex]].id,
                                      //time: this.medicineList[medListKeys[medListIndex]].intakeTime + " " + this.medicineList[medListKeys[medListIndex]].amOrPm,
                                      name: this.medicineList[medListKeys[medListIndex]].name,
                                      //dose: this.medicineList[medListKeys[medListIndex]].strength + " " + this.medicineList[medListKeys[medListIndex]].medStrength,
                                      type: this.medicineList[medListKeys[medListIndex]].type,
                                      //taken: this.medicineList[medListKeys[medListIndex]].reminders[remdIndex].status,
                                      
                                      strength:this.medicineList[medListKeys[medListIndex]].strength,
                                      medStrength: this.medicineList[medListKeys[medListIndex]].medStrength,
                                      shape: this.medicineList[medListKeys[medListIndex]].shape,
                                      color: this.medicineList[medListKeys[medListIndex]].color,
                                      //reminderTiming: this.medicineList[medListKeys[medListIndex]].reminderTiming,
                                      //reminderDay: this.medicineList[medListKeys[medListIndex]].reminderDay,
                                      //noOfIntakes:this.medicineList[medListKeys[medListIndex]].noOfIntakes,
                                      //startDate: this.medicineList[medListKeys[medListIndex]].startDate,
                                      //endDate: this.medicineList[medListKeys[medListIndex]].endDate,
                                      //time: this.medicineList[medListKeys[medListIndex]].intakeTime + " " + this.medicineList[medListKeys[medListIndex]].amOrPm,
                                      //intakeDay: this.medicineList[medListKeys[medListIndex]].intakeDay,
                                      //reminderTone: this.medicineList[medListKeys[medListIndex]].reminderTone,
                                      //foodAfiliation: this.medicineList[medListKeys[medListIndex]].foodAfiliation,
                                      //remindMeBefore: this.medicineList[medListKeys[medListIndex]].remindMeBefore,
                                      //amOrPm: this.medicineList[medListKeys[medListIndex]].amOrPm,
                                      //intakeTime: this.medicineList[medListKeys[medListIndex]].intakeTime,
                                      //remIndex: remdIndex,
                                      //index: medListIndex
                                      });
                    
                //}
            //}
            
        }

       
        
        return todayMedList;
    }
    
    this.getTodayMedicineList = function () {

        var todayMedList = [];
        var medListKeys = Object.keys(this.medicineList);

        for (var medListIndex = 0; medListIndex < medListKeys.length; medListIndex++) {

            var remdKeys = this.medicineList[medListKeys[medListIndex]].reminders;

            for (var remdIndex = 0; remdIndex < remdKeys.length; remdIndex++) {

                var remDate = new Date(this.medicineList[medListKeys[medListIndex]].reminders[remdIndex].reminderDate);

                if ((remDate.getMonth() == new Date().getMonth()) && (remDate.getDate() == new Date().getDate()) && (remDate.getFullYear() == new Date().getFullYear())) {
                    var hour = remDate.getHours() % 12;
                    if (remDate.getHours() == 12 || remDate.getHours() == 0)
                        hour = 12;
                    var min = remDate.getMinutes();
                    if (min < 10)
                        min = "0" + min;
                    var ampm = remDate.getHours() >= 12 ? "PM" : "AM";
                 

                    todayMedList.push({

                        id: this.medicineList[medListKeys[medListIndex]].id,
                        name: this.medicineList[medListKeys[medListIndex]].name,
                        dose: this.medicineList[medListKeys[medListIndex]].strength + " " + this.medicineList[medListKeys[medListIndex]].medStrength,

                        taken: this.medicineList[medListKeys[medListIndex]].reminders[remdIndex].status,
                       
                        strength:this.medicineList[medListKeys[medListIndex]].strength,
                        medStrength: this.medicineList[medListKeys[medListIndex]].medStrength,
                        shape: this.medicineList[medListKeys[medListIndex]].shape,
                        color: this.medicineList[medListKeys[medListIndex]].color,
                        reminderTiming: this.medicineList[medListKeys[medListIndex]].reminderTiming,
                        reminderDay: this.medicineList[medListKeys[medListIndex]].reminderDay,
                        noOfIntakes:this.medicineList[medListKeys[medListIndex]].noOfIntakes,
                        startDate: this.medicineList[medListKeys[medListIndex]].startDate,
                        endDate: this.medicineList[medListKeys[medListIndex]].endDate,
                        reminderDate: new Date(remDate),
                        time: hour+":"+min+" "+ampm,
                        intakeDay: this.medicineList[medListKeys[medListIndex]].intakeDay,
                        reminderTone: this.medicineList[medListKeys[medListIndex]].reminderTone,
                        foodAfiliation: this.medicineList[medListKeys[medListIndex]].foodAfiliation,
                        remindMeBefore: this.medicineList[medListKeys[medListIndex]].remindMeBefore,
                        amOrPm: this.medicineList[medListKeys[medListIndex]].amOrPm,
                        intakeTime: this.medicineList[medListKeys[medListIndex]].intakeTime,
                        remIndex: remdIndex,
                        index: medListIndex,
                        isPast:(new Date() > remDate)
                    });

                }
            }

        }
       
        return todayMedList;
    }


    this.getMyMedicines = function () {

        var myMedicines = [];

        var medListKeys = Object.keys(this.medicineList);

        for (var medListIndex = 0; medListIndex < medListKeys.length; medListIndex++) {

            var remdKeys = this.medicineList[medListKeys[medListIndex]].reminders;

            for (var remdIndex = 0; remdIndex < remdKeys.length; remdIndex++) {

                var remDate = new Date(this.medicineList[medListKeys[medListIndex]].reminders[remdIndex].reminderDate);

                if ((remDate.getMonth() == new Date().getMonth()) && (remDate.getDate() == new Date().getDate()) && (remDate.getFullYear() == new Date().getFullYear())) {

                    myMedicines.push({

                        id: this.medicineList[medListKeys[medListIndex]].id,
                        name: this.medicineList[medListKeys[medListIndex]].name,
                        strength: this.medicineList[medListKeys[medListIndex]].strength + " " + this.medicineList[medListKeys[medListIndex]].medStrength,
                        shape: this.medicineList[medListKeys[medListIndex]].shape,
                        color: this.medicineList[medListKeys[medListIndex]].color

                    });
                }
            }
        }
        return myMedicines;
    }

    this.deleteMedicine = function (id) {

        var medList = [];
      // medList.push(this.medicineList);
       
        var medListKeys = Object.keys(this.medicineList);
        var index = -1;
             
        for (var i = 0; i < medListKeys.length; i++) {

            if (medListKeys[i] == id) {

                delete this.medicineList[id];
                
            }
        }
        
        
        this.save();
       		
        return this.medicineList;

    }


    this.medicineSummary = function (medid) {

        var frequency = ["", "Once Daily", "Twice Daily", "Thrice Daily", "Four times a day", "Five times a day"];
        var weekDays = ["Sun","Mon","Tue","Wed","Thu","Fri","Sat"];
        var med = this.medicineList[medid];
        var medDetails = {};
        var oneDay = 24 * 60 * 60 * 1000;
        var endDate = new Date(med.endDate);
        var startDate = new Date(med.startDate);

        var noOfDays = Math.round(Math.abs((endDate.getTime() - startDate.getTime()) / (oneDay)));
        //if (noOfDays == 0)
        //    noOfDays = 1;
        var duration;
       
        if (med.intakeType == 1) {
            medDetails = {

                name: med.name,
                dose: med.strength + " " + med.medStrength,
                take: med.reminderDay,
                intakeTime: med.intakeTime,
                noOfDays: noOfDays+1,
                when: med.foodAfiliation,
                type:med.intakeType


            };

        }
        else if (med.intakeType == 2) {

            var hour = med.intakeTime.repeat;
            var arr = {2:"Two hours once", 4:"Four hours once", 6:"Six hours once", 8:"Eight hours once"};

            medDetails = {

                name: med.name,
                dose: med.strength + " " + med.medStrength,
                take: arr[med.intakeTime.repeat],
                intakeTime: med.intakeTime.hour+":"+med.intakeTime.min+" "+med.intakeTime.ampm,
                noOfDays: noOfDays+1,
                when: med.foodAfiliation,
                type: med.intakeType

            };

        }

        else if (med.intakeType == 3) {
            var days=[];
            for (var i = 0; i < med.intakeTime.days.length; i++)

            days.push(weekDays[med.intakeTime.days[i]]);
            medDetails = {

                name: med.name,
                dose: med.strength + " " + med.medStrength,
                take:days,
                intakeTime: med.intakeTime.hour + ":" + med.intakeTime.min + " " + med.intakeTime.ampm,
                noOfDays: noOfDays+1,
                when: med.foodAfiliation,
                type: med.intakeType

            };
        }

        return medDetails;


    }

    this.updateTakenStatus = function (medicine, status) {

        this.medicineList[medicine.id].reminders[medicine.remIndex].status = status;
            
        localStorage.setItem("list", JSON.stringify(this.medicineList));

        return this.medicineList;
    }
   
 
    this.weekDays = function (date) {

        if (date == undefined)
            date = new Date();
        var weekArray = [];
        var nextday = new Date(date);
        var previousDay = new Date(date);

        if (nextday.getDay() == 6) {

            var today = new Date(nextday.setDate(nextday.getDate() - 6));
            var day = new Date(today);
            
            weekArray.push(day);

        }

        while (previousDay.getDay() != 6) {

            var day = new Date(previousDay);
           
            weekArray.push(day);

            previousDay.setDate(previousDay.getDate() - 1);
        }

        while (nextday.getDay() != 6) {

            nextday.setDate(nextday.getDate() + 1);
            var day = new Date(nextday);
           
            weekArray.push(day);


        }

       weekArray.sort();
        

        return weekArray;

    }

    this.getMonthStatus = function (date) {

        if (date == undefined)
            date = new Date();
        var monthname = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"];
        var btaken = false;
        var bnottaken = false;
       
        var firstDate = new Date(date.getFullYear(), date.getMonth(), 1);

        var monthStatus = [
            [{}, {}, {}, {}, {}, {}, {}],
            [{}, {}, {}, {}, {}, {}, {}],
            [{}, {}, {}, {}, {}, {}, {}],
            [{}, {}, {}, {}, {}, {}, {}],
            [{}, {}, {}, {}, {}, {}, {}],
            [{}, {}, {}, {}, {}, {}, {}],
          ];
        var firstDay = firstDate.getDay();
        var selMonth = date.getMonth();
        
        var weeknumber = 0;

        if (firstDay == 0) {
           // for (var index = 0; index < firstDay; index++)
            //   monthStatus[weeknumber].push({});
            weeknumber = -1;
        }
      
        while (firstDate.getMonth() == selMonth) {

            if (firstDate.getDay() == 0)
                weeknumber++;

            dayMedList = this.getMedicineByDay(firstDate);

            //for(var dayMedIndex=0; dayMedIndex<dayMedList.length; dayMedIndex++){

            //    if (new Date(dayMedList[dayMedIndex].date) <= new Date()) {
            //       
            //    }
            //}
            var statusColor = ["red", "yellow", "lightgray"];
            var status = Object.keys(Status);


            for(var dayMedIndex=0; dayMedIndex<dayMedList.length; dayMedIndex++){
            
                if (new Date(dayMedList[dayMedIndex].date) <= new Date()) {

                    if (dayMedList[dayMedIndex].status == status[1].toLowerCase())
                        bnottaken = true;
                    else if (dayMedList[dayMedIndex].status == status[0].toLowerCase())
                        btaken = true;
                }
                else{
                    btaken=false;
                    bnottaken=false;
                    monthStatus[weeknumber][firstDate.getDay()] = { date: firstDate.getDate(),day:firstDate,status: statusColor[2]};
                }
               
            }
            if (dayMedList.length == 0) {
                monthStatus[weeknumber][firstDate.getDay()] = { date: firstDate.getDate(),day:firstDate, status: "" };
            }
            else {
                if (btaken == true && bnottaken == false)
                    monthStatus[weeknumber][firstDate.getDay()] = { date: firstDate.getDate(),day:firstDate, status: statusColor[1] };

                else if ((btaken == false && bnottaken == true)  || (btaken==true && bnottaken==true))
                    monthStatus[weeknumber][firstDate.getDay()] = { date: firstDate.getDate(),day:firstDate, status: statusColor[0] };
               
                
            }
           
            firstDate.setDate(firstDate.getDate() + 1);
        }

        //if (firstDate.getDay() != 0)
        //{
        //    for (var index = firstDate.getDay() ; index <= 6; index++)
        //        monthStatus[weeknumber].push({});
        //    weeknumber++;
        //}
      //  if (monthStatus[5].length == 0) {
            //for (var index = 0; index < 7; index++)
            //    monthStatus[5].push({});
        //}
        
        return monthStatus;
    }

    this.getYearStatus = function (date) {

       
        var yearStatus = [[], [], [], [], [], [], [], [], [], [], [], []];

        if (date == undefined)
            date = new Date();

        date.setMonth(0);
        for (var index = 0; index < 12; index++) {
        
                
                yearStatus[index] = this.getMonthStatus(date);
                date.setMonth(date.getMonth() + 1);
            
        }
        return yearStatus;
    }

    this.editMedicine = function (medicine) {
      
      
    }

}


var g_medicineList = new MedicineList();

var g_snooze = [];
function getMedicine(id, type) {
    if(type == "add" || type == "edit") {
        if(id == "snooze") {
            var data = g_snooze[0];
            data.action = "snooze";
            g_snooze.pop();
            onBack();
            return JSON.stringify(data);
        }
        onBack();
    }
    if(type== "delete")
        return JSON.stringify({ id: id, action: type });

    g_medicineList.medicineList[id].action = type;
    return JSON.stringify(g_medicineList.medicineList[id]);
}

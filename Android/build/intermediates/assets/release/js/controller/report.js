function ReportController($scope) {
    $scope.pageClass = 'report';
    
    $scope.height=(window.innerHeight-85)+"px";
    
    $scope.timeArrayForDayView = ["12 AM", "1 AM", "2 AM", "3 AM", "4 AM", "5 AM",
        "6 AM", "7 AM", "8 AM", "9 AM", "10 AM", "11 AM", "12 PM", "1 PM", "2 PM", "3 PM", "4 PM", "5 PM", "6 PM", "7 PM", "8 PM", "9 PM", "10 PM", "11 PM"];

    $scope.days = ["Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"];

    $scope.monthname = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"];

    $scope.month = $scope.monthname[new Date().getMonth()];
    $scope.year = new Date().getFullYear();
    $scope.dayMedicines = g_medicineList.getDayMedicines(date);
    var date = new Date();
    $scope.curDate =(date.getMonth() + 1)+'/'+ date.getDate() + '/' +date.getFullYear();
    
    $scope.showDayView=function(){
        var date = new Date();
        $scope.curDate =(date.getMonth() + 1)+'/'+ date.getDate() + '/' +date.getFullYear();
        $scope.dayMedicines = g_medicineList.getDayMedicines($scope.curDate);
        showdayview();
    }
   
    $scope.showdayviewforWeek=function(index){
        
        
     //   var date=($scope.weekArray[index]).getDate()+'/'+(($scope.weekArray[index]).getMonth()+1)+'/'+($scope.weekArray[index]).getFullYear();
        var date=$scope.weekArray[index];
        $scope.curDate =(date.getMonth() + 1)+'/'+ date.getDate() + '/' +date.getFullYear();
    $scope.dayMedicines = g_medicineList.getDayMedicines($scope.weekArray[index]);
        showdayview();
    }

    $scope.showDayViewforMonth=function(month,year,date){
        
        
        $scope.curDate = ($scope.monthname.indexOf(month)+1) +'/'+date+'/'+year;

        $scope.dayMedicines = g_medicineList.getDayMedicines($scope.curDate);
        showdayview();
    }
    
    $scope.showDayViewforYear=function(date,month,year){
        
        $scope.curDate =  (month+1) +'/'+date+ '/' +year;
        $scope.dayMedicines = g_medicineList.getDayMedicines($scope.curDate);
        showdayview();
    }

    
    $scope.weekArray = g_medicineList.weekDays();
    $scope.weekArray.sort(function(a,b){
                          return (a>b)?1:-1;
                          });

    $scope.weekStatus = g_medicineList.getWeekStatus();

    $scope.monthStatus = g_medicineList.getMonthStatus();

    $scope.yearStatus = g_medicineList.getYearStatus();
    $scope.percentage = g_medicineList.calculatePercentage();
    if(isNaN($scope.percentage))
        $scope.percentage=0;
  

}

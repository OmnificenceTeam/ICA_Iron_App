function HomePageController($scope) {
    $scope.defaultShowHide = false;
    $scope.lists = g_medicineList.getTodayMedicineList();
    $scope.pageClass = 'homepage';

    setTimeout(function(){ window.location = "uniwebview://reminder?type=page&loc=home"},500);
   
    $scope.updateTakenStatus = function (medicine) {
       
        if (medicine.taken == "nottaken" && !medicine.isPast)
            return;
        g_medicineList.updateTakenStatus(medicine, medicine.taken == "taken" ? "nottaken" : "taken");
        $scope.lists = g_medicineList.getTodayMedicineList();

    }

    $scope.onMyMedicines = function () {
        PageStack.push("#mymedicine");
    }

    $scope.onReport = function () {
        PageStack.push("#report");
    }

    $scope.onAddMedicine = function () {
      
        PageStack.push("#addmedicine");
    }

    $scope.checkTime = function (index) {
        
        if($scope.lists[index].taken == "nottaken")
        {
            return $scope.lists[index].isPast ? "red" : "gray";
        }
        else
            return "green";
        /*var color = "";
        var hour = date.getHours() % 12;
        if (date.getHours() == 12)
            hour = 12;
        var intakeTime = new Date().setHours(hour,date.getMinutes(),date.getSeconds());
       
        var curdate = new Date().getTime();
       

        var s = Object.keys(Status);

        if (intakeTime <= curdate && status == s[1].toLowerCase()) {
            color = "red";
        }
        else if (intakeTime <= curdate && status == s[0].toLowerCase())
            color = "green";
        else if(intakeTime > curdate){
            color = "gray";
        }
        return color;*/
    }

}


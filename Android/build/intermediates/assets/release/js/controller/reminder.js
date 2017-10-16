function ReminderController($scope) {
    try {
        $scope.reminder = g_reminders;
        $scope.mediname = g_reminders[0].desc;
    }
    catch (err) { }

    $scope.snooze = function () {

        alert("");
    }

    $scope.setTaken = function () {
        var reminder = g_reminders[0];
        var medicine = g_medicineList.medicineList[reminder.medicineId];
        
        var reminderIndex = -1;
        var reminderObject = medicine.reminders.find(function (o, index, arr) { reminderIndex = index; return o.reminderId == reminder.reminderId; });

        if (reminderObject != undefined) {
            g_medicineList.updateTakenStatus({ remIndex: reminderIndex, id: medicine.id }, "taken");
        }

        g_reminders.shift();

        console.log(JSON.stringify(g_reminders));
        if (g_reminders.length > 0) {
            setTimeout(function () {
                $scope.mediname = g_reminders[0].desc;
                $scope.$apply();
            }, 500);
        }
        else 
            PageStack.pop();

    }
}

function snooze() {
    var reminder = g_reminders[0];
    var snoozeTime = parseInt($('#snooze-time-opts').val());
    if(snooze != 0)
    {
        var reminderDate = new Date(new Date().getTime() + (snoozeTime * 60 * 1000));;
    
    //reminderDate = new Date(reminderDate.getTime() * snoozeTime * 1000);
        reminder.reminderDate = reminderDate;
        g_snooze.push(reminder);
        window.location = "uniwebview://reminder?type=add&ctxid=snooze";
    }
    
    g_reminders.shift();
    
    console.log(JSON.stringify(g_reminders));
    if (g_reminders.length > 0) {
        setTimeout(function () {
                   $scope.mediname = g_reminders[0].desc;
                   $scope.$apply();
                   }, 500);
    }
    else {
        setTimeout(function () {
        PageStack.pop();
                   }, 500);
    }
}

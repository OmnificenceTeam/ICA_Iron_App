
var app = angular.module("medicineApp", ['ngRoute', 'ngAnimate', 'ngTouch']);

app.controller("AddMedicineController", AddMedicineController);

app.controller('AddMedicineByOptionController', AddMedicineByOptionController);

app.controller('ReminderController', ReminderController);
app.controller('HomePageController', HomePageController);
app.controller('MedicineListController', MedicineListController);
app.controller('MedicineSummaryController', MedicineSummaryController);
app.controller('ReportController', ReportController);

app.config(function ($routeProvider) {
    $routeProvider
    	.when('/', {
    	    templateUrl: 'templates/homepage.html',
    	    controller: 'HomePageController'
    	})
    	.when('/mymedicine', {
    	    templateUrl: 'templates/mymedicine.html',
    	    controller: 'MedicineListController'
    	})
    	.when('/report', {
    	    templateUrl: 'templates/report.html',
    	    controller: 'ReportController'
    	})
    	.when('/addmedicine', {
    	    templateUrl: 'templates/addmedicine.html',
    	    controller: 'AddMedicineController'
    	})
        .when('/addmedicinebyOption', {
            templateUrl: 'templates/addmedicinebyOption.html',
            controller: 'AddMedicineByOptionController'
        })
    	.when('/medicinesummary', {
    	    templateUrl: 'templates/medicinesummary.html',
    	    controller: 'MedicineSummaryController'
    	})
        .when('/reminder', {
            templateUrl: 'templates/reminder.html',
            controller: 'ReminderController'
        })



});

app.run(function ($rootScope, $location) {
    $rootScope.goHome = function () {
        //$('#gotoAddMedicine').click();
        $rootScope.onBack();
    }
});

function goHomeFromUnity() {
    angular.element(document.body).injector().get('$rootScope').goHome();
}


function onBack() {
    return PageStack.pop();
}

var PageStack = {
    stack: [],
    currenturl:"#",
    push: function (newurl) {
        this.stack.push(this.currenturl);
        window.location = newurl;
        this.currenturl = newurl;
        setTimeout(function () {
            window.location = "uniwebview://reminder?type=page&loc=others";
        }, 1000);
    },
    pop: function () {
        if (this.stack.length > 0) {
            var page = this.stack.pop();
            window.location = page;
            this.currenturl = page;
            if (page == "#") {
                setTimeout(function () {
                    window.location = "uniwebview://reminder?type=page&loc=home";
                }, 1000);
            }
        }
        return "true";
    }
};
var g_reminders = [];
function onReminder(json) {

    var newReminder = JSON.parse(json);
    for(var index = 0; index < newReminder.reminders.length; index++)
    {
        g_reminders.push(newReminder.reminders[index]);
    }
    console.log(JSON.stringify(g_reminders));
    if(PageStack.currenturl != "#reminder")
        PageStack.push("#reminder")

}

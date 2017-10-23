
var selectedDate = new Date();
var days = ['Sunday', 'Monday', 'Tuesday', 'Wednesday', 'Thurday', 'Friday', 'Saturday'];

function setDate() {
    $("#date").html(selectedDate.getDate());
    $("#year").html(selectedDate.getFullYear());
    $("#day").html((selectedDate.getDay() < 10) ? '0' + selectedDate.getDay() : selectedDate.getDay());
    $("#weekday").html(days[selectedDate.getDay()]);
    var weekNumber = selectedDate.getWeek();
    $("#week").html(weekNumber < 10 ? '0' + weekNumber : weekNumber);
}

function subtractDate() {
    selectedDate.setDate(selectedDate.getDate() - 1);
    setDate();
}

function addDate() {
    selectedDate.setDate(selectedDate.getDate() + 1);
    setDate();
}


Date.prototype.getWeek = function () {
    var onejan = new Date(this.getFullYear(), 0, 1);
    return Math.ceil((((this - onejan) / 86400000) + onejan.getDay() + 1) / 7);
}


$('#myCarousel').bind('slide.bs.carousel', function (e) {
    console.log('slide event!');
});

$('#myCarousel').bind('slid', function (e) {
    console.log("slid event!");
});


function changecolor() {
    var mycolor = $('.colorchange').val();
    if (mycolor == "Blue") {
        $('.colorchange').css("color", "blue");
    }
    if (mycolor == "Yellow") {
        $('.colorchange').css("color", "yellow");
    }
    if (mycolor == "Red") {
        $('.colorchange').css("color", "red");
    }
    if (mycolor == "Green") {
        $('.colorchange').css("color", "green");
    }


}


function showdayview() {

    $("#dayview").show();
    $("#monthview").hide();
    $("#weekview").hide();
    $("#yearview").hide();
    onClick("#dayviewside");
    changeTopMenu("#dayviewTop");

}
function onClick(item) {

    $(".calendarsideview").removeClass("active");
    $(item).addClass("active");
}
function changeTopMenu(item) {

    $(".topcalendarsideview").removeClass("active");
    
    $(item).addClass("active");
}

function showmonthview() {
    $("#dayview").hide();
    $("#monthview").show();
    $("#weekview").hide();
    $("#yearview").hide();
   
}

function showweekview() {
    $("#dayview").hide();
    $("#monthview").hide();
    $("#weekview").show();
    $("#yearview").hide();
}

function showyearview() {
    $("#dayview").hide();
    $("#monthview").hide();
    $("#weekview").hide();
    $("#yearview").show();

}

 function heightofa(){

     var a = $("#a").height();
     
    $('.calendarviewbg').css("height", a);

 }

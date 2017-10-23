
function MedicineSummaryController($scope) {


    // $scope.meddetail = { name: "Medi name", quantity: "200 mg", take: "2", time: "03:00", day: "Monday", nod: "7", duration: "8", when: "now" }
    $scope.pageClass = 'medicinesummary';

    var medid = sessionStorage.getItem("medicineid");
    $scope.meddetail = g_medicineList.medicineSummary(medid)
 
}

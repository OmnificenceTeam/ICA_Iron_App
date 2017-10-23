function MedicineListController($scope, $rootScope) {

    $scope.medList = g_medicineList.getMedicineList();
    function compare(a, b) {
        if (a.name < b.name)
            return -1;
        if (a.name > b.name)
            return 1;
        return 0;
    }

    $scope.medList.sort(compare);
   // $scope.medicines = ['Medicine 1', 'Medicine 2', 'Medicine 3', 'Medicine 4'];
    $scope.pageClass = 'mymedicine';
   
    $scope.onAddMedicine = function() {
        
        PageStack.push("#addmedicine");
    }

    $scope.medicineSummary = function (medicine) {
        //$scope.medDetails = g_medicineList.medicineSummary(medicine);
        sessionStorage.setItem("medicineid", medicine.id);
        PageStack.push("#medicinesummary");
    }

    $scope.deleteMedicine = function (id) {
        $("#deleteModal").modal('show');
        g_deleteMedicineId = id;
        //$scope.medList = g_medicineList.deleteMedicine(id);
        //window.location = "uniwebview://reminder?type=delete&ctxid=" + id;
    }

    $rootScope.onMedicineDeleted = function() {
        $scope.medList = g_medicineList.getMedicineList();
        $scope.$apply();
    }

    $scope.editMedicine = function (id, type) {
        sessionStorage.setItem('medicineDetails', id);
      
        if (type == 1) {
             sessionStorage.setItem('medicinetype', '1');
        }
        else {
               sessionStorage.setItem('medicinetype', '0');
        }
        
        PageStack.push("#addmedicine");
        
    }

}
var g_deleteMedicineId = "";
function deleteMedicine() {
    g_medicineList.deleteMedicine(g_deleteMedicineId);
    window.location = "uniwebview://reminder?type=delete&ctxid=" + g_deleteMedicineId;
    angular.element(document.body).injector().get('$rootScope').onMedicineDeleted();
    $("#deleteModal").modal('hide');
}

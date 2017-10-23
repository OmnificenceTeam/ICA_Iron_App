function AddMedicineByOptionController($scope) {
    $scope.option = "";
    $scope.newValue = function (value) {
        $scope.option = value;
    }
    $scope.onAddMedicine = function () {
        if ($scope.option == "exjade")
        {
            sessionStorage.setItem('medicinetype', '1');
            PageStack.push("#addmedicine");
        }
        else {
            sessionStorage.setItem('medicinetype', '0');
            PageStack.push("#addmedicine");
        }
       
    }
}
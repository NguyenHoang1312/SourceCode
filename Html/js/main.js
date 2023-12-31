function arrToObj(array) {
    return array.reduce(function(result, array) {
        return result.array[0] = array[1];
    }, {});
}
 
// Expected results:
var arr = [
    ['name', 'Sơn Đặng'],
    ['age', 18],
];
console.log(arrToObj(arr)); // { name: 'Sơn Đặng', age: 18 }

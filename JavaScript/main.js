// forEach 
Array.prototype.forEach2 = function(callback) {
    let length = this.length;
    for (let i = 0; i < length; ++i) {
        let result = callback(this[i], i, this);
    }
}
// every
Array.prototype.every2 = function(callback) {
    let length = this.length;
    for (let i = 0; i < length; ++i)
    if (callback(this[i], i, this) !== true)
    return false;
return true;
}
// some 
Array.prototype.some2 = function(callback) {
    let length = this.length;
    for (let i = 0; i < length; ++i)
        if (callback(this[i], i, this) === true) 
            return true;
    return false;
}
// find 
Array.prototype.find2 = function(callback) {
    let length = this.length;
    for (let i = 0; i < length; ++i)
        if (callback(this[i], i, this) === true) 
            return true;
    return false;
}
// filter 
// reduce 


var a = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
var b = a.forEach(function(x) {
    return x % 2 == 0;
});
var c = a.every2(function(x) {
    return x > 0
})
console.log('c: ', c);
var d = a.some2(function(x) {
    return x > 11
})
console.log('d: ', d);
var e = a.find(function(x) {
    return x > 2;
})
console.log('e: ', e);

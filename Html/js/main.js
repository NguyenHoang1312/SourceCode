var courses = [
    {name: 'javascript', coin: 680, isFinish: true},
    {name: 'php', coin: 860, isFinish: true},
    {name: 'ruby', coin: 980, isFinish: true}
];

//myFilter
Array.prototype.myFilter = function(callback) {
    let output = [];
    for (let index in this) {
        if (this.hasOwnProperty(index)) {
            if (callback(this[index], index, this)) {
                output.push(this[index]);
            }
        }
    }
    return output;
}

var fitlerCourses = courses.myFilter(function(course) {
    return course.coin > 700;
});

console.log(fitlerCourses);

//mySome
Array.prototype.mySome = function(callback) {
    for (let index in this) {
        if (this.hasOwnProperty(index)) {
            if (callback(this[index], index, this)) {
                return true;
            }
        }
    }
    return false;
}

var someCourses = courses.mySome(function(course) {
    return course.coin > 900;
});

console.log(someCourses);

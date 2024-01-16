var a = [1, 2, 3, [4, 5], 6, [7, 8, 9]];

var b = a.reduce((list, child) => {
    return list.concat(child);
}, []);

console.log(b);
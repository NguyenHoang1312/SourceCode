var divElement = document.querySelector('div');

var colors = ['red', 'orange', 'yellow', 'green', 'blue', 'violet'];
var index = 0;
function changeColor() {
    divElement.setAttribute('style', 'height: 200px; width: 200px; background-color:' + colors[index]);
    index += 1;
    if (index === colors.length) index = 0;
}

setInterval(changeColor, 500);

var a = [1, 2, 3];

a.



var colors = ['red', 'orange', 'yellow', 'green', 'blue', 'indigo', 'violet'];

var divElement = document.querySelectorAll('div');

for (let i = 0; i < colors.length; ++i) {
    divElement[i+1].setAttribute('style', 'flex: center; background-color: ' + colors[i]);
}
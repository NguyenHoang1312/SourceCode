const colors = ['red', 'orange', 'yellow', 'green', 'blue', 'indigo', 'violet'];
const boxElement = document.querySelector('.box');
let i = 0;

setInterval(() => {
    boxElement.style.color = colors[i];
    i += 1;
    if (i == 7) i = 0;
}, 500);


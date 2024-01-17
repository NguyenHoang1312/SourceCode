let create = document.querySelector('.create');
let remove = document.querySelector('.remove');
let colored = document.querySelector('.colored');
let backgroundColored = document.querySelector('.backgroundColored');

create.onclick = function() {
    let pElement = document.createElement('p');
    let infomation = prompt('Input: ');
    pElement.innerHTML = '<h1 style="border: solid gray;">' + infomation + '</h1>';
    document.body.appendChild(pElement);
};

remove.onclick = function() {
    let pElements = document.getElementsByTagName('p');
    let lastElement = pElements[pElements.length-1];
    lastElement.remove();
}

colored.onclick = function() {
    let getColor = prompt('What\'s color buddy? (color index)');
    let command = getColor.split(' ');
    let color = command[0];
    let index = command[1];
    let pElements = document.getElementsByTagName('p');
    pElements[index].style.color = color;
}

backgroundColored.onclick = function() {
    let getColor = prompt('What\'s color buddy? (color index)');
    let command = getColor.split(' ');
    let color = command[0];
    let index = command[1];
    let pElements = document.getElementsByTagName('p');
    pElements[index].style.backgroundColor = color;
}
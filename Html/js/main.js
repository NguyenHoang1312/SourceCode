var a = document.querySelector('.box');

a.innerHTML = '<h1 style="color: red; class="">HwangNguyen</h1>'; 

a.style = 'border: solid green; width: 210px; height: 100px';

setInterval(()=>{
    a.classList.toggle('red');
    let time = new Date();
    let hour = String(time.getHours()).padStart(2, '0');
    let minute = String(time.getMinutes()).padStart(2, '0');
    let second = String(time.getSeconds()).padStart(2, '0');
    let date = String(time.getDate()).padStart(2, '0');
    let month = String(time.getMonth()+1).padStart(2, '0');
    let year = String(time.getFullYear()).padStart(2, '0');

    let newExperience = document.createElement('h1');
    newExperience.innerHTML = `<h1>${date}/${month}/${year}</h1>`;
    a.innerHTML = '<h1>' + hour+':'+minute+':'+second + '</h1>';
    a.appendChild(newExperience);
}, 1000);
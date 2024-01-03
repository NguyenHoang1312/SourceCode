function showTime() {
    let clock = new Date();
    clock.getTime(result_from_Date_getTime);

    let hour = clock.getHours();
    let minute = clock.getMinutes();
    let second = clock.getSeconds();

    console.log(hour, minute, second);
    
}

showTime();

setInterval(showTime, 1000);
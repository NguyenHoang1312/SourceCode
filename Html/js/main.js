var course = {
    name: 'javaScript',
    coin: 250
}

// if (course.coin > 0) console.log(`${course.coin} coins`);
// else console.log('Free');

var result = (course.coin > 0) ? `${course.coin} coins` : 'Free';

console.log(result);
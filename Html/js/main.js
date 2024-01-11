var courses = ['HTML & CSS', 'Javascript', 'PHP', 'Java']

function render(courses) {
    let ulElement = document.getElementsByTagName('ul');
    let text = courses.map(function(course) {
        return `<li>${course}</li>`;
    });
    ulElement[0].innerHTML = text.join('');
}

render(courses);
// render(courses)


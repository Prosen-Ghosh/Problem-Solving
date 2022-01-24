// function updateLight(current) {
//     const colors = ['green', 'yellow', 'red'];
//     const next = (colors.indexOf(current) + 1) % 3;
//     return colors[next];
// }

const updateLight = (current) => ({
    green: "yellow",
    yellow: "red",
    red: "green",
}[current]);

console.log(updateLight("green")); // 'yellow'

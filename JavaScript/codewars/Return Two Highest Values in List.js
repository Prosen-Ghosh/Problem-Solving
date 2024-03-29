// function twoHighest(arr) {
//   const newArr = [...new Set(arr.sort((a, b) => a - b))];
//   if (!newArr || newArr.length === 0) return [];
//   if (newArr.length === 1) return arr;
//   return [newArr[newArr.length - 1], newArr[newArr.length - 2]];
// }

function twoHighest(arr) {
  return [...new Set(arr)].sort((a, b) => b - a).slice(0, 2);
}

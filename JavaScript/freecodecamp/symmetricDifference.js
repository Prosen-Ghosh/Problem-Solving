const diff = (arr1, arr2) => [
  ...arr1.filter((e) => !arr2.includes(e)),
  ...arr2.filter((e) => !arr1.includes(e)),
];

const symmetricDifference = (...args) => {
  return [...new Set(args.reduce(diff))];
};

console.log(symmetricDifference([1, 2, 3], [5, 2, 1, 4])); // [3, 4, 5]
console.log(symmetricDifference([1, 2, 5], [2, 3, 5], [3, 4, 5])); // [1, 4]

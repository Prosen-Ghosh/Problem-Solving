/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function (s) {
  const _s = s.replace(/[^a-z]+/gi, "").toLowerCase();
  return _s?.split("").reverse().join("") === _s;
};

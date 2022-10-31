/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function (s) {
    const _s = s.replace(/[^0-9a-z]+/ig, '').toLowerCase();
    return _s?.split('').reverse().join('') === _s;
};
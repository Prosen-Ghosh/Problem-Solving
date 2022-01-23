/**
 * @param {number[]} digits
 * @return {number[]}
 */
const plusOne = function (digits) {
    let carry = 1;
    for (let i = digits.length - 1; i >= 0; i--) {
        let sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = Math.floor(sum / 10);
        if(carry === 0) return digits;
    }
    return carry > 0 ? [carry, ...digits] : digits;
};

console.log(plusOne([1, 2, 3])); // [1,2,4]

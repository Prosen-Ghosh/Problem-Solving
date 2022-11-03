/**
 * @param {number[]} nums
 * @param {number} n
 * @return {number[]}
 */
 var shuffle = function(nums, n) {
    let len = nums.length;
    let ans = [];
    for(let i = 0, j = n; i < len-n; i++){
        ans.push(nums[i]);
        ans.push(nums[j++]);
    }
    return ans;
};
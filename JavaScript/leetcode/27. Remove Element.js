/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
 var removeElement = function(nums, val) {
    let len = nums.length;
    for(let i = 0, j = len-1; i <= j;){
        if(nums[i] === val)nums.splice(i,1);
        else i++;
        
        if(nums[j] === val)nums.splice(j,1);
        else j--;
    }
    return nums.length + 1;
};
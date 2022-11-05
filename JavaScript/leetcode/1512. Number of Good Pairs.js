/**
 * @param {number[]} nums
 * @return {number}
 */
 var numIdenticalPairs = function(nums) {
    let len = nums.length;
    let hash = {}
    for(let i = 0; i < len; i++){
        if(!hash[nums[i]])hash[nums[i]] = 1;
        else hash[nums[i]]++;
    }
    let ans = 0
    for(let key in hash){
        ans += (hash[key] * (hash[key] - 1)) / 2;
    }
    return ans; 
};
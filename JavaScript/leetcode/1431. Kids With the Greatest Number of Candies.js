/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
 var kidsWithCandies = function(candies, extraCandies) {
    let greatest = Math.max(...candies);
    return candies.map(candie => candie + extraCandies >= greatest);
};
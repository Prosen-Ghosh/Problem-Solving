# Sum without highest and lowest number Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Sum all the numbers of the array (in F# and Haskell you get a list) except the highest and the lowest element (the value, not the index!).
(The highest/lowest element is respectively only one element at each edge, even if there are more than one with the same value!)

- Example:

```
{ 6, 2, 1, 8, 10 } => 16
{ 1, 1, 11, 2, 3 } => 6
```

If array is empty, `null` or None, or if only 1 Element exists, `return 0`.

**Solution:**

```javascript

function sumArray(array) {
  return !array || array.length == 0 ? 0 : array.sort((a, b) => a - b).slice(1, array.length - 1).reduce((res, n) => res + n,0);
}

```
**Explanation:**

- Here i check the array is `null` or `empty`. If this condition is `true` then i return `0`.If not,
- Then i sort the array using `sort()` function.
- Then i slice then array's first nad last index using `slice()` function.
- Then i sum up the new array using `reduce()` function and return the result.
- After Execution of `slice()` if the array length become 0 then `reduce()` does not execute the function for array elements and return the initial value.

Another Way Of Solving This Problem:

```javascript

function sumArray(array) {
  if(array == null || !array.length ) return 0;
  array.sort((a, b) => a-b);
  var sum = 0;
  for(var i = 1; i < array.length-1; i++)sum+=array[i];
  return sum;
}

```

By defult JavaScript `sort()` function sort string value. If You want to sort number array you have to use a compare function.
- function(a, b){return a-b}
When the `sort()` method compares two values, it sends the values to the compare function, and sorts the values according to the returned (`negative`, `zero`, `positive`) value.

See the below example:

```javascript

var numbers = [1,5,3.14];
When you call numbers.sort(function(a,b){return a-b;}), internally it will actually execute:

compare(1,5);     // Returns -4, a is less than b
compare(1,3.14);  // Return -2.14, a is less than b
compare(5,3.14);  // returns 1.86, a is greater than b

```

If You want to sort the array numerically and descending just `return b-a;` in your compare function.

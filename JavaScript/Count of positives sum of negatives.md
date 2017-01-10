# Count of positives / sum of negatives Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Given an array of integers.

Return an array, where the first element is the count of positives numbers and the second element is sum of negative numbers.

If the input array is empty or null, return an empty array:

C#/Java: `new int[] {} / new int[0];`
C++: `std::vector<int>();`
JavaScript/CoffeeScript/PHP/Haskell: `[];`
- ATTENTION!

- For example:
```
input [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15]
return [10, -65].
```

**Solution:**

```javascript

function countPositivesSumNegatives(input) {
    if(input == null || input.length == 0) return [];
    var p = 0,n = 0;
    input.forEach((x) => x > 0 ? p++ : n += x);
    return [p,n];;
}

```

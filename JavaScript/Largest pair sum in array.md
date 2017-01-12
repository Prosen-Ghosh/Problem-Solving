# Largest pair sum in array Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Given an array of numbers, find the largest pair sum in the array.

For example

`[10,14,2,23,19]` should return 42 (`i.e. sum of 23,19`)

`[99,2,2,23,19]` should return 122 (`i.e. sum of 99,23`)

Input array contains minimum two elements and every element is a number.


**Solution:**

```javascript

function largestPairSum(numbers){
  numbers.sort((a,b) => a-b);
  return numbers[numbers.length-1]+numbers[numbers.length-2];
}

```

it can be code like this!

```javascript

function largestPairSum(numbers){
  return numbers.sort((a,b) => a-b),numbers[numbers.length-1]+numbers[numbers.length-2];
}

```

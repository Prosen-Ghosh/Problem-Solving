# Sum Arrays Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

- Sum Array

Write a method sum (sum_array in python) that takes an array of numbers and returns the sum of the numbers. These may be integers or decimals for Ruby and any instance of Num for Haskell. The numbers can also be negative. If the array does not contain any numbers then you should return 0.

- Examples

### Assumptions

- You can assume that you are only given numbers.
- You cannot assume the size of the array.
- You can assume that you do get an array and if the array is empty, return 0.
What We're Testing

We're testing basic loops and math operations. This is for beginners who are just learning loops and math operations.

- Disclaimer

This is for beginners so we want to test basic loops and math operations. Advanced users may find this extremely easy and can easily write this in one line.

**Solution:**

```javascript

function sum (numbers) {
    "use strict";
    return  numbers.reduce((res,v) => res+v,0);
};

```

If the array is empty then `reduce()` does not execute, it will return the initial value which is `0`.

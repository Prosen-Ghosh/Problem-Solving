# Grasshopper - Summation Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

- Summation

Write a program that finds the summation of every number between 1 and num. The number will always be a positive integer greater than 0.

- For example:
```
summation(2) -> 3
1 + 2

summation(8) -> 36
1 + 2 + 3 + 4 + 5 + 6 + 7 + 8
```

**Solution:**

```javascript

var summation = function (num) {
  return (num *(num+1))/2;
}
```

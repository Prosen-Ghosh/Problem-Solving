# Square(n) Sum Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Complete the squareSum method so that it squares each number passed into it and then sums the results together.

For example:

`squareSum([1, 2, 2]); // should return 9`

**Solution:**

```javascript

function squareSum(numbers){
 return numbers.reduce((res,n) => res+n*n,0);
}

```


# Beginner - Reduce but Grow Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Given and array of integers (x), return the result of multiplying the values together in order. Example:

`[1, 2, 3] --> 6`
For the beginner, try to use the reduce method - it comes in very handy quite a lot so is a good one to know.

Array will not be empty.


**Solution:**

```javascript

function grow(x){
  return x.reduce((res,n)=> res*n);
}

```

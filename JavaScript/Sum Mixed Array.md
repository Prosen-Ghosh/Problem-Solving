# Sum Mixed Array Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Given an array of integers as strings and numbers, return the sum of the array values as if all were numbers.

Return your answer as a number.

**SolutionL**

```javascript

function sumMix(x){
  return x.reduce((res,v) => res + parseInt(v),0);
}

```

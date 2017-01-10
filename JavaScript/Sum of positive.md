# Sum of positive Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

You get an array of numbers, return the sum of all of the positives ones.

- Example `[1,-4,7,12] => 1 + 7 + 12 = 20`

**Note:** array may be empty, in this case return `0`.

**Solution:**

```javascript

function positiveSum(arr) {
  return !arr.length ? 0 : arr.reduce((res,x) => x > 0 ? res+x :res,0);
}

```

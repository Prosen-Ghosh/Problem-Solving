# Enumerable Magic #1 - True for All? Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Create a method all? (JS: all) which takes an array, and a block (JS: function), and returns true if the block (/function) returns true for every element in the array. Otherwise, it should return false. If the array is empty, it should return true, since technically nothing failed the block (/function) test.

**Solution:**

```javascript

function all( arr, fun ){
  return arr.every(fun);
}

```

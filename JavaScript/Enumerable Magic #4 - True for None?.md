# Enumerable Magic #4 - True for None? Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Create a method none? (JS none) that accepts an array and a block (JS: a function), and returns true if the block (/function) returns true for none of the items in the array. An empty list should return true.


**Solution:**

```javascript

function none(arr, fun){
  for(var i = 0; i < arr.length; i++){
    if(fun(arr[i]))return false;
  }
  return true;
}

```

Another Way Of Solving this Problem:

```javascript

function none(arr, fun){
  return !arr.some(fun);
}

```

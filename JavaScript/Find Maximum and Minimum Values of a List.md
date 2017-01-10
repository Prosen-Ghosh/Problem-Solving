# Find Maximum and Minimum Values of a List Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Your task is to make two functions, `max` and `min` (`maximum` and `minimum` in `PHP`) that take `a(n)` array/vector of integers list as input and outputs, respectively, the largest and lowest number in that array/vector.

- Examples
```
max([4,6,2,1,9,63,-134,566]) returns 566
min([-52, 56, 30, 29, -54, 0, -110]) returns -110
max([5]) returns 5
min([42, 54, 65, 87, 0]) returns 0
```
- Notes

You may consider that there will not be any empty arrays/vectors.


**Solution:**

```javascript

var min = function(list){
    
    return Math.min(...list);
}

var max = function(list){
    
    return Math.max(...list);
}

```

The [spread syntax] allows an expression to be expanded in places where multiple arguments (for function calls) or multiple elements (for array literals) or multiple variables  (for destructuring assignment) are expected.

[spread syntax]:<https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Spread_operator>

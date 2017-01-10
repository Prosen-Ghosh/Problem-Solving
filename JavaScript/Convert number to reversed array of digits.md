# Convert number to reversed array of digits Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

### Convert number to reversed array of digits

Given a random number:

- C#: long;
- C++: unsigned long;
You have to return the digits of this number within an array in reverse order.
- Example:

`348597 => [7,9,5,8,4,3]`

**Solution:**

```javascript

function digitize(n) {
  return n.toString().split('').map((x) => parseInt(x)).reverse();
}


```

**Definition and Usage of map()**

The `map()` method creates a new array with the results of calling a function for every array element.

The `map()` method calls the provided function once for each element in an array, in order.

**Note:** `map()` does not execute the function for array elements without values.

**Note:** `map()` does not change the original array.

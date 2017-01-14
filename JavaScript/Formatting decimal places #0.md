# Formatting decimal places #0 Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Each number should be formatted that it is rounded to two decimal places. You don't need to check whether the input is a valid number because only valid numbers are used in the tests.

```
Example:
5.5589 is rounded 5.56
3.3424 is rounded 3.34
```

**Solution:**

```javascript

function twoDecimalPlaces(n) {
  return +n.toFixed(2);
}

```

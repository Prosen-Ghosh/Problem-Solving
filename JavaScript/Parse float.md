# Parse float Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Write function `parseFloat` (for Javascript parseF) which takes a string and returns a number or Nothing (for Python None, for Javascript null) if conversion is not possible.

**Solution:**

```javascript

function parseF(s) {
  return /[a-z]/gi.test(s) ? null : parseFloat(s);
}

```


# Get number from string Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Write a function which removes from string all non-digit characters and parse the remaining to number. E.g: "hell5o wor6ld" -> 56

**Function:**

- javascript

`getNumberFromString(s)`


**Solution:**

```javascript

function getNumberFromString(s) {
  return Number(s.match(/\d/g).join(''));
}

```

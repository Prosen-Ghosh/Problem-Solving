# String repeat Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Write a function called `repeatStr` which repeats the given string string exactly `n` times.
```
repeatStr(6, "I") // "IIIIII"
repeatStr(5, "Hello") // "HelloHelloHelloHelloHello"
```

**Solution:**

```javascript

function repeatStr (n, s) {
  return s.repeat(n);
}

```

- `repeat()`	Returns a new string with a specified number of copies of an existing string

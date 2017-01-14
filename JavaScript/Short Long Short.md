# Short Long Short Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Given 2 strings, a and b, return a string of the form short+long+short, with the shorter string on the outside and the longer string on the inside. The strings will not be the same length, but they may be empty (length0).

- For example:

```
solution("1", "22") // returns "1221"
solution("22", "1") // returns "1221"
```

**Solution:**

```javascript

function solution(a, b){
  return a > b ? b+a+b : a+b+a;
}

```

# Is there a vowel in there? Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Given an array of numbers (s), check if any of the numbers are the character codes for lower case vowels.

If they are, change the array value to a string of that vowel.

Return the resulting array.

**Solution:**

```javascript

function isVow(a){
  var i = 0;
  return a.forEach(function(v){
    v == 97 || v == 101 || v == 105 || v==111 || v ==117 ? a[i++] = String .fromCharCode(v) : a[i++] = v;
  }),a;
}

```

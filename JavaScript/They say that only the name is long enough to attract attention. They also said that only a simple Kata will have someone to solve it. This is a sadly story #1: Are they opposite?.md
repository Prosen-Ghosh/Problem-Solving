# They say that only the name is long enough to attract attention. They also said that only a simple Kata will have someone to solve it. This is a sadly story #1: Are they opposite? Code Wars Problem Solution

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

- Task

Give you two strings: `s1` and `s2`. If they are opposite, return `true`; otherwise, return `false`. **Note:** The result should be a **boolean** value, instead of a string.
The `opposite` means: All letters of the two strings are the same, but the case is opposite. you can assume that the string only contains letters or it's a empty string

- Some examples:

```
isOpposite("ab","AB") should return true;
isOpposite("aB","Ab") should return true;
isOpposite("aBcd","AbCD") should return true;
isOpposite("AB","Ab") should return false;
isOpposite("","") should return false;
```

**Solution:**

```javascript

function isOpposite(s1,s2){
  return (!s1 || !s2) ? false : s1 === s2.replace(/[a-z]/ig,(c) => c < 'a' ? c.toLowerCase() : c.toUpperCase());
}

```

**Explanation:**

Here first i check if `s1` or `s2` is empty then return `false` if not then compare `s1` with `s2` where `s2` is a replaced string.
In the function `replace()` i ignore the `s2` string case and did a global search for `a to z` `e.g /[a-z]/ig`.
The i check for every charactr of the string using a `callback` function.This callback function take an argument as parameter, which is `c` here.
If `c` is lower than `a` (it will convert to [ASCII] value) then i replace it with `lowercase` using `c.toLowerCase()` function, if not i replace it with `uppercase` using `c.toUpperCase()`.

[ASCII]: <http://www.asciitable.com/>


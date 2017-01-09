# Exclamation marks series #1: Remove a exclamation mark from the end of string Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

- Description:

Remove a exclamation mark from the end of string. For a beginner kata, you can assume that the input data is always a string, no need to verify it.
- Examples
```
remove("Hi!") === "Hi"
remove("Hi!!!") === "Hi!!"
remove("!Hi") === "!Hi"
remove("!Hi!") === "!Hi"
remove("Hi! Hi!") === "Hi! Hi"
remove("Hi") === "Hi"
```
- Note

Please don't post issue about difficulty or duplicate.

**Solution:**

```javascript

function remove(s){
  return s[s.length-1] == '!' ? s.slice(0, s.length-1) : s;
}

```

`slice(start,end)` function **extract** parts of a string:

**Definition and Usage**

The `slice()` method extracts parts of a string and returns the extracted parts in a new string.

Use the start and end parameters to specify the part of the string you want to extract.

The first character has the position 0, the second has position 1, and so on.

**Tip:** Use a negative number to select from the end of the string.


Another Way of Solving this Problem:

```javascript

function remove(s){
  return s.replace(/!$/,'');
}

```
For the `$` quantifier it will search `Exclamation mark` at the end of the string.

**Tip:** Use the `^n` quantifier to match any string with n at the **BEGINNING** of it.

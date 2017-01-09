# Exclamation marks series #2: Remove all exclamation marks from the end of sentence Code Wars Problem Solution.

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

Remove all exclamation marks from the end of sentence.
- Examples
```
remove("Hi!") === "Hi"
remove("Hi!!!") === "Hi"
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
  return s.replace(/!*$/g,'');
}

```

- `n*` Matches any string that contains zero or more occurrences of n.
- `n$` Matches any string with n at the end of it.

Using this two `RegExp` i replace the string.

# Exclamation marks series #4: Remove all exclamation marks from sentence but ensure a exclamation mark at the end of string Code Wars Problem Solution.

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

Remove all exclamation marks from sentence but ensure a exclamation mark at the end of string. For a beginner kata, you can assume that the input data is always a non empty string, no need to verify it.
- Examples
```
remove("Hi!") === "Hi!"
remove("Hi!!!") === "Hi!"
remove("!Hi") === "Hi!"
remove("!Hi!") === "Hi!"
remove("Hi! Hi!") === "Hi Hi!"
remove("Hi") === "Hi!"
```
- Note

Please don't post issue about difficulty or duplicate.

**Solution:** 

```javascript

function remove(s){
  return s.split('!').join('')+'!';
}

```


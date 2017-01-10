# Exclamation marks series #11: Replace all vowel to exclamation mark in the sentence Code Wars Problem Solution

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Description:

Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.
- Examples
```
replace("Hi!") === "H!!"
replace("!Hi! Hi!") === "!H!! H!!"
replace("aeiou") === "!!!!!"
replace("ABCDE") === "!BCD!"
```

**Solution:**

```javascript

function replace(s){
  return s.replace(/[aeiouAEIOU]/g,'!');
}

```

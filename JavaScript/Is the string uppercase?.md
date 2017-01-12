# Is the string uppercase? Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Is the string uppercase?

- Task

Create a method is_uppercase() to see whether the string is ALL CAPS. For example:

- Corner Cases

For simplicity, you will not be tested on the ability to handle corner cases (`e.g. "%*&#()%&^#"` or similar strings containing alphabetical characters at all) - an ALL CAPS (uppercase) string will simply be defined as one containing no lowercase letters. Therefore, according to this definition, strings with no alphabetical characters (like the one above) should return `True`.

**Solution:**

```javascript

String.prototype.isUpperCase = function(){
  return this.toUpperCase() === this.toString();
}

```

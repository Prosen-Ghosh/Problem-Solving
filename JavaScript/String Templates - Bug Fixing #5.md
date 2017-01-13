# String Templates - Bug Fixing #5 Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

- String Templates - Bug Fixing #5

Oh no! Timmy hasn't followed instructions very carefully and forgot how to use the new String Template feature, Help Timmy with his string template so it works as he expects!

**Solution:**

```javascript

function buildString(...template){
  return `I like ${template.join(', ')}!`;
}

```

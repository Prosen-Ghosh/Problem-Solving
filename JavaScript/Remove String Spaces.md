# Remove String Spaces Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Simple, remove the spaces from the string, then return the resultant string.

**Solution:**

```javascript

function noSpace(x){
  return x.split(' ').join('');
}

```

Another Way to Solve This Problem:

```javascript

function noSpace(x){
  return x.replace(/\s/g, '');
}

```

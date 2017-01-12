# Are arrow functions odd? Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Time to test your basic knowledge in functions! Return the odds from a list:

`odds([1,2,3,4,5]) #=> [1,3,5]`

**Solution:**

```javascript

function odds(values){
  return values.filter((v) => v%2);
}

```

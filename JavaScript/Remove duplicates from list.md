# Remove duplicates from list Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Write function distinct that removes duplicate from list of numbers.

The order of the sequence needs to stay the same.

**Solution:**

```javascript

function distinct(a) {
  var obj = {},res = [];
  for(var i = 0; i < a.length; obj[a[i++]] = 0);
  for(var v in obj)res.push(v);
  return res.map(x => parseInt(x));
}

```

The `Set` object lets you store unique values of any type, whether primitive values or object references.

```javascript

function distinct(a) {
  return [...new Set(a)];
}

```

The `Array.from()` method creates a new Array instance from an array-like or iterable object.


```javascript

function distinct(a) {
  return Array.from(new Set(a));
}

```

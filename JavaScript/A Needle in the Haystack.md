# A Needle in the Haystack Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Can you find the needle in the haystack?

Write a function `findNeedle()` that takes an array full of junk but containing one "needle"

After your function finds the needle it should return a message (as a string) that says:

`"found the needle at position "` plus the index it found the needle

So

`findNeedle(['hay', 'junk', 'hay', 'hay', 'moreJunk', 'needle', 'randomJunk'])`
should return

`'found the needle at position 5'`


**Solution:**

```javascript

function findNeedle(haystack) {
  return 'found the needle at position ' + haystack.findIndex((s) => s == 'needle');
}

```

- `findIndex()`	Returns the index of the first element in an array that pass a test.


```javascript

function findNeedle(haystack) {
  return 'found the needle at position ' + haystack.indexOf('needle');
}

```

- `indexOf()`	Search the array for an element and returns its position.

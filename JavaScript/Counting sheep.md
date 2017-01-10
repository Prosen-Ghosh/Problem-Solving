# Counting sheep Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Consider an array of sheep where some sheep may be missing from their place. We need a function that counts the number of sheep present in the array (true means present).

- For example,
```
[true,  true,  true,  false,
  true,  true,  true,  true ,
  true,  false, true,  false,
  true,  false, false, true ,
  true,  true,  true,  true ,
  false, false, true,  true]
```
The correct answer would be `17`.

**Solution:**

```javascript

function countSheeps(arrayOfSheep) {
  return arrayOfSheep.filter((x) => x == true).length;
}

```

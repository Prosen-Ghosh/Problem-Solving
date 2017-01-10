# Find the position! Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

When provided with a letter, return its position in the alphabet.

`Input :: "a"`

`Ouput :: "Position of alphabet: 1"`

**Solution:**

```javascript

function position(letter){
  return "Position of alphabet: " + ((letter.charCodeAt(0)-97) + 1);
}

```

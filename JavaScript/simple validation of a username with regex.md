# simple validation of a username with regex Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Write a simple regex to validate a username.

Allowed characters are:

-`lowercase letters` -`numbers` -`underscore`

length shoould be between `4` and `16` characters.

**Solution:**

```javascript

function validateUsr(username) {
  return /^[a-z0-9_]{4,16}$/g.test(username); 
}

```

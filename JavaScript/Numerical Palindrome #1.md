## Numerical Palindrome #1
```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

```javascript
function palindrome(num) { 
  return !isNaN(num) && 
  (typeof num == "number" && num > 0) ? num == (num+"").split("").reverse().join("") :
  "Not valid";
} 
```

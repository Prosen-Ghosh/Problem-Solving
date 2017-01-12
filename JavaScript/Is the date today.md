# Is the date today Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

This is a simple function that should take in a date object and return a boolean representing weather the date is today or not.

Make sure that your function does not return a false positive by just checking just the day.


**Solution:**

```javascript

function isToday(date) {
  var today = new Date();
  return (date.getDate() === today.getDate() 
        && date.getMonth() == today.getMonth() 
        && date.getFullYear() == today.getFullYear());
}

```

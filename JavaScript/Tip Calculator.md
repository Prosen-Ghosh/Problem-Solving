# Tip Calculator Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Write a function, calculateTip(amount, rating) which calculates how much you need to tip based on the total amount of the bill and the service.

You need to consider the following ratings:

- Terrible: tip `0%`
- Poor: tip `5%`
- Good: tip `10%`
- Great: tip `15%`
- Excellent: tip `20%`
The rating is case insensitive. If an unrecognised rating is input, then you need to return:

"Rating not recognised" in Javascript, Python and Ruby...
...or null in Java
Because you're a nice person, you always round up the tip, regardless of the service


**Solution:**

```javascript

function calculateTip(amount, rating) {
  var tip;
  if(rating.toLowerCase() == 'Terrible'.toLowerCase())tip = 0;
  else if(rating.toLowerCase() == 'Poor'.toLowerCase()) tip = 5;
  else if(rating.toLowerCase() == 'Good'.toLowerCase()) tip = 10;
  else if(rating.toLowerCase() == 'Great'.toLowerCase()) tip = 15;
  else if(rating.toLowerCase() == 'Excellent'.toLowerCase()) tip = 20;
  else return 'Rating not recognised';
  
  return Math.ceil((amount*tip)/100);
}

```

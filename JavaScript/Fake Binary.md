# Fake Binary Code Wars Problem Solution

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Given a string of numbers, you should replace any number below 5 with '0' and any number 5 and above with '1'. Return the resulting string.


**Solution:**

```javascript

function fakeBin(x){
  var tmp = '';
  for(var i = 0; i < x.length; i++){
    if(x[i] < '5')tmp += '0';
    else if(x[i] >= '5')tmp += '1';
  }
  return tmp;
}

```

Another Way of Solving this problem is: *Perform a global replacement*

```javascript

function fakeBin(x){
  return x.replace(/[1234]/g, '0').replace(/[56789]/g, '1');
}

```

It means, find any character between the brackets `[]` which is `123` and `56789` and replace with `0` and `1` respectively.

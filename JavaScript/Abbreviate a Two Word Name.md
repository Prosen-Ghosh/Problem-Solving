# Abbreviate a Two Word Name Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Write a function to convert a name into initials. This kata strictly takes two words with one space in between them.

The output should be two letters with a dot separating them.

It should look like this:

`Sam Harris => S.H`

`Patrick Feeney => P.F`

**Solution:**

```javascript

function abbrevName(name){
  var nam = name.split(' ');
  return nam[0].charAt(0).toUpperCase()+'.' + nam[1].charAt(0).toUpperCase();
}

```

Another Way Of Solving This Probelm:

```javascript

function abbrevName(name){
  var nam = name.split(' ');
  return (nam[0][0]+'.' + nam[1][0]).toUpperCase();
}

```

Another Way Of Solving This Probelm:

```javascript

function abbrevName(name){
  return name.split(' ').map(v => v[0].toUpperCase()).join('.');
}


```

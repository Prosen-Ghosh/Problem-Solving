# Get Planet Name By ID Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

The function is not returning the correct values. Can you figure out why?

`getPlanetName(3); // should return 'Earth'`

**Solution:**

```javascript

function getPlanetName(id){
  var name;
  switch(id){
    case 1:
      name = 'Mercury';break;
    case 2:
      name = 'Venus';break;
    case 3:
      name = 'Earth';break;
    case 4:
      name = 'Mars';break;
    case 5:
      name = 'Jupiter';break;
    case 6:
      name = 'Saturn';break;
    case 7:
      name = 'Uranus';break;
    case 8:
      name = 'Neptune';break;
  }
  return name;
}

```

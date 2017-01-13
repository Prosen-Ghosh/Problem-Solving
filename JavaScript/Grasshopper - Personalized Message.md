# Grasshopper - Personalized Message Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Personalized greeting

Create a function that gives a personalized greeting. This function takes two parameters: name and owner.

Use conditionals to return the proper message:

case	|	return
--------|---------------
name equals owner	|	'Hello boss'
otherwise	|	'Hello guest'


**Solution:**

```Javascript

function greet (name, owner) {
  return name == owner ? 'Hello boss' : 'Hello guest';
}

```

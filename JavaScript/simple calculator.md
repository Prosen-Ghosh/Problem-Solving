# simple calculator Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

ou are required to create a simple calculator that returns the result of addition ,subtraction , multiplication and
division of two numbers . example

`calculator(1,2,"+"); //=> result will be 3`
if the variables are not numbers or the sign does not belong to the list above a message "unknown value" must be returned.

- example
```
calculator(1,2,"&"); //=> result will be "unknown value"
calculator(1,"k","*"); //=> result will be "unknown value"
```

**Solution:**

```javascript

function calculator(a,b,sign){
  return sign.match(/[-+/*]/g) ? eval(a+sign+b) : "unknown value";
}

```

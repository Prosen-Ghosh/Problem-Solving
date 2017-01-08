# First Factorial Coder Byte Problem Solution

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```
**Problem:**

Have the function `FirstFactorial(num)` take the num parameter being passed and return the factorial of it `(e.g. if num = 4, return (4 * 3 * 2 * 1))`. For the test cases, the range will be between `1` and `18` and the input will always be an integer. 


**Solution:**

```javascript

function FirstFactorial(num) { 

  for(var i = num-1; i > 0; i--)num*=i;
  return num; 
         
}
   
// keep this function call here 
FirstFactorial(readline());

```


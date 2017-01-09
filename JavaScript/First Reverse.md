# First Reverse Coder Byte Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Have the function `FirstReverse(str)` take the `str` parameter being passed and `return` the string in reversed order. For example: if the input string is `"Hello World and Coders"` then your program should return the string `sredoC dna dlroW olleH`. 


**Solution:**

```javascript

function FirstReverse(str) { 

  return str.split('').reverse().join(''); 
}
   
// keep this function call here 
FirstReverse(readline());

```

**Explanation:**

In JavaScript string has no function call `reverse()` But `array` has. The `reverse()` function reverses the order of the elements in an array.
So, here first i `split()` the string and store it as an **array**, then i **reverse** the array using `reverse()` function after that i **join** the array using `join()` function.


Now, if the `str = "Hello"`
then first it will **split** the string as `str['H','e','l','l','o']`
and then the **reverse** function will reverse the array as `str['o','l','l','e','H']`
and then it will **join** the array as **string** `str = "olleH"`

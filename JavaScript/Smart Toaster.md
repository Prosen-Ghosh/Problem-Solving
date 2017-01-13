# Smart Toaster Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

I keep burning my toast!

Please can you create some basic JavaScript code to stop this happening. I want to input the type of bread and in return I want to know how long to toast the bread for.

"white bread" ---> "1 min" 
"frozen white bread" ---> "1.5 mins" 
"brown bread" ---> "2 mins" 
"frozen brown bread" ---> "3 mins" 

Anything else that you put in the toaster should return "Please do not put that in the toaster!"

Your toaster has to be case insensitive.

This all seems easy enough! The only problem is that our toaster is unbelievably basic. You have to complete this function in just 250 characters!

If you use ES6 features like Let and Const declaration, the code will get longer due to the transformation by babel.


**Solution:**

```javascript

function toaster(breadType){
  return updatedToaster(breadType);
}

function updatedToaster(b){
  switch(b.toLowerCase()){
    case "white bread": return "1 min";
    case "frozen white bread": return "1.5 mins";
    case "brown bread": return "2 mins";
    case "frozen brown bread": return "3 mins";
    default: return "Please do not put that in the toaster!";
  }
}

```

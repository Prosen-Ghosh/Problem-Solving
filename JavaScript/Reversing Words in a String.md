# Reversing Words in a String Code Wars Problem Solution

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**
You need to write a function that reverses the words in a given string. If this is not clear enough, here are some examples:

`reverse('Hello World') === 'World Hello'`
`reverse('Hi There.') === 'There. Hi'`
Your solution should also work for double spaces:

`reverse('Hello  World') === 'World  Hello'`

- Happy coding!

**Solution:**

```javascript

function reverse(string){
 
  return string.split(' ').reverse().join(' ').toString();
}

```

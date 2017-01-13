# Say hello! Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Say hello!

Write a function to greet a person. Function will take name as input and greet the person by saying hello. Return null/nil if input is empty string or null/nil.

- Example:

```javascript

greet("Niks") === "hello Niks!";
greet("") === null; // Return null if input is empty string
greet(null) === null; // Return null if input is null

```

**Solution:**

```javascript

function greet(name) {
  return name ? `hello ${name}!` : null;
}

```

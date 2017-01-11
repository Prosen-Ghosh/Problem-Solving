# Count the Monkeys! Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

You take your son to the forest to see the monkeys. You know that there are a certain number there (n), but your son is too young to just appreciate the full number, he has to start counting them from 1.

As a good parent, you will sit and count with him. Given the number (n), populate an array with all numbers up to and including that number, but excluding zero.

For example, if `n = 10`:

`return [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]`

**Solution:**

```javascript

function monkeyCount(n) {
  var ar = [];
  for(var i = 1; i <= n; i++)ar.push(i);
  return ar;
}

```
Another Way Of Solving this Problem:
```javascript

var monkeyCount=n=>[...Array(n)].map((_,i) => i+1)

```

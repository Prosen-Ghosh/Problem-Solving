# Grasshopper - If/else syntax debug Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

If/else syntax debug

While making a game, your partner, Greg, decided to create a function to check if the user is still alive called checkAlive. Unfortunately, Greg made some errors while creating the function.

`checkAlive` should return `true` if the player's health is greater than 0 or `false` if it is 0 or below.

`checkAlive` receives one parameter health which will always be a whole number between `-10` and `10`.

**Solution:**

```javascript

function checkAlive (health) {
  return health <= 0 ? false : true;
}

```
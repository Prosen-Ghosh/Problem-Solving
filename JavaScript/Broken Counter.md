# Broken Counter Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Our counter prototype is broken. Can you spot, what's wrong here?

**Solution:**

```javascript

function Counter() {
  this.value = 0;
}

Counter.prototype.increase = function() {
  this.value++;
};

Counter.prototype.getValue = function() {
  return this.value;
};

Counter.prototype.reset = function() {
  this.value = 0;
};

```

Here we can use [Arrow Function] :

```javascript

function Counter() {
  value = 0;
}

Counter.prototype.increase = () => this.value++;

Counter.prototype.getValue = () => { return this.value; }

Counter.prototype.reset = () =>  this.value = 0;

```

[Arrow Function]:<https://developer.mozilla.org/en/docs/Web/JavaScript/Reference/Functions/Arrow_functions>

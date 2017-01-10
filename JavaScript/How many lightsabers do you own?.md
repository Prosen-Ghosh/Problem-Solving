# How many lightsabers do you own? Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Inspired by the development team at Vooza, write the function **howManyLightsabersDoYouOwn** that

- accepts the name of a programmer, and
- returns the number of lightsabers owned by that person.
The only person who owns lightsabers is Zach, by the way. He owns 18, which is an awesome number of lightsabers. Anyone else owns 0.

No starting help here -- you'll need to know how to write a function that accepts a parameter and returns a value based on that parameter.
```
howManyLightsabersDoYouOwn("anyone else") \\ should === 0
howManyLightsabersDoYouOwn("Zach") \\ should === 18
```
*```c# Kata.HowManyLightsabersDoYouOwn("Adam") // => 0 Kata.HowManyLightsabersDoYouOwn("Zach") // => 18*

**Solution:**

```javascript

function howManyLightsabersDoYouOwn(s){
  return  s == "Zach" ? 18 : 0;
}

```

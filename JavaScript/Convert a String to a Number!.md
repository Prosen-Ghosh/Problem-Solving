# Convert a String to a Number! Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Note: This kata is inspired by Convert a Number to a String!. Try that one too.

Description

We need a function that can transform a string into a number. What ways of achieving this do you know?

Note: Don't worry, all inputs will be strings, and every string is a perfectly valid representation of an integral number.

- Examples
```
stringToNumber("1234") == 1234
stringToNumber("605" ) == 605
stringToNumber("1405") == 1405
stringToNumber("-7"  ) == -7
```

```
string_to_number("1234")  == 1234
string_to_number("605")   == 605
string_to_number("1405")  == 1405
string_to_number("-7")    == -7
```

**Solution:**

```javascript

var stringToNumber = function(str){
  return parseInt(str);
}

```


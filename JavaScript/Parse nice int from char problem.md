# Parse nice int from char problem Code Wars Problem Solution.

```
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
```

**Problem:**

Ask a small girl - "How old are you?". She always says strange things... Lets help her!

For correct answer program should return int from 0 to 9 ;)

Assume test input string always valid and may look like "1 year old" or "5 years old", etc.. The first char is number only =)

**Solution:**

```javascript

function getAge(inputString){
  return parseInt(inputString.charAt(0));
}

```

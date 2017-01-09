# Calculate average Code Wars Problem Solution.


**Problem:**

Write function avg which calaculates average of numbers in given list.

**Solution:**

```javascript

function find_average(array) {
  var sum = 0;
  array.forEach(function(x){
    sum+=x;
  });
  return sum/array.length;
}

```

Another Way of solving this problem is: `reduce()` function.

```javascript

function find_average(array) {
  return array.reduce((res, n) => res + n) / array.length;
}

```

**Definition and Usage**

- The reduce() method reduces the array to a single value.

- The reduce() method executes a provided function for each value of the array (from left-to-right).

- The return value of the function is stored in an accumulator (result/total).

- **Note:** reduce() does not execute the function for array elements without values.

**Parameter Values**

Parameter	|	Description
----------------|---------------------
function(total,currentValue, index,arr)	|	Required. A function to be run for each element in the array.

Function arguments:

Argument	|	Description
----------------|------------------------
accumulator		|	Required. The initialValue, or the previously returned value of the function
currentValue	|	Required. The value of the current element
currentIndex	|	Optional. The array index of the current element
array	|	Optional. The array object the current element belongs to
initialValue	|	Optional. A value to be passed to the function as the initial value


# How reduce function works

Suppose the following use of reduce occurred:

```javascript

array = [1, 2, 3, 4];
array.reduce(function(accumulator, currentValue, currentIndex, array) {
  return accumulator + currentValue;
});

```
The function is called **without initial** value as the second argument of the reduce function.The callback would be invoked three times, with the arguments and return values in each call being as follows:

callback	|	accumulator	|	currentValue	|	currentIndex	|	array	|	return value
----------------|-----------------------|-----------------------|-----------------------|---------------|-------------------	
first call	|		1	|	2		|	1		|	[1, 2, 3, 4]	|	2
second call	|		3	|	3		|	2		|	[1, 2, 3, 4]	|	6
third call	|		6	|	4		|	3		|	[1, 2, 3, 4]	|	10

The value returned by reduce would be that of the last callback invocation (10).



If `initialValue` is provided in the call to `reduce`, then `accumulator` will be equal to `initialValue` and `currentValue` will be equal to the first value in the array. **It is safe to provide a initialValue**.

```javascript

array = [1, 2, 3, 4];
array.reduce(function(accumulator, currentValue, currentIndex, array) {
  return accumulator + currentValue;
},0);

```
The function is called **with initial** value as the second argument of the `reduce` function.The callback would be invoked four times, with the arguments and return values in each call being as follows:

callback	|	accumulator	|	currentValue	|	currentIndex	|	array	|	return value
----------------|-----------------------|-----------------------|-----------------------|---------------|-------------------	
first call	|		0	|	1		|	0		|	[1, 2, 3, 4]	|	1
second call	|		1	|	2		|	1		|	[1, 2, 3, 4]	|	3
third call	|		3	|	3		|	2		|	[1, 2, 3, 4]	|	6
fourth call	|		6	|	4		|	3		|	[1, 2, 3, 4]	|	10

The value returned by reduce would be that of the last callback invocation (10).

You can also use an [Arrow Function]. The code below will produce the same output as the code in the block above:

```javascript

array = [1, 2, 3, 4];
array.reduce((accumulator, currentValue, currentIndex, array)=> accumulator + currentValue ,0);

```

[Arrow Function]: <https://developer.mozilla.org/en/docs/Web/JavaScript/Reference/Functions/Arrow_functions>

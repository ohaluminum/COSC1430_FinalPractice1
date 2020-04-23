# COSC1430_FinalPractice1

### Template Functions &amp; Array Shifting

:mega: *Make sure the code inside the for loop doing the right shifting!*

> Implement a function template, named `cyclic_shuffle(…)` that cyclically shuffles the elements of a given 1D array with fixed size. 

> The template function will return nothing and take 4 parameters as the input in the following order:

- First parameter (any type): the 1D array
- Second parameter (int): the size of the array
- Third parameter (int): the number of positions to move for all elements
- Fourth parameter (boolean): a flag to tell whether to shuffle to the left or to the right in the array

> That said, if the template function is called in the following format,
 ```
cyclic_shuffle(arr, 7, 2, false);
```
> It means that every element in the `arr`, will be moved two positions to its left, and the first two elements of the array will be moved to the end of the array accordingly.

*Examples:*

Given an integer array with 7 elements
```
6 2 1 7 4 6 9
```
> If the value of fourth parameter is set as false, all elements shuffle to the left

> If the value of the third parameter is 1, then the output will be: `2 1 7 4 6 9 6`

> If the value of the third parameter is 2, then the output will be: `1 7 4 6 9 6 2`

> If the value of fourth parameter is set as true, all elements shuffle to the right

> If the value of the third parameter is 1, then the output will be: `9 6 2 1 7 4 6`

> If the value of the parameter 3 is 2, then the output will be: `6 9 6 2 1 7 4`

> ***Hints: Please focus on getting the logic correct for any 1D integer array first before converting the function to be a template function. Also, work on the shifting of one position to the left or to the right correctly, then shifting n positions can be achieved by shifting one position n times.***

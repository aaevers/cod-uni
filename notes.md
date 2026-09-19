# Big O

Linear stuff like reading a 10 character string takes half as long as reading a 20 character string. Alternatively if you had some variable in which you stored the length of the string like int len = 1000; It would take as long to read
as if you had len = 2000; The variable storage thing, because it's just grabbing variable information and not like parsing a string I guess makes it "constant time" or a big o of 1 / O(1). O(1) means that as things asymptotically grow
(approach infinity) the time required to do that action remains constant.

O(n^2) algorithms will eventually take more time than O(n) algorithms because duh the actual load increases at an exponential rate compared to linear rate. Keep in mind the eventually part, O(n^2) might cheese the O(n) with same hardware / 
environment with actions fewer than 50 or something, but as actions increase then eventually it will catch up to O(n) and exceed it.

O(log n), Binary Search is a O(log n). Binary search in the thing where let's say you have an array, you go to the middle point and if the value you're looking for is higher then you forget about the smaller numbers and jump to the middle
of the top part, i.e jump to 50, then to 75, then on until you find what you want.
Binary Search I think uses log(base 2)x to determine its max operations, for instance a size 16 array does log(base 2)16 and you at most do 4 operations.

Comp Scientists have a thing for the best case as well called Omega, so for Binary Search the best case would be that the first number you pick is the number you want so BS can be called omega(1)

Linear Search is at best omega(1) at worst O(n) <- because it's proportional to the number of items in the array i.e. if there's 10 items, there's 0 operations

Theta is sort of a combo of best and worst, accessing a variable to find len is both at best and worst constant so it's theta(1)

Omega = Best Case
Big O = Worst Case
Theta = Median case


O(1) - Constant Time - takes same number of operations no matter the data size - random access of array, inserting at beginning of linked list.
O(log n) - Logarithmic Time - as the data size gets bigger it takes fewer actions per chunk of data - binary search.
O(n) - Linear Time - operations directly proportional to data size - looping through elements of array.
O(n log n) - Quasilinear Time - as the data size get bigger it takes more actions per chunk of data - quicksort, mergesort, heapsort.
O(n^2) - Quadratic Time - same thing as Quasilinear but amplified - insertion sort, selection sort, bubblesort.
O(n!) - Factorial Time - like the above two but even shittier - Traveling Salesman Problem?



If one know the data size in advance are can find that break point between two algorithms being more or less efficient you can elect to run alg 1 up to the point they meet then run agl 2.




# Data Structures


Data structure: a named location that can be used to store and organize data

Algorithm: a collection of staps to solve a problem

Array is data structure, linear search is algorithm



## Data Struct - Stack:
Last-In First-Out, stores objects into a sort of vertical tower, push() to add to the top, pop() to remove from top - Made this in C 
Linear data strucutre
Uses of stack: undo/redo features in text editors, moving forward and back through browser history, backtracking algorithms (maze, file directories), calling functions (call stack).



## Data Struct - Queue:
First-In First-Out, designed to hold elements prior to processing, first come first serve - Made in C
Linear data structure
add = enqueue
remove = dequeue



## Data Struct - Priority Queue:
FIFO data structure but it serves elements of higher priority first, before elements of lower priority. Didn't make in C, same fundamentals as queue with added value/priority checking between elements, not gon do allat



## Data Struct - Linked Lists:
Elements include value and pointer / address to next element. Much worse for searching than arrays. 
Singly linked list only includes pointer to the next node, a doubly linked list includes a pointer forward and backward.



## Data Struct - Dynamic Array:
Basically a dynamically resizable array, maybe the simplest concept of all of these, beyond the standard array itself.
Different languages call it different things: Java = ArrayList; C++ = Vector; JS = Array; Python = List;
Adventages: Random access of elemnets is O(1), contiguous so good data cache utilization, easy to insert delete at end.
Disadvantages: Wastes more memory, shifting elements is time consuming O(n), expanding / shrinking the array is time consuming O(n).

# Algorithms


## Algorithm - Linear Search
Runetime complexity O(n)
disadvantages: slow for large data sets
advantages: fast over small / medium data sets
Doesn't need to be sorted
useful for data structures that do not have random access, like linked lists where you need to search through the whole thing, arrays are random access
Made in C



## Algorithm - Binary Search
Finds position of target value within a sorted array, half of the array is eliminated during each operation
It jumps into the middle of a sorted data set, determines if the value is equal or higher or lower, then a variable either high or low will raise or fall thus "removing" that part of the array from our search,
we then jump into the middle again raising and lowering these so we stay within our bounds. We make sure to check that low <= high so it never goes above and breaks us out of bounds.
Binary Search is O(logn) as it maintains efficiency with large data sets
Made in C



## Algorithm - Interpolation Search
An improvement over binary searches, best used for "uniformly" distrubuted data. It "guesses" where a result might be based on calculated
probe results. If probe is incorrect the search window is narrowed and a new probe is calculated.

Average case: O(log(logn))
Worst case: O(n) [when values in structure increase exponentially]
Made in C :)



## Algorithm - Bubble Sort
Checks adjacent elements to see if they're in order, if not they swap and then move on to the next element. It iterates over the entire array x number of times where x is the size of the array.
Can be used for sort or reverse sort where the highest number comes first.
Runs in O(n^2) - ok for small data set, AWFUL for big
Made in C



## Algorithm - Selection Sort
We iterate over the array find a minimum value and hold onto it, once done we then assign the min value to the first index swapping the value from the first index into wherever the min used to be.
We continue until all elements are sorted.
Runs in O(n^2) just like Bubble Sort
Made in C :)



## Algorithm - Insertion Sort
Compares elements to the left, thus it starts at index of 1. It shifts elements to the right to make room to insert a value.
Just like the above two it runs in O(n^2) time
Preferable to BubbleSort and Selection sort, it does less steps than bubble sort and in best case can do O(n) compared to selection sort's O(n^2) best case
Made in C





































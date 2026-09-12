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








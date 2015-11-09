# Sorts

Simple C++ Implementations of Sorting Algorithms

These implementations are programmed to ask the user for input, but can easily be changed to reading from a file (change the input buffer).

BUBBLE SORT

Bubble sort is one of the most inefficient sorting algorithms. While asymptotically equivalent to the other O(n^{2}) algorithms, it will require O(n^{2}) swaps in the worst-case. However, it is probably the simplest to understand. At each step, if two adjacent elements of a list are not in order, they will be swapped. Thus, smaller elements will "bubble" to the front, (or bigger elements will be "bubbled" to the back, depending on implementation) and hence the name. 

INSERTION SORT

nsertion sort is a simple sorting algorithm that is asymptotically equivalent to bubble sort, but is much faster in practice, because the number of swaps is at most linear. Its complexity is O(n^{2}), in-place, and is stable.
Insertion sort is preferable when the number of items is small - the constant is small enough that the benefit due to excellent locality and noticably better when the entire list fits in the lower levels of caching. Insertion sort is also quick when the list is nearly sorted. Introsort exploits these properties by using this sort after quicksort or heap sort have made a few passes on the list.

- Wikipedia

# Sorts

Simple C++ Implementations of Sorting Algorithms

These implementations are programmed to ask the user for input, but can easily be changed to reading from a file (change the input buffer).

BUBBLE SORT

Bubble sort is one of the most inefficient sorting algorithms. While asymptotically equivalent to the other O(n^{2}) algorithms, it will require O(n^{2}) swaps in the worst-case. However, it is probably the simplest to understand. At each step, if two adjacent elements of a list are not in order, they will be swapped. Thus, smaller elements will "bubble" to the front, (or bigger elements will be "bubbled" to the back, depending on implementation) and hence the name. 

INSERTION SORT

nsertion sort is a simple sorting algorithm that is asymptotically equivalent to bubble sort, but is much faster in practice, because the number of swaps is at most linear. Its complexity is O(n^{2}), in-place, and is stable.
Insertion sort is preferable when the number of items is small - the constant is small enough that the benefit due to excellent locality and noticably better when the entire list fits in the lower levels of caching. Insertion sort is also quick when the list is nearly sorted. Introsort exploits these properties by using this sort after quicksort or heap sort have made a few passes on the list.

SELECTION SORT

In computer science, selection sort is a sorting algorithm, specifically an in-place comparison sort. It has O(n2) time complexity, making it inefficient on large lists, and generally performs worse than the similar insertion sort. Selection sort is noted for its simplicity, and it has performance advantages over more complicated algorithms in certain situations, particularly where auxiliary memory is limited.

The algorithm divides the input list into two parts: the sublist of items already sorted, which is built up from left to right at the front (left) of the list, and the sublist of items remaining to be sorted that occupy the rest of the list. Initially, the sorted sublist is empty and the unsorted sublist is the entire input list. The algorithm proceeds by finding the smallest (or largest, depending on sorting order) element in the unsorted sublist, exchanging (swapping) it with the leftmost unsorted element (putting it in sorted order), and moving the sublist boundaries one element to the right.

- Wikipedia

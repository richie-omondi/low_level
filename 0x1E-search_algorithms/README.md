# Linear and Binary Search Algorithms

## What is the space complexity (worst case) of an iterative linear search algorithm in an array of size 

The **space complexity of an iterative linear search algorithm in an array of size `n` is O(1)**. This is because the algorithm only requires a constant amount of space to store the variables used in the search, regardless of the size of the input array. The same goes for the space complexity of a binary search algorithm in an array pf size `n`. The **time complexity of an iterative linear search algorithm is O(n), which means that the worst-case scenario is that the algorithm will have to search through the entire array to find the target element**. If you need more information, I can look up more details on the web.

## What is the space complexity of this function / algorithm? (6-O)

```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

## Jump search algorithm.

Jump search is a searching algorithm for sorted arrays that checks fewer elements by jumping ahead by fixed steps or skipping some elements in place of searching all elements. The basic idea is to check fewer elements (than linear search) by jumping ahead by fixed steps or skipping some elements in place of searching all elements. For example, suppose we have an array `arr[]` of size `n` and a block (to be jumped) of size `m`. Then we search in the indexes `arr[0]`, `arr[m]`, `arr[2m]`…`arr[km]` and so on. Once we find the interval (`arr[km] < x < arr[(k+1)m]`), we perform a linear search operation from the index `km` to find the element `x`.

The algorithm partitions the input into sub-lists of the same size and compares their keys until finding the target element. The steps are determined by the square root of the length of the array. Here is a step-by-step algorithm for the jump search:

 - Determine the step size `m` by taking the square root of the length of the array `n`.
 - Start at the first element of the array and jump `m` steps until the value at that position is greater than the target value.
 - Once a value greater than the target is found, perform a linear search starting from the previous step until the target is found or it is clear that the target is not in the array.
 - If the target is found, return its index. If not, return `-1` to indicate that the target was not found in the array.

Jump search has a lower time complexity than linear search and is better than binary search for large arrays. The increasing order of performance is: linear search < jump search < binary search.

For more info on why the step size is chosen as the square root of the length of the array, refer to this: https://en.wikipedia.org/wiki/Jump_search.

## What is the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)? O(sqrt(n)).
The optimal value of `m` is √`n`, where `n` is the length of the list (or array) `L`. Because both steps of the algorithm look at, at most, √`n` items the algorithm runs in O(√n) time. This is better than a linear search, but worse than a binary search. The advantage over the latter is that a jump search only needs to jump backwards once, while a binary can jump backwards up to log `n` times. This can be important if jumping backwards takes significantly more time than jumping forward.


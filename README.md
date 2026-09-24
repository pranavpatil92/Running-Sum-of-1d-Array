# Running-Sum-of-1d-Array
# 1480. Running Sum of 1D Array

## Problem

Given an array of integers, return a new array where each element is the sum of itself and all the elements before it in the original array.

## Example

```
Input: nums = [1,2,3,4]
Output: [1,3,6,10]

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
```

## Approach

Keep a running total while looping through the array. At each index, add the current element to the total and store that value in the result array at the same index.

## Complexity

- **Time Complexity:** O(n) — single pass through the array
- **Space Complexity:** O(n) — extra array used to store the result

## Code

```cpp
class Solution {
public:
    vector<int> runningSum(vector<int>& num) {
        vector<int> result(num.size());
        int total = 0;
        for (int i = 0; i < num.size(); i++) {
            total = total + num[i];
            result[i] = total;
        }
        return result;
    }
};
```

## Link

[LeetCode - 1480. Running Sum of 1D Array](https://leetcode.com/problems/running-sum-of-1d-array/)

<!---LeetCode Topics Start-->
# LeetCode Topics
## Array
|  |
| ------- |
| [0015-3sum](https://github.com/pranavpatil92/Running-Sum-of-1d-Array/tree/master/0015-3sum) |
| [0075-sort-colors](https://github.com/pranavpatil92/Running-Sum-of-1d-Array/tree/master/0075-sort-colors) |
| [0136-single-number](https://github.com/pranavpatil92/Running-Sum-of-1d-Array/tree/master/0136-single-number) |
| [0167-two-sum-ii-input-array-is-sorted](https://github.com/pranavpatil92/Running-Sum-of-1d-Array/tree/master/0167-two-sum-ii-input-array-is-sorted) |
| [0283-move-zeroes](https://github.com/pranavpatil92/Running-Sum-of-1d-Array/tree/master/0283-move-zeroes) |
| [1207-unique-number-of-occurrences](https://github.com/pranavpatil92/Running-Sum-of-1d-Array/tree/master/1207-unique-number-of-occurrences) |
## Bit Manipulation
|  |
| ------- |
| [0136-single-number](https://github.com/pranavpatil92/Running-Sum-of-1d-Array/tree/master/0136-single-number) |
## Hash Table
|  |
| ------- |
| [1207-unique-number-of-occurrences](https://github.com/pranavpatil92/Running-Sum-of-1d-Array/tree/master/1207-unique-number-of-occurrences) |
## Two Pointers
|  |
| ------- |
| [0015-3sum](https://github.com/pranavpatil92/Running-Sum-of-1d-Array/tree/master/0015-3sum) |
| [0075-sort-colors](https://github.com/pranavpatil92/Running-Sum-of-1d-Array/tree/master/0075-sort-colors) |
| [0167-two-sum-ii-input-array-is-sorted](https://github.com/pranavpatil92/Running-Sum-of-1d-Array/tree/master/0167-two-sum-ii-input-array-is-sorted) |
| [0283-move-zeroes](https://github.com/pranavpatil92/Running-Sum-of-1d-Array/tree/master/0283-move-zeroes) |
## Binary Search
|  |
| ------- |
| [0167-two-sum-ii-input-array-is-sorted](https://github.com/pranavpatil92/Running-Sum-of-1d-Array/tree/master/0167-two-sum-ii-input-array-is-sorted) |
## Sorting
|  |
| ------- |
| [0015-3sum](https://github.com/pranavpatil92/Running-Sum-of-1d-Array/tree/master/0015-3sum) |
| [0075-sort-colors](https://github.com/pranavpatil92/Running-Sum-of-1d-Array/tree/master/0075-sort-colors) |
## Quicksort
|  |
| ------- |
| [0075-sort-colors](https://github.com/pranavpatil92/Running-Sum-of-1d-Array/tree/master/0075-sort-colors) |
## Bubble Sort
|  |
| ------- |
| [0075-sort-colors](https://github.com/pranavpatil92/Running-Sum-of-1d-Array/tree/master/0075-sort-colors) |
<!---LeetCode Topics End-->
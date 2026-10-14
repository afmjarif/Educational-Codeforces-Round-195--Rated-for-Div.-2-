# C. Subarrays

**Platform:** Codeforces  
**Language:** C  
**Topic:** Arrays, Prefix Sums, Modular Arithmetic

## Problem Description

Monocarp has an array `a` consisting of `n` positive integers. He also has a favorite integer `k`, where `k < n`.

A subarray is a sequence of consecutive elements of an array, from index `l` to index `r`, inclusive.

A subarray is called **k-balanced** if it satisfies both conditions:

- The sum of its elements is divisible by `k`.
- Its length is strictly greater than `k`.

Your task is to determine the total number of k-balanced subarrays in the given array.

## Input

- The first line contains an integer `t` (`1 ≤ t ≤ 10⁴`), representing the number of test cases.
- The first line of each test case contains two integers `n` and `k` (`1 ≤ k < n ≤ 2 × 10⁵`).
- The second line contains `n` integers `a₁, a₂, ..., aₙ` (`1 ≤ aᵢ ≤ 10⁹`), representing the array elements.

The sum of `n` over all test cases does not exceed `2 × 10⁵`.

## Output

For each test case, print one integer representing the total number of k-balanced subarrays.

## Example

**Input**
```text
3
5 2
2 1 3 1 4
9 3
1 1 1 1 1 1 1 1 1
4 3
2 8 5 7
```

**Output**
```text
2
5
0
```

## Explanation

- **Test Case 1:** For `n = 5` and `k = 2`, two subarrays satisfy the conditions: `[2, 1, 3]` and `[3, 1, 4]`. Their sums are divisible by 2, and their lengths are greater than 2.
- **Test Case 2:** All elements are 1 and `k = 3`. Four subarrays of length 6 and one subarray of length 9 have sums divisible by 3. Therefore, the answer is 5.
- **Test Case 3:** The only subarray with length greater than 3 is the entire array. Its sum is 22, which is not divisible by 3. Therefore, the answer is 0.

## Complexity Considerations

The total number of array elements across all test cases does not exceed `2 × 10⁵`. An efficient solution should process the array without checking every possible subarray individually.


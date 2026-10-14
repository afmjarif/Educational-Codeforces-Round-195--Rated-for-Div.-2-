
# A. Perfect Sandwiches

**Platform:** Codeforces  
**Language:** C  
**Topic:** Math, Greedy Algorithm

## Problem Description

Monocarp has `a` slices of cheese and `b` slices of sausage. He wants to make the maximum possible number of sandwiches using all the available ingredients.

Each sandwich must satisfy the following conditions:

- It must contain at least one slice of cheese and at least one slice of sausage.
- All cheese and sausage slices must be used without any leftovers.
- The number of cheese slices in each sandwich must be strictly greater than the number of sausage slices.

Determine the maximum number of sandwiches Monocarp can make. If it is impossible to distribute all the ingredients according to these rules, print `-1`.

## Input

- The first line contains an integer `t` (`1 ≤ t ≤ 10⁴`), representing the number of test cases.
- Each test case contains two integers `a` and `b` (`1 ≤ a, b ≤ 100`), representing the number of cheese and sausage slices, respectively.

## Output

For each test case, print the maximum number of sandwiches that can be made. If it is impossible, print `-1`.

## Example

**Input**
```text
3
6 4
5 1
4 5
```

**Output**
```text
2
1
-1
```

## Explanation

- **Test Case 1:** With 6 cheese slices and 4 sausage slices, Monocarp can make 2 sandwiches, each containing 3 cheese slices and 2 sausage slices.
- **Test Case 2:** With 5 cheese slices and 1 sausage slice, he can make 1 sandwich using all the ingredients.
- **Test Case 3:** With 4 cheese slices and 5 sausage slices, it is impossible to satisfy the conditions.

## Complexity Analysis

- **Time Complexity:** `O(1)` per test case.
- **Space Complexity:** `O(1)`.

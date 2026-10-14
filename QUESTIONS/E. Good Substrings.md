# E. Good Substrings

**Platform:** Codeforces  
**Language:** C++  
**Topic:** Strings, Substrings, Combinatorics

## Problem Description

You are given a string `s` of length `n`, consisting only of digits.

A substring is a contiguous sequence of characters from the original string.

A substring is called **bad** if it contains `2025` as a subsequence but does not contain `2026` as a subsequence. Otherwise, the substring is considered **good**.

A subsequence is formed by deleting zero or more characters without changing the relative order of the remaining characters. The characters do not need to be consecutive.

For example:

- `2025` is bad.
- `72707275` is bad.
- `20625` is bad.
- `20256` is good.
- `2026` is good.
- `777` is good.
- `1290723576` is good.

For every index `i` from `1` to `n`, determine the number of good substrings that contain that index.

## Input

- The first line contains an integer `t` (`1 ≤ t ≤ 10⁴`), representing the number of test cases.
- The first line of each test case contains an integer `n` (`1 ≤ n ≤ 3 × 10⁵`), representing the length of the string.
- The second line contains a string `s` of length `n`, consisting only of digits.

The sum of `n` across all test cases does not exceed `3 × 10⁵`.

## Output

For each test case, print `n` integers.

The `i`-th integer represents the number of good substrings that contain index `i`.

## Example

**Input**
```text id="p7wj3v"
2
6
202516
5
20265
```

**Output**
```text id="8k2e1d"
4 8 10 10 9 6
5 8 9 8 5
```

## Explanation

- **Test Case 1:** The string is `202516`. For each position, count all substrings containing that position that do not satisfy the bad-substring condition. The resulting counts are `4 8 10 10 9 6`.
- **Test Case 2:** The string is `20265`. Substrings containing `2026` as a subsequence are good, even if they also contain `2025`. The resulting counts are `5 8 9 8 5`.

## Complexity Considerations

The total length of all strings does not exceed `3 × 10⁵`. An efficient solution should process each test case without enumerating every possible substring individually.


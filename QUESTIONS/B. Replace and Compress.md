# B. Replace and Compress

**Platform:** Codeforces  
**Language:** C  
**Topic:** Strings, Implementation

## Problem Description

You are given a binary string `s` consisting only of the characters `0` and `1`.

You must perform exactly one operation consisting of two steps:

1. Choose at most one character from the string, excluding the first and last characters, and replace it with the opposite character. You may also choose not to change any character.
2. Compress the string by replacing every maximal block of consecutive equal characters with a single character.

A block is a maximal sequence of consecutive identical characters that cannot be extended further in either direction.

For example, the string `100111011` becomes `10101` after compression.

Your task is to count the number of **distinct strings** that can be obtained after performing the operation.

## Input

- The first line contains an integer `t` (`1 ≤ t ≤ 10⁴`), representing the number of test cases.
- Each test case contains a binary string `s` (`3 ≤ |s| ≤ 2 × 10⁵`).
- The sum of the lengths of all strings does not exceed `2 × 10⁵`.

## Output

For each test case, print the number of distinct strings that can be obtained after performing the operation.

## Example

**Input**
```text
7
001
000
010
00010
100111011
001011010
1111
```

**Output**
```text
1
2
2
3
3
2
2
```

## Explanation

- **Test Case 1:** The string `001` can produce only one distinct compressed string: `01`.
- **Test Case 2:** The string `000` can produce two distinct compressed strings.
- **Test Case 3:** The string `010` can produce two distinct compressed strings.
- **Test Case 4:** The string `00010` can produce three distinct compressed strings.
- **Test Case 5:** The string `100111011` can produce three distinct compressed strings: `101`, `10101`, and `1010101`.
- **Test Case 6:** The string `001011010` can produce two distinct compressed strings.
- **Test Case 7:** The string `1111` can produce two distinct compressed strings.

## Complexity Considerations

The sum of the lengths of all test-case strings is at most `2 × 10⁵`, so an efficient solution should handle the input within the given time limit.

# F. Permutation Coloring Game

**Platform:** Codeforces  
**Language:** C++  
**Topic:** Permutations, Game Theory, Greedy Algorithms

## Problem Description

Alice and Bob are playing a game using a permutation of length `n`. A permutation is an array containing every integer from `1` to `n` exactly once.

Initially, all elements are white. Alice goes first, and the players take turns coloring the elements.

On each turn:

- The current player chooses between `1` and `k` white elements.
- All elements chosen during that turn must be colored the same color: either red or blue.
- The game continues until every element has been colored.

After the game ends, Alice wins if the permutation can be sorted in increasing order by swapping elements of the same color. Otherwise, Bob wins.

Both players play optimally. Determine the winner.

## Input

- The first line contains an integer `t`, representing the number of test cases.
- Each test case consists of two lines:
  - The first line contains two integers `n` and `k`, representing the length of the permutation and the maximum number of elements that can be colored in one turn.
  - The second line contains `n` pairwise distinct integers `a₁, a₂, ..., aₙ`, representing the permutation.

The sum of `n` across all test cases does not exceed the problem's specified limit.

## Output

For each test case, print `Alice` if Alice wins when both players play optimally. Otherwise, print `Bob`.

## Example

**Input**
```text
10
2 1
1 2
2 1
2 1
2 2
2 1
3 2
2 3 1
4 2
2 3 1 4
8 3
2 3 1 5 6 4 8 7
10 3
2 3 1 5 6 4 8 7 10 9
6 2
1 2 3 5 6 4
7 1
4 5 6 1 2 3 7
8 1
4 5 6 1 2 3 7 8
```

**Output**
```text
Alice
Bob
Alice
Bob
Alice
Alice
Bob
Bob
Alice
Bob
```

## Explanation

The winner depends on the initial permutation, the maximum number of elements that can be colored per turn, and the strategies used by both players.

- **Alice wins** if the resulting coloring allows the permutation to be sorted using only swaps between elements of the same color.
- **Bob wins** if the final coloring makes sorting impossible.

## Complexity Considerations

The solution must handle the sum of the permutation lengths across all test cases within the time limit of 3 seconds. An efficient approach is necessary for large permutations.


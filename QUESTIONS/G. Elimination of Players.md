# G. Elimination of Players

## Problem Information
- **Platform:** Codeforces
- **Problem Name:** G. Elimination of Players
- **Language:** C++
- **Topics:** Combinatorics, Dynamic Programming, Permutations, Modular Arithmetic, Bitwise XOR

## Problem Description
There are `n` players numbered from `1` to `n`. Each player has a unique strength from `1` to `n`, and the strengths form a permutation.

The game consists of `n - 1` rounds. In round `i`, player `a[i]` is protected, even if that player has already been eliminated.

During each round:
- If the weakest remaining player is not protected, that player is eliminated.
- Otherwise, the second-weakest remaining player is eliminated.

After all rounds, exactly one player remains.

The sequence of protected players is given, but their strengths are unknown.

For every player `i` and round `j`, let `ans(i, j)` be the number of strength permutations in which player `i` is eliminated in round `j`, modulo `998244353`.

The task is to calculate the bitwise XOR of all values `ans(i, j) * i * j`, where the multiplication and final XOR are performed using the actual integer values of the modular results.

## Input
The first line contains an integer `t` — the number of test cases.

Each test case contains:
- An integer `n`, the number of players.
- A sequence of `n - 1` integers `a[1], a[2], ..., a[n-1]`, representing the protected player in each round.

### Constraints
- `1 ≤ t ≤ 2500`
- `2 ≤ n ≤ 5000`
- `1 ≤ a[i] ≤ n`
- The sum of `n` over all test cases does not exceed `5000`.

## Output
For each test case, print one integer: the XOR of `ans(i, j) * i * j` over all players `i` and rounds `j`.

Only `ans(i, j)` is taken modulo `998244353`. The multiplication and final XOR are not performed modulo this number.

## Example

### Input
```text
7
2
2
3
1 2
4
1 1 1
4
1 4 1
7
2 2 2 7 7 7
6
3 1 3 6 3
5
5 1 4 2
```

### Output
```text
2
3
96
188
2024
4610
69
```

## Explanation
In the first test case, there are two possible strength permutations: `(1, 2)` and `(2, 1)`.

Player `2` is protected in the only round, so player `1` is eliminated in both permutations. Therefore:
- `ans(1, 1) = 2`
- `ans(2, 1) = 0`

The final answer is `(2 × 1 × 1) XOR (0 × 2 × 1) = 2`.

The remaining test cases follow the same rules, considering all possible strength permutations and calculating the required XOR.

## Important Notes
- Strengths are distinct and form a permutation of `1` through `n`.
- A protected player may already have been eliminated.
- Exactly one player remains after the final round.
- The answer counts permutations, not individual game outcomes.
- Use modulo `998244353` when calculating the number of permutations for each player and round.

## Suggested Repository Name
`elimination-of-players`

## Suggested Commit Message
`Add problem statement for Elimination of Players`

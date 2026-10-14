# D. Caveman

**Platform:** Codeforces  
**Language:** C++  
**Topic:** Graph Theory, Bipartite Graphs, Connected Components

## Problem Description

Monocarp draws an undirected graph with `n` vertices and `m` edges. He wants to color every vertex either red or blue so that each vertex has at least one neighbor with the opposite color.

Your task is to count the number of valid colorings.

However, Monocarp only understands three possible answers:

- `1` — exactly one valid coloring.
- `2` — exactly two valid colorings.
- `Many` — more than two valid colorings.
- `Brain Melt` — no valid colorings exist.

Two colorings are considered different if at least one vertex has a different color.

## Input

- The first line contains an integer `t` (`1 ≤ t ≤ 10⁴`), representing the number of test cases.
- Each test case begins with two integers `n` and `m` (`3 ≤ n ≤ 3 × 10⁵`, `0 ≤ m ≤ min(n(n − 1)/2, 3 × 10⁵)`), representing the number of vertices and edges.
- The next `m` lines each contain two integers `uᵢ` and `vᵢ`, indicating an undirected edge between vertices `uᵢ` and `vᵢ`.

The graph contains no self-loops or multiple edges.

The sum of `n` and the sum of `m` across all test cases do not exceed `3 × 10⁵` individually.

## Output

For each test case, print one of the following:

- `1` if there is exactly one valid coloring.
- `2` if there are exactly two valid colorings.
- `Many` if there are more than two valid colorings.
- `Brain Melt` if no valid colorings exist.

## Example

**Input**
```text
4
3 1
1 2
3 2
1 2
1 3
3 3
1 2
2 3
1 3
4 3
1 2
2 3
3 4
```

**Output**
```text
Brain Melt
2
Many
Many
```

## Explanation

- **Test Case 1:** Vertex 3 has no neighbors, so no valid coloring exists. The answer is `Brain Melt`.
- **Test Case 2:** The graph has two edges connecting vertex 1 to vertices 2 and 3. There are exactly two valid colorings, depending on whether vertex 1 is red or blue. The answer is `2`.
- **Test Case 3:** The graph is a triangle. Each vertex can have a neighbor of the opposite color, and there are more than two valid colorings. The answer is `Many`.
- **Test Case 4:** The graph is a path of four vertices. There are more than two valid colorings satisfying the conditions. The answer is `Many`.

## Complexity Considerations

The total number of vertices and edges across all test cases is bounded by `3 × 10⁵`. An efficient graph traversal-based approach is needed to process the test cases within the time limit.


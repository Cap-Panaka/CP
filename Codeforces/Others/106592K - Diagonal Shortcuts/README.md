# K. Diagonal Shortcuts
 
| Field | Value |
|---|---|
| **Contest** | [106592](https://codeforces.com/contest/106592) |
| **Problem** | [106592K — Diagonal Shortcuts](https://codeforces.com/contest/106592/problem/K) |
| **Rating** | Gym/Unrated |
| **Tags** | N/A |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Upobir is playing a game on an infinite 2D grid. He starts at the origin `(0, 0)` and wants to travel to the target coordinate `(x, x)`. To navigate the grid, Upobir can perform two types of moves:

 - **Chess Knight Move:** From his current position `(x_1, y_1)`, he can move to any coordinate `(x_2, y_2)` such that `|x_1 - x_2| = 1` and `|y_1 - y_2| = 2`, or `|x_1 - x_2| = 2` and `|y_1 - y_2| = 1`. This move costs `1` unit of energy.
- **Special Jump:** He can perform a unique jump to instantly teleport from his current position directly to the target `(x, x)`. This unique move does not follow standard chess rules and costs `k` units of energy.

Given `x` and `k`, find the minimum total energy Upobir needs to spend to reach `(x, x)`.

## Input

The first line contains a single integer `t` (`1 ≤ t ≤ 10^5`) — the number of test cases.

The only line of each test case contains two integers `x` and `k` (`1 ≤ x ≤ 10^9`, `1 ≤ k ≤ 10^9`) — the coordinate value defining the target `(x, x)`, and the energy cost of the special jump.

## Output

For each test case, print a single integer — the minimum total energy required to reach `(x, x)`.

## Examples

**Example:**

```
3
1 5
3 2
3 3

```

**Output:**

```
2
2
2

```

## Note

In the first test case, Upobir can reach `(1, 1)` using `2` chess knight moves: `(0, 0) → (-1, 2) → (1, 1)`. This costs `2` units of energy.

In the second test case, Upobir can reach `(3, 3)` using `2` chess knight moves: `(0, 0) → (1, 2) → (3, 3)`. Alternatively, he could use the special jump immediately at `(0, 0)` to instantly leap to `(3, 3)`. In both scenarios, the minimum energy required is `2`.

---

> 🔗 [View on Codeforces](https://codeforces.com/gym/106592/problem/K)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

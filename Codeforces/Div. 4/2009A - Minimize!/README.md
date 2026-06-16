# A. Minimize!
 
| Field | Value |
|---|---|
| **Contest** | [2009](https://codeforces.com/contest/2009) |
| **Problem** | [2009A — Minimize!](https://codeforces.com/contest/2009/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 15 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given two integers a and b (a ≤ b). Over all possible integer values of c (a ≤ c ≤ b), find the minimum value of (c - a) + (b - c).

## Input

The first line contains t (1 ≤ t ≤ 55) — the number of test cases. 

Each test case contains two integers a and b (1 ≤ a ≤ b ≤ 10).

## Output

For each test case, output the minimum possible value of (c - a) + (b - c) on a new line.

## Examples

**Example:**

```
3
1 2
3 10
5 5
```

**Output:**

```
1
7
0

```

## Note

In the first test case, you can choose c = 1 and obtain an answer of (1 - 1) + (2 - 1) = 1. It can be shown this is the minimum value possible.

In the second test case, you can choose c = 6 and obtain an answer of (6 - 3) + (10 - 6) = 7. It can be shown this is the minimum value possible.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2009/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

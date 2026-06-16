# A. Blackslex and Password
 
| Field | Value |
|---|---|
| **Contest** | [2179](https://codeforces.com/contest/2179) |
| **Problem** | [2179A — Blackslex and Password](https://codeforces.com/contest/2179/problem/A) |
| **Rating** | 800 |
| **Tags** | math, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

*Blackslex is designing a log-in system for Gean Dev and discovered that most users use weak passwords.*

To resolve this issue, he posed the following conditions, dependent on two variables k and x, for all passwords. Each password is a string s of length n satisfying these properties.

- s uses only the first k lowercase letters of the English alphabet.
- For every pair of indices 1 ≤ i < j ≤ n such that (j-i) is divisible by x, the letters s_i and s_j are different.

Find the smallest integer n such that no valid string of length n exists.

## Input

The first line contains a single integer t (1 ≤ t ≤ 500) — the number of test cases. 

The first and only line of each test case contains two integers k and x (1 ≤ k ≤ 26, 1 ≤ x ≤ 15).

## Output

For each test case, output the minimal n.

## Examples

**Example:**

```
3
2 1
3 2
1 5
```

**Output:**

```
3
7
6
```

## Note

For the first test case, there are no valid strings of length n=3. For n=2, one such valid example is `ab`. Note that the only pair (i, j) that (j-i) is divisible by x=1 and 1 ≤ i < j ≤ n for n=2 is (1, 2).

For the second test case, there are no valid strings of length n=7. For n=6, one such valid example is `aabccb`. Note that all pairs (i, j) that (j-i) is divisible by x=2 and 1 ≤ i < j ≤ n for n=6 include (1, 3), (1, 5), (2, 4), (2, 6), (3, 5), and (4, 6).

For the third test case, there are no valid strings of length n=6. For n=5, one such valid example is `aaaaa`. Note that there are no pairs (i, j) that (j-i) is divisible by x=5 and 1 ≤ i < j ≤ n for n=5.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2179/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

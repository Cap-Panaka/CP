# A. Only One Digit
 
| Field | Value |
|---|---|
| **Contest** | [2126](https://codeforces.com/contest/2126) |
| **Problem** | [2126A — Only One Digit](https://codeforces.com/contest/2126/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, implementation, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given an integer x. You need to find the smallest non-negative integer y such that the numbers x and y share at least one common digit. In other words, there must exist a decimal digit d that appears in both the representation of the number x and the number y.

## Input

The first line contains an integer t (1 ≤ t ≤ 1000) — the number of test cases.

The first line of each test case contains one integer x (1 ≤ x ≤ 1000).

## Output

For each test case, output one integer y — the minimum non-negative number that satisfies the condition.

## Examples

**Example:**

```
5
6
96
78
122
696
```

**Output:**

```
6
6
7
1
6

```

## Note

In the first test case, the numbers 6 and 6 share the common digit '`6`'. Moreover, there is no natural number smaller than this that shares a common digit.

In the second test case, the numbers 6 and 96 share the common digit '`6`'.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2126/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

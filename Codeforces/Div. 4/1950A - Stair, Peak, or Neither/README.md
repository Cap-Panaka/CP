# A. Stair, Peak, or Neither?
 
| Field | Value |
|---|---|
| **Contest** | [1950](https://codeforces.com/contest/1950) |
| **Problem** | [1950A — Stair, Peak, or Neither?](https://codeforces.com/contest/1950/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given three digits a, b, and c. Determine whether they form a stair, a peak, or neither. 

 - A *stair* satisfies the condition a < b < c.
- A *peak* satisfies the condition a < b > c.

## Input

The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases.

The only line of each test case contains three digits a, b, c (0 ≤ a, b, c ≤ 9).

## Output

For each test case, output "`STAIR`" if the digits form a stair, "`PEAK`" if the digits form a peak, and "`NONE`" otherwise (output the strings without quotes).

## Examples

**Example:**

```
7
1 2 3
3 2 1
1 5 3
3 4 1
0 0 0
4 1 7
4 5 7
```

**Output:**

```
STAIR
NONE
PEAK
PEAK
NONE
NONE
STAIR

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1950/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

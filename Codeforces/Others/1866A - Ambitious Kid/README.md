# A. Ambitious Kid
 
| Field | Value |
|---|---|
| **Contest** | [1866](https://codeforces.com/contest/1866) |
| **Problem** | [1866A — Ambitious Kid](https://codeforces.com/contest/1866/problem/A) |
| **Rating** | 800 |
| **Tags** | math |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 62 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Chaneka, Pak Chanek's child, is an ambitious kid, so Pak Chanek gives her the following problem to test her ambition.

Given an array of integers [A_1, A_2, A_3, …, A_N]. In one operation, Chaneka can choose one element, then increase or decrease the element's value by 1. Chaneka can do that operation multiple times, even for different elements.

What is the minimum number of operations that must be done to make it such that A_1 × A_2 × A_3 × … × A_N = 0?

## Input

The first line contains a single integer N (1 ≤ N ≤ 10^5).

The second line contains N integers A_1, A_2, A_3, …, A_N (-10^5 ≤ A_i ≤ 10^5).

## Output

An integer representing the minimum number of operations that must be done to make it such that A_1 × A_2 × A_3 × … × A_N = 0.

## Examples

**Example 1:**

```
3
2 -6 5

```

**Output 1:**

```
2

```

**Example 2:**

```
1
-3

```

**Output 2:**

```
3

```

**Example 3:**

```
5
0 -1 0 1 0

```

**Output 3:**

```
0

```

## Note

In the first example, initially, A_1× A_2× A_3=2×(-6)×5=-60. Chaneka can do the following sequence of operations:

 - Decrease the value of A_1 by 1. Then, A_1× A_2× A_3=1×(-6)×5=-30
- Decrease the value of A_1 by 1. Then, A_1× A_2× A_3=0×(-6)×5=0

In the third example, Chaneka does not have to do any operations, because from the start, it already holds that A_1× A_2× A_3× A_4× A_5=0×(-1)×0×1×0=0

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1866/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

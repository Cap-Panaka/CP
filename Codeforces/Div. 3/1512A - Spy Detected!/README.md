# A. Spy Detected!
 
| Field | Value |
|---|---|
| **Contest** | [1512](https://codeforces.com/contest/1512) |
| **Problem** | [1512A — Spy Detected!](https://codeforces.com/contest/1512/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

You are given an array a consisting of n (n ≥ 3) positive integers. It is known that in this array, all the numbers except one are the same (for example, in the array [4, 11, 4, 4] all numbers except one are equal to 4).

Print the index of the element that does not equal others. The numbers in the array are numbered from one.

## Input

The first line contains a single integer t (1 ≤ t ≤ 100). Then t test cases follow.

The first line of each test case contains a single integer n (3 ≤ n ≤ 100) — the length of the array a.

The second line of each test case contains n integers a_1, a_2, …, a_n (1 ≤ a_i ≤ 100).

It is guaranteed that all the numbers except one in the a array are the same.

## Output

For each test case, output a single integer — the index of the element that is not equal to others.

## Examples

**Example:**

```
4
4
11 13 11 11
5
1 4 4 4 4
10
3 3 3 3 10 3 3 3 3 3
3
20 20 10

```

**Output:**

```
2
1
5
3

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1512/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

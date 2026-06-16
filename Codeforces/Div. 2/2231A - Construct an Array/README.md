# A. Construct an Array
 
| Field | Value |
|---|---|
| **Contest** | [2231](https://codeforces.com/contest/2231) |
| **Problem** | [2231A — Construct an Array](https://codeforces.com/contest/2231/problem/A) |
| **Rating** | 800 |
| **Tags** | constructive algorithms |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given an integer n. You need to construct an array of integers a_1, a_2, …, a_n such that the following conditions are satisfied:

- 1 ≤ a_i ≤ 2 · n for all i from 1 to n.
- All elements of the array and the sums of adjacent elements are pairwise distinct. In other words, among the numbers {a_1, a_2, …, a_n, a_1 + a_2, a_2 + a_3, …, a_n - 1 + a_n}, there should not be two equal numbers.

## Input

Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 100). The description of the test cases follows. 

The only line of each test case contains one integer n (1 ≤ n ≤ 500).

## Output

For each test case, output an array of length n that satisfies the condition of the problem. It can be shown that such an array always exists under the given constraints.

## Examples

**Example:**

```
3
1
3
6
```

**Output:**

```
1 
6 2 3
8 1 11 2 3 4
```

## Note

In the second example, all elements and adjacent sums form the set 6, 2, 3, 8, 5, all of whose elements are distinct.

In the third example, all elements and adjacent sums form the set 8, 1, 11, 2, 3, 4, 9, 12, 13, 5, 7, whose elements are also distinct.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2231/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

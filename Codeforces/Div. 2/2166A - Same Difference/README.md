# A. Same Difference
 
| Field | Value |
|---|---|
| **Contest** | [2166](https://codeforces.com/contest/2166) |
| **Problem** | [2166A — Same Difference](https://codeforces.com/contest/2166/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, greedy, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 31 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given a string s of length n, consisting of lowercase letters.

In one operation, you can select an integer i such that 1≤ i < n and change s_i into s_i+1.

What is the minimum number of operations needed to make every character the same? It can be proved that this is always possible.

## Input

Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 20). The description of the test cases follows. 

The first line of each test case contains an integer n (2≤ n≤ 100) — the length of the string.

The following line contains a string s of length n, consisting of lowercase letters.

It is guaranteed that the sum of n over all test cases does not exceed 100.

## Output

For each test case, output a single integer — the minimum number of operations needed to make every character the same.

## Examples

**Example:**

```
5
3
qwq
2
aa
4
test
5
abbac
6
abcabc
```

**Output:**

```
1
0
2
4
4
```

## Note

In the first test case, you can change s_2 to s_3 using 1 operation to reach the goal.

In the third test case, you can change s_3 to s_4 and then change s_2 to s_3, using 2 operations in total. It can be proved that the answer is not less than 2.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2166/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

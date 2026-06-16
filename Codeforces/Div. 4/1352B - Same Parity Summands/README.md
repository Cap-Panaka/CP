# B. Same Parity Summands
 
| Field | Value |
|---|---|
| **Contest** | [1352](https://codeforces.com/contest/1352) |
| **Problem** | [1352B — Same Parity Summands](https://codeforces.com/contest/1352/problem/B) |
| **Rating** | 1200 |
| **Tags** | constructive algorithms, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given two positive integers n (1 ≤ n ≤ 10^9) and k (1 ≤ k ≤ 100). Represent the number n as the sum of k positive integers of the same parity (have the same remainder when divided by 2).

In other words, find a_1, a_2, …, a_k such that all a_i > 0, n = a_1 + a_2 + … + a_k and either all a_i are even or all a_i are odd at the same time.

If such a representation does not exist, then report it.

## Input

The first line contains an integer t (1 ≤ t ≤ 1000) — the number of test cases in the input. Next, t test cases are given, one per line.

Each test case is two positive integers n (1 ≤ n ≤ 10^9) and k (1 ≤ k ≤ 100).

## Output

For each test case print:

 - `YES` and the required values a_i, if the answer exists (if there are several answers, print any of them);
- `NO` if the answer does not exist.

The letters in the words `YES` and `NO` can be printed in any case.

## Examples

**Example:**

```
8
10 3
100 4
8 7
97 2
8 8
3 10
5 3
1000000000 9

```

**Output:**

```
YES
4 2 4
YES
55 5 5 35
NO
NO
YES
1 1 1 1 1 1 1 1
NO
YES
3 1 1
YES
111111110 111111110 111111110 111111110 111111110 111111110 111111110 111111110 111111120

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1352/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

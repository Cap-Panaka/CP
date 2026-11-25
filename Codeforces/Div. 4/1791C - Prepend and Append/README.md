# C. Prepend and Append
 
| Field | Value |
|---|---|
| **Contest** | [1791](https://codeforces.com/contest/1791) |
| **Problem** | [1791C — Prepend and Append](https://codeforces.com/contest/1791/problem/C) |
| **Rating** | 800 |
| **Tags** | implementation, two pointers |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Timur initially had a binary string`^dagger` `s` (possibly of length `0`). He performed the following operation several (possibly zero) times: 

 - Add `0` to one end of the string and `1` to the other end of the string. For example, starting from the string `1011`, you can obtain either `colorred01011colorred1` or `colorred11011colorred0`.

 You are given Timur's final string. What is the length of the **shortest** possible string he could have started with?`^dagger` A binary string is a string (possibly the empty string) whose characters are either `0` or `1`.

## Input

The first line of the input contains an integer `t` (`1 ≤ t ≤ 100`) — the number of testcases.

The first line of each test case contains an integer `n` (`1 ≤ n ≤ 2000`) — the length of Timur's final string.

The second line of each test case contains a string `s` of length `n` consisting of characters `0` or `1`, denoting the final string.

## Output

For each test case, output a single nonnegative integer — the shortest possible length of Timur's original string. Note that Timur's original string could have been empty, in which case you should output `0`.

## Examples

**Example:**

```
9
3
100
4
0111
5
10101
6
101010
7
1010110
1
1
2
10
2
11
10
1011011010
```

**Output:**

```
1
2
5
0
3
1
0
2
4

```

## Note

In the first test case, the shortest possible string Timur started with is `0`, and he performed the following operation: `0 → colorred10colorred0`.

In the second test case, the shortest possible string Timur started with is `11`, and he performed the following operation: `11 → colorred011colorred1`.

In the third test case, the shortest possible string Timur started with is `10101`, and he didn't perform any operations.

In the fourth test case, the shortest possible string Timur started with is the empty string (which we denote by `ε`), and he performed the following operations: `ε → colorred1colorred0 → colorred010colorred1 → colorred10101colorred0`.

In the fifth test case, the shortest possible string Timur started with is `101`, and he performed the following operations: `101 → colorred0101colorred1 → colorred101011colorred0`.

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/1791/C)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

# A. Even Odds
 
| Field | Value |
|---|---|
| **Contest** | [318](https://codeforces.com/contest/318) |
| **Problem** | [318A — Even Odds](https://codeforces.com/contest/318/problem/A) |
| **Rating** | 900 |
| **Tags** | math |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 92 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Being a nonconformist, Volodya is displeased with the current state of things, particularly with the order of natural numbers (natural number is positive integer number). He is determined to rearrange them. But there are too many natural numbers, so Volodya decided to start with the first *n*. He writes down the following sequence of numbers: firstly all odd integers from 1 to *n* (in ascending order), then all even integers from 1 to *n* (also in ascending order). Help our hero to find out which number will stand at the position number *k*.

## Input

The only line of input contains integers *n* and *k* (1 ≤ *k* ≤ *n* ≤ 10^12).

Please, do not use the `%lld` specifier to read or write 64-bit integers in C++. It is preferred to use the `cin`, `cout` streams or the `%I64d` specifier.

## Output

Print the number that will stand at the position number *k* after Volodya's manipulations.

## Examples

**Example 1:**

```
10 3

```

**Output 1:**

```
5
```

**Example 2:**

```
7 7

```

**Output 2:**

```
6
```

## Note

In the first sample Volodya's sequence will look like this: {1, 3, 5, 7, 9, 2, 4, 6, 8, 10}. The third place in the sequence is therefore occupied by the number 5.

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/318/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

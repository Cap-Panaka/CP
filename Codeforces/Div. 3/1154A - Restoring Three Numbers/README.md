# A. Restoring Three Numbers
 
| Field | Value |
|---|---|
| **Contest** | [1154](https://codeforces.com/contest/1154) |
| **Problem** | [1154A — Restoring Three Numbers](https://codeforces.com/contest/1154/problem/A) |
| **Rating** | 800 |
| **Tags** | math |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Polycarp has guessed three positive integers `a`, `b` and `c`. He keeps these numbers in secret, but he writes down four numbers on a board in arbitrary order — their pairwise sums (three numbers) and sum of all three numbers (one number). So, there are four numbers on a board in random order: `a+b`, `a+c`, `b+c` and `a+b+c`.

You have to guess three numbers `a`, `b` and `c` using given numbers. Print three guessed integers in any order.

Pay attention that some given numbers `a`, `b` and `c` can be equal (it is also possible that `a=b=c`).

## Input

The only line of the input contains four positive integers `x_1, x_2, x_3, x_4` (`2 ≤ x_i ≤ 10^9`) — numbers written on a board in random order. It is guaranteed that the answer exists for the given number `x_1, x_2, x_3, x_4`.

## Output

Print such positive integers `a`, `b` and `c` that four numbers written on a board are values `a+b`, `a+c`, `b+c` and `a+b+c` written in some order. Print `a`, `b` and `c` in any order. If there are several answers, you can print any. It is guaranteed that the answer exists.

## Examples

**Example 1:**

```
3 6 5 4

```

**Output 1:**

```
2 1 3

```

**Example 2:**

```
40 40 40 60

```

**Output 2:**

```
20 20 20

```

**Example 3:**

```
201 101 101 200

```

**Output 3:**

```
1 100 100

```

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/1154/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

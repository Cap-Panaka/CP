# C. Stripes
 
| Field | Value |
|---|---|
| **Contest** | [1742](https://codeforces.com/contest/1742) |
| **Problem** | [1742C — Stripes](https://codeforces.com/contest/1742/problem/C) |
| **Rating** | 900 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 93 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

On an 8 × 8 grid, some horizontal rows have been painted red, and some vertical columns have been painted blue, in some order. The stripes are drawn sequentially, one after the other. When the stripe is drawn, it repaints all the cells through which it passes.

Determine which color was used last.

 ![](https://espresso.codeforces.com/e44018546a770848b159d608b884d02eee49e4d4.png) The red stripe was painted after the blue one, so the answer is `R`.

## Input

The first line of the input contains a single integer t (1 ≤ t ≤ 4000) — the number of test cases. The description of test cases follows. There is an empty line before each test case.

Each test case consists of 8 lines, each containing 8 characters. Each of these characters is either '`R`', '`B`', or '`.`', denoting a red square, a blue square, and an unpainted square, respectively.

It is guaranteed that the given field is obtained from a colorless one by drawing horizontal red rows and vertical blue columns.

At least one stripe is painted.

## Output

For each test case, output '`R`' if a red stripe was painted last, and '`B`' if a blue stripe was painted last (without quotes).

## Examples

**Example:**

```
4

....B...
....B...
....B...
RRRRRRRR
....B...
....B...
....B...
....B...

RRRRRRRB
B......B
B......B
B......B
B......B
B......B
B......B
RRRRRRRB

RRRRRRBB
.B.B..BB
RRRRRRBB
.B.B..BB
.B.B..BB
RRRRRRBB
.B.B..BB
.B.B..BB

........
........
........
RRRRRRRR
........
........
........
........
```

**Output:**

```
R
B
B
R

```

## Note

The first test case is pictured in the statement.

In the second test case, the first blue column is painted first, then the first and last red rows, and finally the last blue column. Since a blue stripe is painted last, the answer is `B`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1742/problem/C)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

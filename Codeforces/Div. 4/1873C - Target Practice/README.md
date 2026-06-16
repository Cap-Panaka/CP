# C. Target Practice
 
| Field | Value |
|---|---|
| **Contest** | [1873](https://codeforces.com/contest/1873) |
| **Problem** | [1873C — Target Practice](https://codeforces.com/contest/1873/problem/C) |
| **Rating** | 800 |
| **Tags** | implementation, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 61 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

A 10 × 10 target is made out of five "rings" as shown. Each ring has a different point value: the outermost ring — 1 point, the next ring — 2 points, ..., the center ring — 5 points.

 ![](https://espresso.codeforces.com/440826fc807f4a298e765d2288c50226f4ffa740.png) Vlad fired several arrows at the target. Help him determine how many points he got.

## Input

The input consists of multiple test cases. The first line of the input contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases.

Each test case consists of 10 lines, each containing 10 characters. Each character in the grid is either X (representing an arrow) or . (representing no arrow).

## Output

For each test case, output a single integer — the total number of points of the arrows.

## Examples

**Example:**

```
4
X.........
..........
.......X..
.....X....
......X...
..........
.........X
..X.......
..........
.........X
..........
..........
..........
..........
..........
..........
..........
..........
..........
..........
..........
..........
..........
..........
....X.....
..........
..........
..........
..........
..........
XXXXXXXXXX
XXXXXXXXXX
XXXXXXXXXX
XXXXXXXXXX
XXXXXXXXXX
XXXXXXXXXX
XXXXXXXXXX
XXXXXXXXXX
XXXXXXXXXX
XXXXXXXXXX
```

**Output:**

```
17
0
5
220

```

## Note

In the first test case, there are three arrows on the outer ring worth 1 point each, two arrows on the ring worth 3 points each, and two arrows on the ring worth 4 points each. The total score is 3 × 1 + 2 × 3 + 2 × 4 = 17. 

In the second test case, there aren't any arrows, so the score is 0.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1873/problem/C)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

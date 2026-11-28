# A. Vanya and Table
 
| Field | Value |
|---|---|
| **Contest** | [552](https://codeforces.com/contest/552) |
| **Problem** | [552A — Vanya and Table](https://codeforces.com/contest/552/problem/A) |
| **Rating** | 1000 |
| **Tags** | implementation, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Vanya has a table consisting of 100 rows, each row contains 100 cells. The rows are numbered by integers from 1 to 100 from bottom to top, the columns are numbered from 1 to 100 from left to right. 

In this table, Vanya chose *n* rectangles with sides that go along borders of squares (some rectangles probably occur multiple times). After that for each cell of the table he counted the number of rectangles it belongs to and wrote this number into it. Now he wants to find the sum of values in all cells of the table and as the table is too large, he asks you to help him find the result.

## Input

The first line contains integer *n* (1 ≤ *n* ≤ 100) — the number of rectangles.

Each of the following *n* lines contains four integers *x*_1, *y*_1, *x*_2, *y*_2 (1 ≤ *x*_1 ≤ *x*_2 ≤ 100, 1 ≤ *y*_1 ≤ *y*_2 ≤ 100), where *x*_1 and *y*_1 are the number of the column and row of the lower left cell and *x*_2 and *y*_2 are the number of the column and row of the upper right cell of a rectangle.

## Output

In a single line print the sum of all values in the cells of the table.

## Examples

**Example 1:**

```
2
1 1 2 3
2 2 3 3

```

**Output 1:**

```
10

```

**Example 2:**

```
2
1 1 3 3
1 1 3 3

```

**Output 2:**

```
18

```

## Note

Note to the first sample test:

Values of the table in the first three rows and columns will be as follows:

121

121

110

So, the sum of values will be equal to 10.

Note to the second sample test:

Values of the table in the first three rows and columns will be as follows:

222

222

222

So, the sum of values will be equal to 18.

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/552/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

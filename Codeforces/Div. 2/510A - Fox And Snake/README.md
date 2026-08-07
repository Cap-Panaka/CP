# A. Fox And Snake
 
| Field | Value |
|---|---|
| **Contest** | [510](https://codeforces.com/contest/510) |
| **Problem** | [510A — Fox And Snake](https://codeforces.com/contest/510/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 46 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Fox Ciel starts to learn programming. The first task is drawing a fox! However, that turns out to be too hard for a beginner, so she decides to draw a snake instead.

A snake is a pattern on a *n* by *m* table. Denote *c*-th cell of *r*-th row as (*r*, *c*). The tail of the snake is located at (1, 1), then it's body extends to (1, *m*), then goes down 2 rows to (3, *m*), then goes left to (3, 1) and so on.

Your task is to draw this snake for Fox Ciel: the empty cells should be represented as dot characters ('`.`') and the snake cells should be filled with number signs ('`#`').

Consider sample tests in order to understand the snake pattern.

## Input

The only line contains two integers: *n* and *m* (3 ≤ *n*, *m* ≤ 50). 

*n* is an **odd** number.

## Output

Output *n* lines. Each line should contain a string consisting of *m* characters. Do not output spaces.

## Examples

**Example 1:**

```
3 3

```

**Output 1:**

```
###
..#
###

```

**Example 2:**

```
3 4

```

**Output 2:**

```
####
...#
####

```

**Example 3:**

```
5 3

```

**Output 3:**

```
###
..#
###
#..
###

```

**Example 4:**

```
9 9

```

**Output 4:**

```
#########
........#
#########
#........
#########
........#
#########
#........
#########

```

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/510/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

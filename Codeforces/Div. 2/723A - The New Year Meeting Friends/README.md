# A. The New Year: Meeting Friends
 
| Field | Value |
|---|---|
| **Contest** | [723](https://codeforces.com/contest/723) |
| **Problem** | [723A — The New Year: Meeting Friends](https://codeforces.com/contest/723/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation, math, sortings |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 46 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

There are three friend living on the straight line *Ox* in Lineland. The first friend lives at the point *x*_1, the second friend lives at the point *x*_2, and the third friend lives at the point *x*_3. They plan to celebrate the New Year together, so they need to meet at one point. What is the minimum total distance they have to travel in order to meet at some point and celebrate the New Year?

It's guaranteed that the optimal answer is always integer.

## Input

The first line of the input contains three **distinct** integers *x*_1, *x*_2 and *x*_3 (1 ≤ *x*_1, *x*_2, *x*_3 ≤ 100) — the coordinates of the houses of the first, the second and the third friends respectively.

## Output

Print one integer — the minimum total distance the friends need to travel in order to meet together.

## Examples

**Example 1:**

```
7 1 4

```

**Output 1:**

```
6

```

**Example 2:**

```
30 20 10

```

**Output 2:**

```
20

```

## Note

In the first sample, friends should meet at the point 4. Thus, the first friend has to travel the distance of 3 (from the point 7 to the point 4), the second friend also has to travel the distance of 3 (from the point 1 to the point 4), while the third friend should not go anywhere because he lives at the point 4.

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/723/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

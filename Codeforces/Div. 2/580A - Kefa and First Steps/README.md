# A. Kefa and First Steps
 
| Field | Value |
|---|---|
| **Contest** | [580](https://codeforces.com/contest/580) |
| **Problem** | [580A — Kefa and First Steps](https://codeforces.com/contest/580/problem/A) |
| **Rating** | 900 |
| **Tags** | brute force, dp, implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 62 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Kefa decided to make some money doing business on the Internet for exactly *n* days. He knows that on the *i*-th day (1 ≤ *i* ≤ *n*) he makes *a*_*i* money. Kefa loves progress, that's why he wants to know the length of the maximum non-decreasing subsegment in sequence *a*_*i*. Let us remind you that the subsegment of the sequence is its continuous fragment. A subsegment of numbers is called non-decreasing if all numbers in it follow in the non-decreasing order.

Help Kefa cope with this task!

## Input

The first line contains integer *n* (1 ≤ *n* ≤ 10^5).

The second line contains *n* integers *a*_1,  *a*_2,  ...,  *a*_*n* (1 ≤ *a*_*i* ≤ 10^9).

## Output

Print a single integer — the length of the maximum non-decreasing subsegment of sequence *a*.

## Examples

**Example 1:**

```
6
2 2 1 3 4 1

```

**Output 1:**

```
3
```

**Example 2:**

```
3
2 2 9

```

**Output 2:**

```
3
```

## Note

In the first test the maximum non-decreasing subsegment is the numbers from the third to the fifth one.

In the second test the maximum non-decreasing subsegment is the numbers from the first to the third one.

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/580/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

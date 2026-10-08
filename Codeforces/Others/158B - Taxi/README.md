# B. Taxi
 
| Field | Value |
|---|---|
| **Contest** | [158](https://codeforces.com/contest/158) |
| **Problem** | [158B — Taxi](https://codeforces.com/contest/158/problem/B) |
| **Rating** | 1100 |
| **Tags** | *special, greedy, implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 92 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 3 seconds | 256 megabytes |

---

After the lessons *n* groups of schoolchildren went outside and decided to visit Polycarpus to celebrate his birthday. We know that the *i*-th group consists of *s*_*i* friends (1 ≤ *s*_*i* ≤ 4), and they want to go to Polycarpus together. They decided to get there by taxi. Each car can carry at most four passengers. What minimum number of cars will the children need if all members of each group should ride in the same taxi (but one taxi can take more than one group)?

## Input

The first line contains integer *n* (1 ≤ *n* ≤ 10^5) — the number of groups of schoolchildren. The second line contains a sequence of integers *s*_1, *s*_2, ..., *s*_*n* (1 ≤ *s*_*i* ≤ 4). The integers are separated by a space, *s*_*i* is the number of children in the *i*-th group.

## Output

Print the single number — the minimum number of taxis necessary to drive all children to Polycarpus.

## Examples

**Example 1:**

```
5
1 2 4 3 3

```

**Output 1:**

```
4

```

**Example 2:**

```
8
2 3 4 4 2 1 3 1

```

**Output 2:**

```
5

```

## Note

In the first test we can sort the children into four cars like this:

 - the third group (consisting of four children),
- the fourth group (consisting of three children),
- the fifth group (consisting of three children),
- the first and the second group (consisting of one and two children, correspondingly).

There are other ways to sort the groups into four cars.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/158/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

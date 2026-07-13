# A. Football
 
| Field | Value |
|---|---|
| **Contest** | [96](https://codeforces.com/contest/96) |
| **Problem** | [96A — Football](https://codeforces.com/contest/96/problem/A) |
| **Rating** | 900 |
| **Tags** | implementation, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 92 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Petya loves football very much. One day, as he was watching a football match, he was writing the players' current positions on a piece of paper. To simplify the situation he depicted it as a string consisting of zeroes and ones. A zero corresponds to players of one team; a one corresponds to players of another team. If there are at least 7 players of some team standing one after another, then the situation is considered dangerous. For example, the situation 00100110111111101 is dangerous and 11110111011101 is not. You are given the current situation. Determine whether it is dangerous or not.

## Input

The first input line contains a non-empty string consisting of characters "0" and "1", which represents players. The length of the string does not exceed 100 characters. There's at least one player from each team present on the field.

## Output

Print "YES" if the situation is dangerous. Otherwise, print "NO".

## Examples

**Example 1:**

```
001001

```

**Output 1:**

```
NO

```

**Example 2:**

```
1000000001

```

**Output 2:**

```
YES

```

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/96/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

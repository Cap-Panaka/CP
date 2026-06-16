# A. Magnets
 
| Field | Value |
|---|---|
| **Contest** | [344](https://codeforces.com/contest/344) |
| **Problem** | [344A — Magnets](https://codeforces.com/contest/344/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 124 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Mad scientist Mike entertains himself by arranging rows of dominoes. He doesn't need dominoes, though: he uses rectangular magnets instead. Each magnet has two poles, positive (a "plus") and negative (a "minus"). If two magnets are put together at a close distance, then the like poles will repel each other and the opposite poles will attract each other.

Mike starts by laying one magnet horizontally on the table. During each following step Mike adds one more magnet horizontally to the right end of the row. Depending on how Mike puts the magnet on the table, it is either attracted to the previous one (forming a group of multiple magnets linked together) or repelled by it (then Mike lays this magnet at some distance to the right from the previous one). We assume that a sole magnet not linked to others forms a group of its own.

 ![](https://espresso.codeforces.com/e92519e0975bb5b049acf707085aeb3fdda64d9f.png) Mike arranged multiple magnets in a row. Determine the number of groups that the magnets formed.

## Input

The first line of the input contains an integer *n* (1 ≤ *n* ≤ 100000) — the number of magnets. Then *n* lines follow. The *i*-th line (1 ≤ *i* ≤ *n*) contains either characters "`01`", if Mike put the *i*-th magnet in the "plus-minus" position, or characters "`10`", if Mike put the magnet in the "minus-plus" position.

## Output

On the single line of the output print the number of groups of magnets.

## Examples

**Example 1:**

```
6101010011010
```

**Output 1:**

```
3
```

**Example 2:**

```
401011010
```

**Output 2:**

```
2
```

## Note

The first testcase corresponds to the figure. The testcase has three groups consisting of three, one and two magnets.

The second testcase has two groups, each consisting of two magnets.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/344/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

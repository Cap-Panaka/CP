# A. Short Sort
 
| Field | Value |
|---|---|
| **Contest** | [1873](https://codeforces.com/contest/1873) |
| **Problem** | [1873A — Short Sort](https://codeforces.com/contest/1873/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

There are three cards with letters a, b, c placed in a row in some order. You can do the following operation **at most once**: 

 - Pick two cards, and swap them.

 Is it possible that the row becomes abc after the operation? Output "`YES`" if it is possible, and "`NO`" otherwise.

## Input

The first line contains a single integer t (1 ≤ t ≤ 6) — the number of test cases.

The only line of each test case contains a single string consisting of each of the three characters a, b, and c exactly once, representing the cards.

## Output

For each test case, output "`YES`" if you can make the row abc with at most one operation, or "`NO`" otherwise.

You can output the answer in any case (for example, the strings "`yEs`", "`yes`", "`Yes`" and "`YES`" will be recognized as a positive answer).

## Examples

**Example:**

```
6
abc
acb
bac
bca
cab
cba
```

**Output:**

```
YES
YES
YES
NO
NO
YES

```

## Note

In the first test case, we don't need to do any operations, since the row is already abc.

In the second test case, we can swap c and b: acb → abc.

In the third test case, we can swap b and a: bac → abc.

In the fourth test case, it is impossible to make abc using **at most one** operation.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1873/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

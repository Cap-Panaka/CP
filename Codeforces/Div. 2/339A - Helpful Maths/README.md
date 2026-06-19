# A. Helpful Maths
 
| Field | Value |
|---|---|
| **Contest** | [339](https://codeforces.com/contest/339) |
| **Problem** | [339A — Helpful Maths](https://codeforces.com/contest/339/problem/A) |
| **Rating** | 800 |
| **Tags** | greedy, implementation, sortings, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 92 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Xenia the beginner mathematician is a third year student at elementary school. She is now learning the addition operation.

The teacher has written down the sum of multiple numbers. Pupils should calculate the sum. To make the calculation easier, the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count, so she can calculate a sum only if the summands follow in non-decreasing order. For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.

You've got the sum that was written on the board. Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.

## Input

The first line contains a non-empty string *s* — the sum Xenia needs to count. String *s* contains no spaces. It only contains digits and characters "`+`". Besides, string *s* is a correct sum of numbers 1, 2 and 3. String *s* is at most 100 characters long.

## Output

Print the new sum that Xenia can count.

## Examples

**Example 1:**

```
3+2+1

```

**Output 1:**

```
1+2+3

```

**Example 2:**

```
1+1+3+1+3

```

**Output 2:**

```
1+1+1+3+3

```

**Example 3:**

```
2

```

**Output 3:**

```
2

```

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/339/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

# A. Design Tutorial: Learn from Math
 
| Field | Value |
|---|---|
| **Contest** | [472](https://codeforces.com/contest/472) |
| **Problem** | [472A — Design Tutorial: Learn from Math](https://codeforces.com/contest/472/problem/A) |
| **Rating** | 800 |
| **Tags** | math, number theory |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 46 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

One way to create a task is to learn from math. You can generate some random math statement or modify some theorems to get something new and build a new task from that.

For example, there is a statement called the "Goldbach's conjecture". It says: "each even number no less than four can be expressed as the sum of two primes". Let's modify it. How about a statement like that: "each integer no less than 12 can be expressed as the sum of two composite numbers." Not like the Goldbach's conjecture, I can prove this theorem.

You are given an integer *n* no less than 12, express it as a sum of two composite numbers.

## Input

The only line contains an integer *n* (12 ≤ *n* ≤ 10^6).

## Output

Output two composite integers *x* and *y* (1 < *x*, *y* < *n*) such that *x* + *y* = *n*. If there are multiple solutions, you can output any of them.

## Examples

**Example 1:**

```
12

```

**Output 1:**

```
4 8

```

**Example 2:**

```
15

```

**Output 2:**

```
6 9

```

**Example 3:**

```
23

```

**Output 3:**

```
8 15

```

**Example 4:**

```
1000000

```

**Output 4:**

```
500000 500000

```

## Note

In the first example, 12 = 4 + 8 and both 4, 8 are composite numbers. You can output "6 6" or "8 4" as well.

In the second example, 15 = 6 + 9. Note that you can't output "1 14" because 1 is not a composite number.

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/472/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

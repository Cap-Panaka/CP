# A. Raising Bacteria
 
| Field | Value |
|---|---|
| **Contest** | [579](https://codeforces.com/contest/579) |
| **Problem** | [579A — Raising Bacteria](https://codeforces.com/contest/579/problem/A) |
| **Rating** | 1000 |
| **Tags** | bitmasks |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are a lover of bacteria. You want to raise some bacteria in a box. 

Initially, the box is empty. Each morning, you can put any number of bacteria into the box. And each night, every bacterium in the box will split into two bacteria. You hope to see exactly *x* bacteria in the box at some moment. 

What is the minimum number of bacteria you need to put into the box across those days?

## Input

The only line containing one integer *x* (1 ≤ *x* ≤ 10^(9)).

## Output

The only line containing one integer: the answer.

## Examples

**Example 1:**

```
5
```

**Output 1:**

```
2
```

**Example 2:**

```
8
```

**Output 2:**

```
1
```

## Note

For the first sample, we can add one bacterium in the box in the first day morning and at the third morning there will be 4 bacteria in the box. Now we put one more resulting 5 in the box. We added 2 bacteria in the process so the answer is 2.

For the second sample, we can put one in the first morning and in the 4-th morning there will be 8 in the box. So the answer is 1.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/579/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

# A. Expression
 
| Field | Value |
|---|---|
| **Contest** | [479](https://codeforces.com/contest/479) |
| **Problem** | [479A — Expression](https://codeforces.com/contest/479/problem/A) |
| **Rating** | 1000 |
| **Tags** | brute force, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Petya studies in a school and he adores Maths. His class has been studying arithmetic expressions. On the last class the teacher wrote three positive integers *a*, *b*, *c* on the blackboard. The task was to insert signs of operations '`+`' and '`*`', and probably brackets between the numbers so that the value of the resulting expression is as large as possible. Let's consider an example: assume that the teacher wrote numbers 1, 2 and 3 on the blackboard. Here are some ways of placing signs and brackets:

 - 1+2*3=7
- 1*(2+3)=5
- 1*2*3=6
- (1+2)*3=9

Note that you can insert operation signs only between *a* and *b*, and between *b* and *c*, that is, you cannot swap integers. For instance, in the given sample you cannot get expression (1+3)*2.

It's easy to see that the maximum value that you can obtain is 9.

Your task is: given *a*, *b* and *c* print the maximum value that you can get.

## Input

The input contains three integers *a*, *b* and *c*, each on a single line (1 ≤ *a*, *b*, *c* ≤ 10).

## Output

Print the maximum value of the expression that you can obtain.

## Examples

**Example 1:**

```
123
```

**Output 1:**

```
9
```

**Example 2:**

```
2103
```

**Output 2:**

```
60
```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/479/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

# A. Wrong Subtraction
 
| Field | Value |
|---|---|
| **Contest** | [977](https://codeforces.com/contest/977) |
| **Problem** | [977A — Wrong Subtraction](https://codeforces.com/contest/977/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 31 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Little girl Tanya is learning how to decrease a number by one, but she does it wrong with a number consisting of two or more digits. Tanya subtracts one from a number by the following algorithm:

 - if the last digit of the number is non-zero, she decreases the number by one;
- if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).

You are given an integer number n. Tanya will subtract one from it k times. Your task is to print the result after all k subtractions.

It is guaranteed that the result will be positive integer number.

## Input

The first line of the input contains two integer numbers n and k (2 ≤ n ≤ 10^9, 1 ≤ k ≤ 50) — the number from which Tanya will subtract and the number of subtractions correspondingly.

## Output

Print one integer number — the result of the decreasing n by one k times.

It is guaranteed that the result will be positive integer number.

## Examples

**Example 1:**

```
512 4
```

**Output 1:**

```
50
```

**Example 2:**

```
1000000000 9
```

**Output 2:**

```
1
```

## Note

The first example corresponds to the following sequence: 512 arrow 511 arrow 510 arrow 51 arrow 50.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/977/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

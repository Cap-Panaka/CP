# B. Polycarp Training
 
| Field | Value |
|---|---|
| **Contest** | [1165](https://codeforces.com/contest/1165) |
| **Problem** | [1165B — Polycarp Training](https://codeforces.com/contest/1165/problem/B) |
| **Rating** | 1000 |
| **Tags** | data structures, greedy, sortings |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 280 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Polycarp wants to train before another programming competition. During the first day of his training he should solve exactly 1 problem, during the second day — exactly 2 problems, during the third day — exactly 3 problems, and so on. During the k-th day he should solve k problems.

Polycarp has a list of n contests, the i-th contest consists of a_i problems. During each day Polycarp has to choose **exactly one** of the contests he didn't solve yet and solve it. He solves **exactly k problems from this contest**. Other problems are discarded from it. If there are no contests consisting of at least k problems that Polycarp didn't solve yet during the k-th day, then Polycarp stops his training.

How many days Polycarp can train if he chooses the contests optimally?

## Input

The first line of the input contains one integer n (1 ≤ n ≤ 2 · 10^5) — the number of contests.

The second line of the input contains n integers a_1, a_2, …, a_n (1 ≤ a_i ≤ 2 · 10^5) — the number of problems in the i-th contest.

## Output

Print one integer — the maximum number of days Polycarp can train if he chooses the contests optimally.

## Examples

**Example 1:**

```
4
3 1 4 1

```

**Output 1:**

```
3

```

**Example 2:**

```
3
1 1 1

```

**Output 2:**

```
1

```

**Example 3:**

```
5
1 1 1 2 2

```

**Output 3:**

```
2

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1165/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

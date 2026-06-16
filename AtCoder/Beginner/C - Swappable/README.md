# C - Swappable

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [ABC206](https://atcoder.jp/contests/abc206) |
| **Problem** | [C - Swappable](https://atcoder.jp/contests/abc206/tasks/abc206_c) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ IOI-Style(GNU++20) (GCC 14.2.0) |
| **Runtime** | 28 ms |
| **Memory** | 13796 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/abc206/submissions/76493358) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

Given an array of  N  integers  A=(A_1,A_2,...,A_N) , find the number of pairs  (i,j)  of integers satisfying all of the following conditions:

- 1 ≤ i < j ≤ N

- A_i ≠ A_j

### Constraints

- All values in input are integers.

- 2 ≤ N ≤ 3 × 10^5

- 1 ≤ A_i ≤ 10^9

## Input

Input is given from Standard Input in the following format:

```
N
A_1 A_2 \dots A_N
```

## Output

Print the answer as an integer.

## Examples

**Sample Input 1:**

```
3
1 7 1
```

**Sample Output 1:**

```
2
```

**Sample Input 2:**

```
10
1 10 100 1000 10000 100000 1000000 10000000 100000000 1000000000
```

**Sample Output 2:**

```
45
```

**Sample Input 3:**

```
20
7 8 1 1 4 9 9 6 8 2 4 1 1 9 5 5 5 3 6 4
```

**Sample Output 3:**

```
173
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/abc206/tasks/abc206_c)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

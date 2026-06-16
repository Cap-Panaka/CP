# B - Multi Test Cases

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [ABC284](https://atcoder.jp/contests/abc284) |
| **Problem** | [B - Multi Test Cases](https://atcoder.jp/contests/abc284/tasks/abc284_b) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ 20 (gcc 12.2) |
| **Runtime** | 3 ms |
| **Memory** | 3532 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/abc284/submissions/70155226) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

In this problem, an input file contains multiple test cases.

You are first given an integer  T . Solve the following problem for  T  test cases.

- We have  N  positive integers  A_1, A_2, ..., A_N . How many of them are odd?

### Constraints

- 1 ≤ T ≤ 100

- 1 ≤ N ≤ 100

- 1 ≤ A_i ≤ 10^9

- All values in the input are integers.

## Input

The input is given from Standard Input in the following format, where  test_i  represents the  i -th test case:

```
T
\text{test}_1
\text{test}_2
\vdots
\text{test}_T
```

Each test case is in the following format:

```
N
A_1 A_2 \dots A_N
```

## Output

Print  T  lines. The  i -th line should contain the answer for the  i -th test case.

## Examples

**Sample Input:**

```
4
3
1 2 3
2
20 23
10
6 10 4 1 5 9 8 6 5 1
1
1000000000
```

**Sample Output:**

```
2
1
5
0
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/abc284/tasks/abc284_b)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

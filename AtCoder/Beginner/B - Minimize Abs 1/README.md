# B - Minimize Abs 1

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [ABC330](https://atcoder.jp/contests/abc330) |
| **Problem** | [B - Minimize Abs 1](https://atcoder.jp/contests/abc330/tasks/abc330_b) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ 20 (gcc 12.2) |
| **Runtime** | 60 ms |
| **Memory** | 4280 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/abc330/submissions/70169120) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

You are given an integer sequence  A=(A_1,A_2,…,A_N)  of length  N  and integers  L  and  R  such that  L≤ R .

For each  i=1,2,…,N , find the integer  X_i  that satisfies both of the following conditions. Note that the integer to be found is always uniquely determined.

- L≤ X_i ≤ R .

- For every integer  Y  such that  L ≤ Y ≤ R , it holds that  |X_i - A_i| ≤ |Y - A_i| .

### Constraints

- 1≤ N≤ 2× 10^5

- 1≤ L≤ R ≤ 10^9

- 1≤ A_i≤ 10^9

- All input values are integers.

## Input

The input is given from Standard Input in the following format:

```
N L R
A_1 \ldots A_N
```

## Output

Print  X_i  for  i=1,2,…,N , separated by spaces.

## Examples

**Sample Input 1:**

```
5 4 7
3 1 4 9 7
```

**Sample Output 1:**

```
4 4 4 7 7
```

**Sample Input 2:**

```
3 10 10
11 10 9
```

**Sample Output 2:**

```
10 10 10
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/abc330/tasks/abc330_b)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

# A - Sequence of Strings

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [ABC284](https://atcoder.jp/contests/abc284) |
| **Problem** | [A - Sequence of Strings](https://atcoder.jp/contests/abc284/tasks/abc284_a) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ 23 (gcc 12.2) |
| **Runtime** | 1 ms |
| **Memory** | 3596 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/abc284/submissions/70901922) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

You are given  N  strings  S_1,S_2,…,S_N  in this order.

Print  S_N,S_N-1,…,S_1  in this order.

### Constraints

- 1≤ N ≤ 10

- N  is an integer.

- S_i  is a string of length between  1  and  10 , inclusive, consisting of lowercase English letters, uppercase English letters, and digits.

## Input

The input is given from Standard Input in the following format:

```
N
S_1
S_2
\vdots
S_N
```

## Output

Print  N  lines.
The  i -th  (1≤ i ≤ N)  line should contain  S_N+1-i .

## Examples

**Sample Input 1:**

```
3
Takahashi
Aoki
Snuke
```

**Sample Output 1:**

```
Snuke
Aoki
Takahashi
```

**Sample Input 2:**

```
4
2023
Year
New
Happy
```

**Sample Output 2:**

```
Happy
New
Year
2023
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/abc284/tasks/abc284_a)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

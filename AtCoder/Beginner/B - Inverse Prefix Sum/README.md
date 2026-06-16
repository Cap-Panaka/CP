# B - Inverse Prefix Sum

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [ABC280](https://atcoder.jp/contests/abc280) |
| **Problem** | [B - Inverse Prefix Sum](https://atcoder.jp/contests/abc280/tasks/abc280_b) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ 20 (gcc 12.2) |
| **Runtime** | 1 ms |
| **Memory** | 3964 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/abc280/submissions/70176054) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

You are given an integer  N  and a sequence  S=(S_1,…,S_N)  of length  N .

Find a sequence  A=(A_1,…,A_N)  of length  N  that satisfies the following condition for all  k=1,…,N :

- A_1+A_2+…+A_k = S_k .

Such a sequence  A  always exists and is unique.

### Constraints

- 1 ≤ N ≤ 10

- -10^9≤ S_i ≤ 10^9

- All values in the input are integers.

## Input

The input is given from Standard Input in the following format:

```
N
S_1 \ldots S_N
```

## Output

Print the elements of a sequence  A=(A_1,…,A_N)  that satisfies all the conditions in order, separated by spaces.

## Examples

**Sample Input 1:**

```
3
3 4 8
```

**Sample Output 1:**

```
3 1 4
```

**Sample Input 2:**

```
10
314159265 358979323 846264338 -327950288 419716939 -937510582 97494459 230781640 628620899 -862803482
```

**Sample Output 2:**

```
314159265 44820058 487285015 -1174214626 747667227 -1357227521 1035005041 133287181 397839259 -1491424381
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/abc280/tasks/abc280_b)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

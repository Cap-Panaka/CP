# B - Who is missing

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [ABC236](https://atcoder.jp/contests/abc236) |
| **Problem** | [B - Who is missing](https://atcoder.jp/contests/abc236/tasks/abc236_b) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ 20 (gcc 12.2) |
| **Runtime** | 30 ms |
| **Memory** | 2116 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/abc236/submissions/70111758) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

We have  4  cards with an integer  1  written on it,  4  cards with  2 ,  … ,  4  cards with  N , for a total of  4N  cards.

Takahashi shuffled these cards, removed one of them, and gave you a pile of the remaining  4N-1  cards. The  i -th card  (1 ≤ i ≤ 4N - 1)  of the pile has an integer  A_i  written on it.

Find the integer written on the card removed by Takahashi.

### Constraints

- 1 ≤ N ≤ 10^5

- 1 ≤ A_i ≤ N (1 ≤ i ≤ 4N - 1)

- For each  k (1 ≤ k ≤ N) , there are at most  4  indices  i  such that  A_i = k .

- All values in input are integers.

## Input

Input is given from Standard Input in the following format:

```
N
A_1 A_2 \ldots A_{4N - 1}
```

## Output

Print the answer.

## Examples

**Sample Input 1:**

```
3
1 3 2 3 3 2 2 1 1 1 2
```

**Sample Output 1:**

```
3
```

**Sample Input 2:**

```
1
1 1 1
```

**Sample Output 2:**

```
1
```

**Sample Input 3:**

```
4
3 2 1 1 2 4 4 4 4 3 1 3 2 1 3
```

**Sample Output 3:**

```
2
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/abc236/tasks/abc236_b)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

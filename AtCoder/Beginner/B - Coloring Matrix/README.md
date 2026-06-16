# B - Coloring Matrix

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [ABC298](https://atcoder.jp/contests/abc298) |
| **Problem** | [B - Coloring Matrix](https://atcoder.jp/contests/abc298/tasks/abc298_b) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ 20 (gcc 12.2) |
| **Runtime** | 8 ms |
| **Memory** | 3776 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/abc298/submissions/70370695) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

You are given  N -by- N  matrices  A  and  B  where each element is  0  or  1 .

Let  A_i,j  and  B_i,j  denote the element at the  i -th row and  j -th column of  A  and  B , respectively.

Determine whether it is possible to rotate  A  so that  B_i,j = 1  for every pair of integers  (i, j)  such that  A_i,j = 1 .

Here, to rotate  A  is to perform the following operation zero or more times:

- for every pair of integers  (i, j)  such that  1 ≤ i, j ≤ N , simultaneously replace  A_i,j  with  A_N + 1 - j,i .

### Constraints

- 1 ≤ N ≤ 100

- Each element of  A  and  B  is  0  or  1 .

- All values in the input are integers.

## Input

The input is given from Standard Input in the following format:

```
N
A_{1,1} A_{1,2} \ldots A_{1,N}
\vdots
A_{N,1} A_{N,2} \ldots A_{N,N}
B_{1,1} B_{1,2} \ldots B_{1,N}
\vdots
B_{N,1} B_{N,2} \ldots B_{N,N}
```

## Output

If it is possible to rotate  A  so that  B_i,j = 1  for every pair of integers  (i, j)  such that  A_i,j = 1 , print `Yes`; otherwise, print `No`.

## Examples

**Sample Input 1:**

```
3
0 1 1
1 0 0
0 1 0
1 1 0
0 0 1
1 1 1
```

**Sample Output 1:**

```
Yes
```

**Sample Input 2:**

```
2
0 0
0 0
1 1
1 1
```

**Sample Output 2:**

```
Yes
```

**Sample Input 3:**

```
5
0 0 1 1 0
1 0 0 1 0
0 0 1 0 1
0 1 0 1 0
0 1 0 0 1
1 1 0 0 1
0 1 1 1 0
0 0 1 1 1
1 0 1 0 1
1 1 0 1 0
```

**Sample Output 3:**

```
No
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/abc298/tasks/abc298_b)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

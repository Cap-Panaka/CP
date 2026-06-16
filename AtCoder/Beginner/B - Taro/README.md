# B - Taro

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [ABC371](https://atcoder.jp/contests/abc371) |
| **Problem** | [B - Taro](https://atcoder.jp/contests/abc371/tasks/abc371_b) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ 23 (gcc 12.2) |
| **Runtime** | 1 ms |
| **Memory** | 3676 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/abc371/submissions/70901638) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

In the Kingdom of AtCoder, the eldest son is always given the name Taro. No one else is given the name Taro.
The eldest son is the earliest born male child in each family.

There are  N  families in the Kingdom, and  M  babies were born.  Before the  M  babies were born, none of the  N  families had had any babies.

Information about the babies is given in chronological order of their birth.

The  i -th baby born was born in family  A_i , and the baby is male if  B_i  is `M`, and female if it is `F`.

Determine for each of the  M  babies whether the name given is Taro.

### Constraints

- 1≤ N,M≤ 100

- 1≤ A_i≤ N

- B_i  is `M` or `F`.

- All numbers in the input are integers.

## Input

The input is given from Standard Input in the following format:

```
N M
A_1 B_1
\vdots
A_M B_M
```

## Output

Print  M  lines.

The  i -th line  (1≤ i ≤ M)  should contain `Yes` if the name given to the  i -th baby is Taro, and `No` otherwise.

## Examples

**Sample Input 1:**

```
2 4
1 M
1 M
2 F
2 M
```

**Sample Output 1:**

```
Yes
No
No
Yes
```

**Sample Input 2:**

```
4 7
2 M
3 M
1 F
4 F
4 F
1 F
2 M
```

**Sample Output 2:**

```
Yes
Yes
No
No
No
No
No
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/abc371/tasks/abc371_b)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

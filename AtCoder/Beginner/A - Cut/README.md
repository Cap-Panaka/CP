# A - Cut

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [ABC368](https://atcoder.jp/contests/abc368) |
| **Problem** | [A - Cut](https://atcoder.jp/contests/abc368/tasks/abc368_a) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ 20 (gcc 12.2) |
| **Runtime** | 1 ms |
| **Memory** | 3584 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/abc368/submissions/70155972) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

There is a stack of  N  cards, and the  i -th card from the top has an integer  A_i  written on it.

You take  K  cards from the bottom of the stack and place them on top of the stack, maintaining their order.

Print the integers written on the cards from top to bottom after the operation.

### Constraints

- 1 ≤ K < N ≤ 100

- 1 ≤ A_i ≤ 100

- All input values are integers.

## Input

The input is given from Standard Input in the following format:

```
N K
A_1 A_2 \ldots A_N
```

## Output

Let  B_i  be the integer written on the  i -th card from the top of the stack after the operation. Print  B_1,B_2,…,B_N  in this order, separated by spaces.

## Examples

**Sample Input 1:**

```
5 3
1 2 3 4 5
```

**Sample Output 1:**

```
3 4 5 1 2
```

**Sample Input 2:**

```
6 2
1 2 1 2 1 2
```

**Sample Output 2:**

```
1 2 1 2 1 2
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/abc368/tasks/abc368_a)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

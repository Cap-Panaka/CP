# B - Glass and Mug

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [ABC332](https://atcoder.jp/contests/abc332) |
| **Problem** | [B - Glass and Mug](https://atcoder.jp/contests/abc332/tasks/abc332_b) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ 20 (gcc 12.2) |
| **Runtime** | 0 ms |
| **Memory** | 1728 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/abc332/submissions/69982582) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

AtCoder Inc. sells [glasses](https://suzuri.jp/AtCoder/5510290/water-glass/m/clear) and [mugs](https://suzuri.jp/AtCoder/5510290/mug/m/white).

Takahashi has a glass with a capacity of  G  milliliters and a mug with a capacity of  M  milliliters.

Here,  G<M .

Initially, both the glass and the mug are empty.

After performing the following operation  K  times, determine how many milliliters of water are in the glass and the mug, respectively.

- When the glass is filled with water, that is, the glass contains exactly  G  milliliters of water, discard all the water from the glass.

- Otherwise, if the mug is empty, fill the mug with water.

- Otherwise, transfer water from the mug to the glass until the mug is empty or the glass is filled with water.

### Constraints

- 1≤ K≤ 100

- 1≤ G<M≤ 1000

- G ,  M , and  K  are integers.

## Input

The input is given from Standard Input in the following format:

```
K G M
```

## Output

Print the amounts, in milliliters, of water in the glass and the mug, in this order, separated by a space, after performing the operation  K  times.

## Examples

**Sample Input 1:**

```
5 300 500
```

**Sample Output 1:**

```
200 500
```

**Sample Input 2:**

```
5 100 200
```

**Sample Output 2:**

```
0 0
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/abc332/tasks/abc332_b)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

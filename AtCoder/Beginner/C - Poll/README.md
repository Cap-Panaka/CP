# C - Poll

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [ABC155](https://atcoder.jp/contests/abc155) |
| **Problem** | [C - Poll](https://atcoder.jp/contests/abc155/tasks/abc155_c) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ 23 (gcc 12.2) |
| **Runtime** | 394 ms |
| **Memory** | 27184 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/abc155/submissions/71039076) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

We have  N  voting papers. The  i -th vote  (1 ≤ i ≤ N)  has the string  S_i  written on it.

Print all strings that are written on the most number of votes, in lexicographical order.

### Constraints

- 1 ≤ N ≤ 2 × 10^5

- S_i   (1 ≤ i ≤ N)  are strings consisting of lowercase English letters.

- The length of  S_i   (1 ≤ i ≤ N)  is between  1  and  10  (inclusive).

## Input

Input is given from Standard Input in the following format:

```
N
S_1
:
S_N
```

## Output

Print all strings in question in lexicographical order.

## Examples

**Sample Input 1:**

```
7
beat
vet
beet
bed
vet
bet
beet
```

**Sample Output 1:**

```
beet
vet
```

**Sample Input 2:**

```
8
buffalo
buffalo
buffalo
buffalo
buffalo
buffalo
buffalo
buffalo
```

**Sample Output 2:**

```
buffalo
```

**Sample Input 3:**

```
7
bass
bass
kick
kick
bass
kick
kick
```

**Sample Output 3:**

```
kick
```

**Sample Input 4:**

```
4
ushi
tapu
nichia
kun
```

**Sample Output 4:**

```
kun
nichia
tapu
ushi
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/abc155/tasks/abc155_c)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

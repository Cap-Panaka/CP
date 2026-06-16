# A. Presents
 
| Field | Value |
|---|---|
| **Contest** | [136](https://codeforces.com/contest/136) |
| **Problem** | [136A — Presents](https://codeforces.com/contest/136/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 124 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Little Petya very much likes gifts. Recently he has received a new laptop as a New Year gift from his mother. He immediately decided to give it to somebody else as what can be more pleasant than giving somebody gifts. And on this occasion he organized a New Year party at his place and invited *n* his friends there.

If there's one thing Petya likes more that receiving gifts, that's watching others giving gifts to somebody else. Thus, he safely hid the laptop until the next New Year and made up his mind to watch his friends exchanging gifts while he does not participate in the process. He numbered all his friends with integers from 1 to *n*. Petya remembered that a friend number *i* gave a gift to a friend number *p*_(*i*). He also remembered that each of his friends received exactly one gift.

Now Petya wants to know for each friend *i* the number of a friend who has given him a gift.

## Input

The first line contains one integer *n* (1 ≤ *n* ≤ 100) — the quantity of friends Petya invited to the party. The second line contains *n* space-separated integers: the *i*-th number is *p*_(*i*) — the number of a friend who gave a gift to friend number *i*. It is guaranteed that each friend received exactly one gift. It is possible that some friends do not share Petya's ideas of giving gifts to somebody else. Those friends gave the gifts to themselves.

## Output

Print *n* space-separated integers: the *i*-th number should equal the number of the friend who gave a gift to friend number *i*.

## Examples

**Example 1:**

```
42 3 4 1
```

**Output 1:**

```
4 1 2 3
```

**Example 2:**

```
31 3 2
```

**Output 2:**

```
1 3 2
```

**Example 3:**

```
21 2
```

**Output 3:**

```
1 2
```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/136/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

# B. Normal Problem
 
| Field | Value |
|---|---|
| **Contest** | [2044](https://codeforces.com/contest/2044) |
| **Problem** | [2044B — Normal Problem](https://codeforces.com/contest/2044/problem/B) |
| **Rating** | 800 |
| **Tags** | implementation, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

A string consisting of only characters 'p', 'q', and 'w' is painted on a glass window of a store. Ship walks past the store, standing directly in front of the glass window, and observes string a. Ship then heads inside the store, looks directly at the same glass window, and observes string b.

Ship gives you string a. Your job is to find and output b.

## Input

The first line contains an integer t (1 ≤ t ≤ 100) — the number of test cases.

The only line of each test case contains a string a (1 ≤ |a| ≤ 100) — the string Ship observes from outside the store. It is guaranteed that a only contains characters 'p', 'q', and 'w'.

## Output

For each test case, output string b, the string Ship observes from inside the store, on a new line.

## Examples

**Example:**

```
5
qwq
ppppp
pppwwwqqq
wqpqwpqwwqp
pqpqpqpq
```

**Output:**

```
pwp
qqqqq
pppwwwqqq
qpwwpqwpqpw
pqpqpqpq

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2044/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

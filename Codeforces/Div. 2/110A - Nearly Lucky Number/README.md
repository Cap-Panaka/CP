# A. Nearly Lucky Number
 
| Field | Value |
|---|---|
| **Contest** | [110](https://codeforces.com/contest/110) |
| **Problem** | [110A — Nearly Lucky Number](https://codeforces.com/contest/110/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits **4** and **7**. For example, numbers **47**, **744**, **4** are lucky and **5**, **17**, **467** are not.

Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number *n* is a nearly lucky number.

## Input

The only line contains an integer *n* (1 ≤ *n* ≤ 10^(18)).

Please do not use the %lld specificator to read or write 64-bit numbers in С++. It is preferred to use the cin, cout streams or the %I64d specificator.

## Output

Print on the single line "`YES`" if *n* is a nearly lucky number. Otherwise, print "`NO`" (without the quotes).

## Examples

**Example 1:**

```
40047
```

**Output 1:**

```
NO
```

**Example 2:**

```
7747774
```

**Output 2:**

```
YES
```

**Example 3:**

```
1000000000000000000
```

**Output 3:**

```
NO
```

## Note

In the first sample there are 3 lucky digits (first one and last two), so the answer is "`NO`".

In the second sample there are 7 lucky digits, 7 is lucky number, so the answer is "`YES`".

In the third sample there are no lucky digits, so the answer is "`NO`".

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/110/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

# A1. Balanced Shuffle (Easy)
 
| Field | Value |
|---|---|
| **Contest** | [1970](https://codeforces.com/contest/1970) |
| **Problem** | [1970A1 — Balanced Shuffle (Easy)](https://codeforces.com/contest/1970/problem/A1) |
| **Rating** | 1000 |
| **Tags** | implementation, sortings |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 156 ms |
| **Memory** | 6000 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

A *parentheses sequence* is a string consisting of characters "`(`" and "`)`", for example "`(()((`".

A *balanced parentheses sequence* is a parentheses sequence which can become a valid mathematical expression after inserting numbers and operations into it, for example "`(()(()))`".

The *balance* of a parentheses sequence is defined as the number of opening parentheses "`(`" minus the number of closing parentheses "`)`". For example, the balance of the sequence "`(()((`" is 3.

A balanced parentheses sequence can also be defined as a parentheses sequence with balance 0 such that each of its prefixes has a non-negative balance.

We define the *balanced shuffle* operation that takes a parentheses sequence and returns a parentheses sequence as follows: first, for every character of the input sequence, we compute the balance of the prefix of the sequence *before* that character and write those down in a table together with the positions of the characters in the input sequence, for example:

Prefix balance01212321Position12345678Character`(``(``)``(``(``)``)``)`

Then, we sort the columns of this table in *increasing* order of prefix balance, breaking ties in *decreasing* order of position. In the above example, we get:

Prefix balance01112223Position18427536Character`(``)``(``(``)``(``)``)`

The last row of this table forms another parentheses sequence, in this case "`()(()())`". This sequence is called the result of applying the balanced shuffle operation to the input sequence, or in short just the balanced shuffle of the input sequence.

You are given a balanced parentheses sequence. Print its balanced shuffle.

## Input

The only line of input contains a string s consisting only of characters "`(`" and "`)`". This string is guaranteed to be a non-empty balanced parentheses sequence with its length not exceeding 500 000.

## Output

Print the parentheses sequence t — the balanced shuffle of s.

## Examples

**Example:**

```
(()(()))

```

**Output:**

```
()(()())

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1970/problem/A1)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

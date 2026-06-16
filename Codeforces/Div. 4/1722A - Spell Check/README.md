# A. Spell Check
 
| Field | Value |
|---|---|
| **Contest** | [1722](https://codeforces.com/contest/1722) |
| **Problem** | [1722A — Spell Check](https://codeforces.com/contest/1722/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 15 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Timur likes his name. As a spelling of his name, he allows any permutation of the letters of the name. For example, the following strings are valid spellings of his name: `Timur`, `miurT`, `Trumi`, `mriTu`. Note that the correct spelling must have uppercased `T` and lowercased other letters.

Today he wrote string s of length n consisting only of uppercase or lowercase Latin letters. He asks you to check if s is the correct spelling of his name.

## Input

The first line of the input contains an integer t (1 ≤ t ≤ 10^3) — the number of test cases.

The first line of each test case contains an integer n (1 ≤ n ≤ 10) — the length of string s.

The second line of each test case contains a string s consisting of only uppercase or lowercase Latin characters.

## Output

For each test case, output "`YES`" (without quotes) if s satisfies the condition, and "`NO`" (without quotes) otherwise.

You can output the answer in any case (for example, the strings "`yEs`", "`yes`", "`Yes`" and "`YES`" will be recognized as a positive answer).

## Examples

**Example:**

```
10
5
Timur
5
miurT
5
Trumi
5
mriTu
5
timur
4
Timr
6
Timuur
10
codeforces
10
TimurTimur
5
TIMUR
```

**Output:**

```
YES
YES
YES
YES
NO
NO
NO
NO
NO
NO

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1722/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

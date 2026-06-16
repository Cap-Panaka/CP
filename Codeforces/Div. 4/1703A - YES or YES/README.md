# A. YES or YES?
 
| Field | Value |
|---|---|
| **Contest** | [1703](https://codeforces.com/contest/1703) |
| **Problem** | [1703A — YES or YES?](https://codeforces.com/contest/1703/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, implementation, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

There is a string s of length 3, consisting of uppercase and lowercase English letters. Check if it is equal to "`YES`" (without quotes), where each letter can be in any case. For example, "`yES`", "`Yes`", "`yes`" are all allowable.

## Input

The first line of the input contains an integer t (1 ≤ t ≤ 10^3) — the number of testcases.

The description of each test consists of one line containing one string s consisting of three characters. Each character of s is either an uppercase or lowercase English letter.

## Output

For each test case, output "`YES`" (without quotes) if s satisfies the condition, and "`NO`" (without quotes) otherwise.

You can output "`YES`" and "`NO`" in any case (for example, strings "`yES`", "`yes`" and "`Yes`" will be recognized as a positive response).

## Examples

**Example:**

```
10
YES
yES
yes
Yes
YeS
Noo
orZ
yEz
Yas
XES
```

**Output:**

```
YES
YES
YES
YES
YES
NO
NO
NO
NO
NO

```

## Note

The first five test cases contain the strings "`YES`", "`yES`", "`yes`", "`Yes`", "`YeS`". All of these are equal to "`YES`", where each character is either uppercase or lowercase.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1703/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

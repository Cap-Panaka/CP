# A. Square String?
 
| Field | Value |
|---|---|
| **Contest** | [1619](https://codeforces.com/contest/1619) |
| **Problem** | [1619A — Square String?](https://codeforces.com/contest/1619/problem/A) |
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

A string is called *square* if it is some string written twice in a row. For example, the strings "`aa`", "`abcabc`", "`abab`" and "`baabaa`" are square. But the strings "`aaa`", "`abaaab`" and "`abcdabc`" are not square.

For a given string s determine if it is square.

## Input

The first line of input data contains an integer t (1 ≤ t ≤ 100) —the number of test cases.

This is followed by t lines, each containing a description of one test case. The given strings consist only of lowercase Latin letters and have lengths between 1 and 100 inclusive.

## Output

For each test case, output on a separate line:

 - `YES` if the string in the corresponding test case is square,
- `NO` otherwise.

You can output `YES` and `NO` in any case (for example, strings `yEs`, `yes`, `Yes` and `YES` will be recognized as a positive response).

## Examples

**Example:**

```
10
a
aa
aaa
aaaa
abab
abcabc
abacaba
xxyy
xyyx
xyxy

```

**Output:**

```
NO
YES
NO
YES
YES
YES
NO
NO
NO
YES

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1619/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

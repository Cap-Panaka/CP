# A. To My Critics
 
| Field | Value |
|---|---|
| **Contest** | [1850](https://codeforces.com/contest/1850) |
| **Problem** | [1850A — To My Critics](https://codeforces.com/contest/1850/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation, sortings |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 31 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Suneet has three digits a, b, and c. 

Since math isn't his strongest point, he asks you to determine if you can choose any two digits to make a sum greater or equal to 10.

Output "`YES`" if there is such a pair, and "`NO`" otherwise.

## Input

The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases.

The only line of each test case contains three digits a, b, c (0 ≤ a, b, c ≤ 9).

## Output

For each test case, output "`YES`" if such a pair exists, and "`NO`" otherwise.

You can output the answer in any case (for example, the strings "`yEs`", "`yes`", "`Yes`" and "`YES`" will be recognized as a positive answer).

## Examples

**Example:**

```
5
8 1 2
4 4 5
9 9 9
0 0 0
8 5 3
```

**Output:**

```
YES
NO
YES
NO
YES

```

## Note

For the first test case, by choosing the digits 8 and 2 we can obtain a sum of 8 + 2 = 10 which satisfies the condition, thus the output should be "`YES`".

For the second test case, any combination of chosen digits won't be at least 10, thus the output should be "`NO`" (note that we can not choose the digit on the same position twice).

For the third test case, any combination of chosen digits will have a sum equal to 18, thus the output should be "`YES`".

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1850/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

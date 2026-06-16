# B. Party Monster
 
| Field | Value |
|---|---|
| **Contest** | [2227](https://codeforces.com/contest/2227) |
| **Problem** | [2227B — Party Monster](https://codeforces.com/contest/2227/problem/B) |
| **Rating** | 800 |
| **Tags** | greedy |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Yousef has given you a sequence s of length n consisting only of characters '(' and ')'. You are allowed to perform the following operation **at most once**: 

 - Choose a substring^∗ of s and remove it. Then, you may reinsert the removed characters back into the remaining string one by one. Each character can be placed at any arbitrary position, independently of the others.

Yousef wants you to determine whether it is possible to obtain a regular bracket sequence^† after performing the operation at most once.

^∗A *substring* is a contiguous subsegment of a string. For example, `"acab"` is a substring of `"abacaba"` (it starts in position 3 and ends in position 6), but `"aa"` or `"d"` aren't substrings of this string. So the substring of the string s from position l to position r is s[l, r]= s_l s_l+1 … s_r.

^†A *regular bracket sequence* is a bracket sequence that can be transformed into a correct arithmetic expression by inserting the characters 1 and + between the original characters of the sequence. For example:

 - bracket sequences ()() and (()) are regular (the resulting expressions are: (1)+(1) and ((1+1)+1));
- bracket sequences )(, ( and ) are not.

## Input

The first line contains an integer t (1 ≤ t ≤ 10^4) — the number of test cases. The descriptions of the test cases follow.

The first line of each test case contains a single integer n (1 ≤ n ≤ 2 · 10^5) — the length of the string s.

The second line of each test case contains a sequence s of length n consisting only of characters '(' and ')'.

It is guaranteed that the sum of n over all test cases does not exceed 2 · 10^5.

## Output

For each test case, output "`YES`" if the sequence can be made regular, and "`NO`" otherwise.

You can output the answer in any case (upper or lower). For example, the strings "`yEs`", "`yes`", "`Yes`", and "`YES`" will be recognized as positive responses.

## Examples

**Example:**

```
6
2
()
2
)(
3
(((
6
())(()
4
(()(
5
)()()
```

**Output:**

```
YES
YES
NO
YES
NO
NO
```

## Note

In the first test case, the string s is already a regular bracket sequence, therefore the answer is "`YES`".

In the second test case, we can remove the substring s[2, 2] = ( and reinsert it at the beginning of the string, making s = (), therefore the answer is "`YES`".

In the third test case, there is no way to do the operation and get a regular bracket sequence, so the answer is "`NO`".

In the fourth test case, we can choose the substring s[3, 4] = )(, remove it, then reinsert the characters as follows:

()colorred)(() → ()() → colorgreen(()()colorgreen)

Therefore we have made a regular bracket sequence, and the answer is "`YES`".

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2227/problem/B)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

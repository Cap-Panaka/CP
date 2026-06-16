# A. Marathon
 
| Field | Value |
|---|---|
| **Contest** | [1692](https://codeforces.com/contest/1692) |
| **Problem** | [1692A — Marathon](https://codeforces.com/contest/1692/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 62 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

You are given four **distinct** integers a, b, c, d. 

Timur and three other people are running a marathon. The value a is the distance that Timur has run and b, c, d correspond to the distances the other three participants ran. 

Output the number of participants in front of Timur.

## Input

The first line contains a single integer t (1 ≤ t ≤ 10^4) — the number of test cases.

The description of each test case consists of four **distinct** integers a, b, c, d (0 ≤ a, b, c, d ≤ 10^4).

## Output

For each test case, output a single integer — the number of participants in front of Timur.

## Examples

**Example:**

```
4
2 3 4 1
10000 0 1 2
500 600 400 300
0 9999 10000 9998
```

**Output:**

```
2
0
1
3

```

## Note

For the first test case, there are 2 people in front of Timur, specifically the participants who ran distances of 3 and 4. The other participant is not in front of Timur because he ran a shorter distance than Timur.

For the second test case, no one is in front of Timur, since he ran a distance of 10000 while all others ran a distance of 0, 1, and 2 respectively.

For the third test case, only the second person is in front of Timur, who ran a total distance of 600 while Timur ran a distance of 500.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/1692/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

# A. Shizuku Hoshikawa and Farm Legs
 
| Field | Value |
|---|---|
| **Contest** | [2171](https://codeforces.com/contest/2171) |
| **Problem** | [2171A — Shizuku Hoshikawa and Farm Legs](https://codeforces.com/contest/2171/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

*Nothing's ever been the same since... that summer with her.*— Shizuku Hoshikawa*Kaori wants to spend the day with Shizuku! However, the zoo is closed, so they are visiting Farmer John's farm instead.*

At Farmer John's farm, Shizuku counts n legs. It is known that only chickens and cows live on the farm; a chicken has 2 legs, while a cow has 4.

Count how many different configurations of Farmer John's farm are possible. Two configurations are considered different if they contain either a different number of chickens, a different number of cows, or both.

Note that Farmer John's farm may contain zero chickens or zero cows.

## Input

The first line contains a single integer t (1 ≤ t ≤ 100)  — the number of test cases.

The only line of each test case contains a single integer n (1≤ n ≤ 100).

## Output

For each test case, output a single integer, the number of different configurations of Farmer John's farm that are possible.

## Examples

**Example:**

```
5
2
3
4
6
100
```

**Output:**

```
1
0
2
2
26
```

## Note

For n=4, there are two possible configurations of Farmer John's farm: 

 - he can have two chickens and zero cows, or
- he can have zero chickens and one cow.

 It can be shown that these are the only possible configurations of Farmer John's farm.For n=3, it can be shown that there are no possible configurations of Farmer John's farm.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2171/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

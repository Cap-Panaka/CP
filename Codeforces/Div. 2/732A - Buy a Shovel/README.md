# A. Buy a Shovel
 
| Field | Value |
|---|---|
| **Contest** | [732](https://codeforces.com/contest/732) |
| **Problem** | [732A — Buy a Shovel](https://codeforces.com/contest/732/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, constructive algorithms, implementation, math |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Polycarp urgently needs a shovel! He comes to the shop and chooses an appropriate one. The shovel that Policarp chooses is sold for *k* burles. Assume that there is an unlimited number of such shovels in the shop.

In his pocket Polycarp has an unlimited number of "10-burle coins" and exactly one coin of *r* burles (1 ≤ *r* ≤ 9).

What is the minimum number of shovels Polycarp has to buy so that he can pay for the purchase without any change? It is obvious that he can pay for 10 shovels without any change (by paying the requied amount of 10-burle coins and not using the coin of *r* burles). But perhaps he can buy fewer shovels and pay without any change. Note that Polycarp should buy at least one shovel.

## Input

The single line of input contains two integers *k* and *r* (1 ≤ *k* ≤ 1000, 1 ≤ *r* ≤ 9) — the price of one shovel and the denomination of the coin in Polycarp's pocket that is different from "10-burle coins". 

Remember that he has an unlimited number of coins in the denomination of 10, that is, Polycarp has enough money to buy any number of shovels.

## Output

Print the required minimum number of shovels Polycarp has to buy so that he can pay for them without any change.

## Examples

**Example 1:**

```
117 3

```

**Output 1:**

```
9

```

**Example 2:**

```
237 7

```

**Output 2:**

```
1

```

**Example 3:**

```
15 2

```

**Output 3:**

```
2

```

## Note

In the first example Polycarp can buy 9 shovels and pay 9·117 = 1053 burles. Indeed, he can pay this sum by using 10-burle coins and one 3-burle coin. He can't buy fewer shovels without any change.

In the second example it is enough for Polycarp to buy one shovel.

In the third example Polycarp should buy two shovels and pay 2·15 = 30 burles. It is obvious that he can pay this sum without any change.

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/732/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

# A. Bear and Big Brother
 
| Field | Value |
|---|---|
| **Contest** | [791](https://codeforces.com/contest/791) |
| **Problem** | [791A — Bear and Big Brother](https://codeforces.com/contest/791/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 46 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Bear Limak wants to become the largest of bears, or at least to become larger than his brother Bob.

Right now, Limak and Bob weigh *a* and *b* respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.

Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.

After how many full years will Limak become strictly larger (strictly heavier) than Bob?

## Input

The only line of the input contains two integers *a* and *b* (1 ≤ *a* ≤ *b* ≤ 10) — the weight of Limak and the weight of Bob respectively.

## Output

Print one integer, denoting the integer number of years after which Limak will become strictly larger than Bob.

## Examples

**Example 1:**

```
4 7
```

**Output 1:**

```
2
```

**Example 2:**

```
4 9
```

**Output 2:**

```
3
```

**Example 3:**

```
1 1
```

**Output 3:**

```
1
```

## Note

In the first sample, Limak weighs 4 and Bob weighs 7 initially. After one year their weights are 4·3 = 12 and 7·2 = 14 respectively (one weight is tripled while the other one is doubled). Limak isn't larger than Bob yet. After the second year weights are 36 and 28, so the first weight is greater than the second one. Limak became larger than Bob after two years so you should print 2.

In the second sample, Limak's and Bob's weights in next years are: 12 and 18, then 36 and 36, and finally 108 and 72 (after three years). The answer is 3. Remember that Limak wants to be larger than Bob and he won't be satisfied with equal weights.

In the third sample, Limak becomes larger than Bob after the first year. Their weights will be 3 and 2 then.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/791/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

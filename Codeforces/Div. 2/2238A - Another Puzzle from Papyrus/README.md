# A. Another Puzzle from Papyrus
 
| Field | Value |
|---|---|
| **Contest** | [2238](https://codeforces.com/contest/2238) |
| **Problem** | [2238A — Another Puzzle from Papyrus](https://codeforces.com/contest/2238/problem/A) |
| **Rating** | 800 |
| **Tags** | greedy, math, sortings |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 46 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

*You are filled with determination.*— UndertalePapyrus came up with another puzzle for Frisk to solve. Papyrus brought two arrays `a` and `b` of length `n` and allowed the following two operations to be performed:

 - choose any index `i` (`1 ≤ i ≤ n`) and change `a_i` to `a_i - 1`. The execution time of such an operation is `1` second.
- reorder all elements of array `a` in any way. The execution time of such an operation is `c` seconds.

You need to convert array `a` into array `b`.

Frisk wants to solve the puzzle as soon as possible. Help Frisk determine the minimum time needed to solve the puzzle. If there is no solution, output `-1`.

## Input

Each test contains multiple test cases. The first line contains the number of test cases `t` (`1 ≤ t ≤ 500`). The description of the test cases follows.

The first line of each test case contains two integers `n` and `c` (`1 ≤ n, c ≤ 100`) — the length of arrays `a` and `b` and the cost of the second operation.

The second line of each test case contains `n` integers `a_1, a_2, …, a_n` (`1 ≤ a_i ≤ 100`) — the elements of the first array.

The third line of each test case contains `n` integers `b_1, b_2, …, b_n` (`1 ≤ b_i ≤ 100`) — the elements of the second array.

## Output

For each test case, output a single integer representing the minimum number of seconds required to solve the puzzle, or `-1` if it is impossible to solve the puzzle.

## Examples

**Example:**

```
6
3 5
5 2 3
2 3 4
3 3
1 2 3
4 5 6
4 4
4 5 2 3
3 5 1 2
6 4
2 4 5 3 6 8
5 8 3 1 2 5
5 11
5 8 11 14 17
16 12 10 10 6
3 5
20 14 20
12 18 17
```

**Output:**

```
6
-1
3
8
-1
12
```

## Note

In the first test case, it is impossible to transform `a` into `b` using only subtraction because `a_2 < b_2`. Let's rearrange the elements of array `a` as follows: `[5, 2, 3] ⇒ [2, 3, 5]`. Now it is enough to subtract one from `a_3`, and we get that array `a` becomes equal to array `b` in `5 + 1 = 6` seconds.

In the second test case, all elements of `a` are less than all elements of `b`, which means `a` cannot be transformed into `b`.

In the third test case, you can choose not to rearrange the elements and get an answer of `3`. If you rearrange them at least once, the answer will be at least `4`, so the optimal answer is `3` seconds.

In the sixth test case, the array can be rearranged as follows: `[14, 20, 20]`. It can be seen that the cost will then be `5 + (14 - 12) + (20 - 18) + (20 - 17) = 12`.

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2238/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

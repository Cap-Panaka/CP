# B - Achieve the Goal

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [ABC151](https://atcoder.jp/contests/abc151) |
| **Problem** | [B - Achieve the Goal](https://atcoder.jp/contests/abc151/tasks/abc151_b) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ 20 (gcc 12.2) |
| **Runtime** | 1 ms |
| **Memory** | 3664 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/abc151/submissions/69994754) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

Takahashi is taking exams on  N  subjects. The score on each subject will be an integer between  0  and  K  (inclusive).

He has already taken exams on  N-1  subjects and scored  A_i  points on the  i -th subject.

His goal is to achieve the average score of  M  points or above on the  N  subjects.

Print the minimum number of points Takahashi needs on the final subject to achieve his goal.

If the goal is unachievable, print `-1` instead.

### Constraints

- 2 ≤ N ≤ 100

- 1 ≤ K ≤ 100

- 1 ≤ M ≤ K

- 0 ≤ A_i ≤ K

- All values in input are integers.

## Input

Input is given from Standard Input in the following format:

```
N K M
A_1 A_2 ... A_{N-1}
```

## Output

Print the minimum number of points required on the final subject, or `-1`.

## Examples

**Sample Input 1:**

```
5 10 7
8 10 3 6
```

**Sample Output 1:**

```
8
```

**Sample Input 2:**

```
4 100 60
100 100 100
```

**Sample Output 2:**

```
0
```

**Sample Input 3:**

```
4 100 60
0 0 0
```

**Sample Output 3:**

```
-1
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/abc151/tasks/abc151_b)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

# A - Your First Judge

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [ABC215](https://atcoder.jp/contests/abc215) |
| **Problem** | [A - Your First Judge](https://atcoder.jp/contests/abc215/tasks/abc215_a) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ 20 (gcc 12.2) |
| **Runtime** | 1 ms |
| **Memory** | 3532 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/abc215/submissions/68242594) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

Given a string  S , print `AC` if it perfectly matches `Hello,World!`; otherwise, print `WA`.

What is a perfect match?Strings  A  is said to perfectly match  B  when the length of  A  is equal to that of  B , and the  i -th character of  A  is the same as the  i -th character of  B  for every integer  i  such that  1 ≤ i ≤ |A| .

### Constraints

- 1 ≤ |S| ≤ 15

- S  consists of English lowercase letters, English uppercase letters, `,`, and `!`.

## Input

Input is given from Standard Input in the following format:

```
S
```

## Output

Print the answer.

## Examples

**Sample Input 1:**

```
Hello,World!
```

**Sample Output 1:**

```
AC
```

**Sample Input 2:**

```
Hello,world!
```

**Sample Output 2:**

```
WA
```

**Sample Input 3:**

```
Hello!World!
```

**Sample Output 3:**

```
WA
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/abc215/tasks/abc215_a)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

# A. Word
 
| Field | Value |
|---|---|
| **Contest** | [59](https://codeforces.com/contest/59) |
| **Problem** | [59A — Word](https://codeforces.com/contest/59/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 92 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. That's why he decided to invent an extension for his favorite browser that would change the letters' register in every word so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones. At that as little as possible letters should be changed in the word. For example, the word `HoUse` must be replaced with `house`, and the word `ViP` — with `VIP`. If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, `maTRIx` should be replaced by `matrix`. Your task is to use the given method on one given word.

## Input

The first line contains a word *s* — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.

## Output

Print the corrected word *s*. If the given word *s* has strictly more uppercase letters, make the word written in the uppercase register, otherwise - in the lowercase one.

## Examples

**Example 1:**

```
HoUse
```

**Output 1:**

```
house
```

**Example 2:**

```
ViP
```

**Output 2:**

```
VIP
```

**Example 3:**

```
maTRIx
```

**Output 3:**

```
matrix
```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/59/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

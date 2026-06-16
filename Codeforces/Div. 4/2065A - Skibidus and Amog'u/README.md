# A. Skibidus and Amog'u
 
| Field | Value |
|---|---|
| **Contest** | [2065](https://codeforces.com/contest/2065) |
| **Problem** | [2065A — Skibidus and Amog'u](https://codeforces.com/contest/2065/problem/A) |
| **Rating** | 800 |
| **Tags** | brute force, constructive algorithms, greedy, implementation, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 31 ms |
| **Memory** | 0 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1 second | 256 megabytes |

---

Skibidus lands on a foreign planet, where the local Amog tribe speaks the Amog'u language. In *Amog'u*, there are two forms of nouns, which are *singular* and *plural*.

Given that the root of the noun is transcribed as S, the two forms are transcribed as:

 - Singular: S + "`us`"
- Plural: S + "`i`"

Here, + denotes string concatenation. For example, `abc` + `def` = `abcdef`.

For example, when S is transcribed as "`amog`", then the singular form is transcribed as "`amogus`", and the plural form is transcribed as "`amogi`". Do note that *Amog'u* nouns can have an **empty** root — in specific, "`us`" is the singular form of "`i`" (which, on an unrelated note, means "imposter" and "imposters" respectively).

Given a transcribed *Amog'u* noun in singular form, please convert it to the transcription of the corresponding plural noun.

## Input

Each test contains multiple test cases. The first line contains the number of test cases t (1 ≤ t ≤ 100). The description of the test cases follows. 

The only line of each test case contains a string W, which is a transcribed *Amog'u* noun in *singular* form. It is guaranteed that W consists of only lowercase English letters, has a length of at most 10, and ends with "`us`".

## Output

For each test case, output the transcription of the corresponding plural noun on a separate line.

## Examples

**Example:**

```
9
us
sus
fungus
cactus
sussus
amogus
chungus
ntarsus
skibidus
```

**Output:**

```
i
si
fungi
cacti
sussi
amogi
chungi
ntarsi
skibidi

```

---

> 🔗 [View on Codeforces](https://codeforces.com/contest/2065/problem/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

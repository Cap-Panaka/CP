# A - Jiro

| Field | Value |
|---|---|
| **Platform** | 🟠 AtCoder |
| **Contest** | [ABC371](https://atcoder.jp/contests/abc371) |
| **Problem** | [A - Jiro](https://atcoder.jp/contests/abc371/tasks/abc371_a) |
| **Verdict** | ✅ Accepted |
| **Language** | C++ 20 (gcc 12.2) |
| **Runtime** | 1 ms |
| **Memory** | 3452 KB |
| **Submission** | [View Submission](https://atcoder.jp/contests/abc371/submissions/68201554) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 sec | N/A |

---

There are three brothers named `A`, `B`, and `C`. The age relationships among them are given by three characters  S_AB, S_AC, S_BC , which mean the following:

- If  S_AB  is `<`, then  A  is younger than  B ; if it is `>`, then  A  is older than  B .

- If  S_AC  is `<`, then  A  is younger than  C ; if it is `>`, then  A  is older than  C .

- If  S_BC  is `<`, then  B  is younger than  C ; if it is `>`, then  B  is older than  C .

Who is the middle brother, that is, the second oldest among the three?

### Constraints

- Each of  S_AB, S_AC, S_BC  is `<` or `>`.

- The input contains no contradictions; that is, there always exists an age relationship that satisfies all given inequalities.

## Input

The input is given from Standard Input in the following format:

```
S_{\mathrm{AB}} S_{\mathrm{AC}} S_{\mathrm{BC}}
```

## Output

Print the name of the middle brother, that is, the second oldest among the three.

## Examples

**Sample Input 1:**

```
< < <
```

**Sample Output 1:**

```
B
```

**Sample Input 2:**

```
< < >
```

**Sample Output 2:**

```
C
```

---

> 🔗 [View on AtCoder](https://atcoder.jp/contests/abc371/tasks/abc371_a)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

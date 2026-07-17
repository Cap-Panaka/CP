# A. Anton and Polyhedrons
 
| Field | Value |
|---|---|
| **Contest** | [785](https://codeforces.com/contest/785) |
| **Problem** | [785A — Anton and Polyhedrons](https://codeforces.com/contest/785/problem/A) |
| **Rating** | 800 |
| **Tags** | implementation, strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 62 ms |
| **Memory** | 900 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Anton's favourite geometric figures are regular polyhedrons. Note that there are five kinds of regular polyhedrons: 

 - *Tetrahedron*. Tetrahedron has 4 triangular faces.
- *Cube*. Cube has 6 square faces.
- *Octahedron*. Octahedron has 8 triangular faces.
- *Dodecahedron*. Dodecahedron has 12 pentagonal faces.
- *Icosahedron*. Icosahedron has 20 triangular faces.

All five kinds of polyhedrons are shown on the picture below:

 ![](https://espresso.codeforces.com/51d90af2e3b31c36f12732b895a92e9b8d2b82bc.png) Anton has a collection of *n* polyhedrons. One day he decided to know, how many faces his polyhedrons have in total. Help Anton and find this number!

## Input

The first line of the input contains a single integer *n* (1 ≤ *n* ≤ 200 000) — the number of polyhedrons in Anton's collection.

Each of the following *n* lines of the input contains a string *s*_*i* — the name of the *i*-th polyhedron in Anton's collection. The string can look like this:

 - "`Tetrahedron`" (without quotes), if the *i*-th polyhedron in Anton's collection is a tetrahedron.
- "`Cube`" (without quotes), if the *i*-th polyhedron in Anton's collection is a cube.
- "`Octahedron`" (without quotes), if the *i*-th polyhedron in Anton's collection is an octahedron.
- "`Dodecahedron`" (without quotes), if the *i*-th polyhedron in Anton's collection is a dodecahedron.
- "`Icosahedron`" (without quotes), if the *i*-th polyhedron in Anton's collection is an icosahedron.

## Output

Output one number — the total number of faces in all the polyhedrons in Anton's collection.

## Examples

**Example 1:**

```
4
Icosahedron
Cube
Tetrahedron
Dodecahedron

```

**Output 1:**

```
42

```

**Example 2:**

```
3
Dodecahedron
Octahedron
Octahedron

```

**Output 2:**

```
28

```

## Note

In the first sample Anton has one icosahedron, one cube, one tetrahedron and one dodecahedron. Icosahedron has 20 faces, cube has 6 faces, tetrahedron has 4 faces and dodecahedron has 12 faces. In total, they have 20 + 6 + 4 + 12 = 42 faces.

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/785/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

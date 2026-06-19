# A. Mishka and Game
 
| Field | Value |
|---|---|
| **Contest** | [703](https://codeforces.com/contest/703) |
| **Problem** | [703A — Mishka and Game](https://codeforces.com/contest/703/problem/A) |
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

Mishka is a little polar bear. As known, little bears loves spending their free time playing dice for chocolates. Once in a wonderful sunny morning, walking around blocks of ice, Mishka met her friend Chris, and they started playing the game.

Rules of the game are very simple: at first number of rounds *n* is defined. In every round each of the players throws a cubical dice with distinct numbers from 1 to 6 written on its faces. Player, whose value after throwing the dice is greater, wins the round. In case if player dice values are equal, no one of them is a winner.

In average, player, who won most of the rounds, is the winner of the game. In case if two players won the same number of rounds, the result of the game is draw.

Mishka is still very little and can't count wins and losses, so she asked you to watch their game and determine its result. Please help her!

## Input

The first line of the input contains single integer *n* *n* (1 ≤ *n* ≤ 100) — the number of game rounds.

The next *n* lines contains rounds description. *i*-th of them contains pair of integers *m*_*i* and *c*_*i* (1 ≤ *m*_*i*,  *c*_*i* ≤ 6) — values on dice upper face after Mishka's and Chris' throws in *i*-th round respectively.

## Output

If Mishka is the winner of the game, print `"Mishka"` (without quotes) in the only line.

If Chris is the winner of the game, print `"Chris"` (without quotes) in the only line.

If the result of the game is draw, print `"Friendship is magic!^^"` (without quotes) in the only line.

## Examples

**Example 1:**

```
3
3 5
2 1
4 2

```

**Output 1:**

```
Mishka
```

**Example 2:**

```
2
6 1
1 6

```

**Output 2:**

```
Friendship is magic!^^
```

**Example 3:**

```
3
1 5
3 3
2 2

```

**Output 3:**

```
Chris
```

## Note

In the first sample case Mishka loses the first round, but wins second and third rounds and thus she is the winner of the game.

In the second sample case Mishka wins the first round, Chris wins the second round, and the game ends with draw with score 1:1.

In the third sample case Chris wins the first round, but there is no winner of the next two rounds. The winner of the game is Chris.

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/703/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

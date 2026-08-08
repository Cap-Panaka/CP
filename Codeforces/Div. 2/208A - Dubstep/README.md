# A. Dubstep
 
| Field | Value |
|---|---|
| **Contest** | [208](https://codeforces.com/contest/208) |
| **Problem** | [208A — Dubstep](https://codeforces.com/contest/208/problem/A) |
| **Rating** | 900 |
| **Tags** | strings |
| **Verdict** | ✅ Accepted |
| **Language** | C++17 (GCC 7-32) |
| **Runtime** | 62 ms |
| **Memory** | 100 KB |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 2 seconds | 256 megabytes |

---

Vasya works as a DJ in the best Berland nightclub, and he often uses dubstep music in his performance. Recently, he has decided to take a couple of old songs and make dubstep remixes from them.

Let's assume that a song consists of some number of words. To make the dubstep remix of this song, Vasya inserts a certain number of words "`WUB`" before the first word of the song (the number may be zero), after the last word (the number may be zero), and between words (at least one between any pair of neighbouring words), and then the boy glues together all the words, including "`WUB`", in one string and plays the song at the club.

For example, a song with words "`I AM X`" can transform into a dubstep remix as "`WUBWUBIWUBAMWUBWUBX`" and cannot transform into "`WUBWUBIAMWUBX`".

Recently, Petya has heard Vasya's new dubstep track, but since he isn't into modern music, he decided to find out what was the initial song that Vasya remixed. Help Petya restore the original song.

## Input

The input consists of a single non-empty string, consisting only of uppercase English letters, the string's length doesn't exceed 200 characters. It is guaranteed that before Vasya remixed the song, no word contained substring "`WUB`" in it; Vasya didn't change the word order. It is also guaranteed that initially the song had at least one word.

## Output

Print the words of the initial song that Vasya used to make a dubsteb remix. Separate the words with a space.

## Examples

**Example 1:**

```
WUBWUBABCWUB

```

**Output 1:**

```
ABC 
```

**Example 2:**

```
WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB

```

**Output 2:**

```
WE ARE THE CHAMPIONS MY FRIEND 
```

## Note

In the first sample: "`WUBWUBABCWUB`" = "`WUB`" + "`WUB`" + "`ABC`" + "`WUB`". That means that the song originally consisted of a single word "`ABC`", and all words "`WUB`" were added by Vasya.

In the second sample Vasya added a single word "`WUB`" between all neighbouring words, in the beginning and in the end, except for words "`ARE`" and "`THE`" — between them Vasya added two "`WUB`".

---

> 🔗 [View on Codeforces](https://codeforces.com/problemset/problem/208/A)

---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*

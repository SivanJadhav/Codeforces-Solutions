# Codeforces Round 1054 (Div. 3)

## Contest Stats
- Date: 2025-09-2525
- Rating before: 391
- Rating after: 633
- Problems solved: A, B

---

## Problem Notes

### A - Be Positive
- Approach: Count the number of zeroes, that would need to be incremented by 1 to make them equal to 1. Count the number of negatives, find the ones not in a pair (if any), because the ones in pairs would multiply and be equal to one (-1 * -1 = 1) so we will ignore them to minimize steps any any remaining one would need to be incremented by two, so multiply the remainder of the number of -1's divided by 2 by 2 (-1 + 2 = 1), so that if no remainder it becomes zero.
- What went well: everything! It was optimal solution.
- Mistakes / time sinks: pretty much no mistakes.
- Editorial takeaway: My solution was optimal, yay!

### B - Unconventional Pairs
- Approach: take the input, sort it (to minimize difference between two consecutive pairs) and find the maximum one via iteration.
- What went well: went well.
- Mistakes / time sinks: I was trying a wrong approach by forgetting what we need, I should've iterated first and find the maximum difference.
- Editorial takeaway: mine was nice.

---

## Meta Reflections
- Time management: no time management (very bad)
- Debugging: cleanest solution
- Mindset: chill.
- Next time focus: just chill out, you'll do it!

---

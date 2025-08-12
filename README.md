# gsg_level_3_codes.
# activity_schedules

## Problem statement (brief)
Given a number of days **n** (1 ≤ n ≤ 10), print **all** possible schedules using the set  
`{"Swimming", "Running", "Football"}` such that **no two consecutive days** have the same activity.  
After listing schedules, print a final line `COUNT: X` where **X = total number of schedules**.

---

## Example run (n = 2)

Input
2

Output
Football Running
Football Swimming
Running Football
Running Swimming
Swimming Football
Swimming Running
COUNT: 6

---

## Expected COUNT formula
At day 1 you have **3** choices; at each later day you can choose **any activity except yesterday’s**, i.e. **2** choices.

**Formula:**  
\[
\text{COUNT}(n) = 3 \times 2^{\,n-1}
\]

### Values for chosen n
| n | COUNT(n) |
|---|----------|
| 1 | 3        |
| 2 | 6        |
| 3 | 12       |
| 4 | 24       |
| 5 | 48       |
| 6 | 96       |
| 7 | 192      |
| 8 | 384      |
| 9 | 768      |
| 10| 1536     |
---

## Author
**Name:** Abdulrahman Issa  
**Email:** aboody9068@gmail.com



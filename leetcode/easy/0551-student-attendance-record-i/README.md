# Student Attendance Record I

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a string `s` representing an attendance record for a student where each character signifies whether the student was absent, late, or present on that day. The record only contains the following three characters:

- 'A': Absent.
- 'L': Late.
- 'P': Present.

The student is eligible for an attendance award if they meet  **both**  of the following criteria:

- The student was absent ('A') for strictly fewer than 2 days total.
- The student was never late ('L') for 3 or more consecutive days.

Return `true` *if the student is eligible for an attendance award, or* `false` *otherwise*.

 

 **Example 1:** 

```
Input: s = "PPALLP"
Output: true
Explanation: The student has fewer than 2 absences and was never late 3 or more consecutive days.

```

 **Example 2:** 

```
Input: s = "PPALLL"
Output: false
Explanation: The student was late 3 consecutive days in the last 3 days, so is not eligible for the award.

```

 

 **Constraints:** 

- 1 <= s.length <= 1000
- s[i] is either 'A', 'L', or 'P'.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.2 MB (beats 96.51%)  
**Submitted:** 2026-10-28T18:43:09.627Z  

```cpp
class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0;
        int late = 0;

        for (char c : s) {
            if (c == 'A') {
                absent++;
                late = 0; // Consecutive late reset ho jayega
            } else if (c == 'L') {
                late++;
            } else { // 'P'
                late = 0; // Consecutive late reset ho jayega
            }

            // Reject criteria
            if (absent >= 2 || late >= 3) {
                return false;
            }
        }

        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/student-attendance-record-i/)
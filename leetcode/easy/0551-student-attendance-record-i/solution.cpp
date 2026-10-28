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
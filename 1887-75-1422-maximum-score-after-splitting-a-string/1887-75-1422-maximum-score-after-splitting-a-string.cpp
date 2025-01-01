class Solution {
public:
    int maxScore(string s) {
        int totalOnes = 0; 
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                totalOnes++;
            }
        }
        int zeros = 0;      
        int ones = 0;       
        int maxScore = 0;   
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '0') {
                zeros++;
            } else {
                ones++;
            }
            int score = zeros + (totalOnes - ones);
            maxScore = max(maxScore, score);
        }
        return maxScore;
    }
};
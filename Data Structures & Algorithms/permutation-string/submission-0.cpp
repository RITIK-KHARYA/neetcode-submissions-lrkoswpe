 
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;

        vector<int> s1Count(26, 0), windowCount(26, 0);

        // initial window
        for (int i = 0; i < s1.size(); i++) {
            s1Count[s1[i] - 'a']++;
            windowCount[s2[i] - 'a']++;
        }

        if (s1Count == windowCount) return true;

        // sliding window
        for (int i = s1.size(); i < s2.size(); i++) {
            windowCount[s2[i] - 'a']++; // add new
            windowCount[s2[i - s1.size()] - 'a']--; // remove old

            if (s1Count == windowCount) return true;
        }

        return false;
    }
};

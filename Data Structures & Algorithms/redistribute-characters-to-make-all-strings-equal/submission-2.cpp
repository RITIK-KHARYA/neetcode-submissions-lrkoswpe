class Solution {
   public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> count;
        for (string& w : words) {
            for (char x : w) {
                count[x]++;
            }
        }
        for (const auto& charcount : count) {
            if (charcount.second % words.size() != 0) return false;
        }
        return true;
    }
};
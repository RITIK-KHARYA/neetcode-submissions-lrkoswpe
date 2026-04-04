class Solution {
public:

// first question solved using ai help
   vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int> freq;
    for (int x : nums) freq[x]++;

    vector<pair<int,int>> v(freq.begin(), freq.end());
    sort(v.begin(), v.end(), [](const auto& a, const auto& b){
        return a.second > b.second; // sort by freq desc
    });

    vector<int> res;
    for (int i = 0; i < k; ++i) res.push_back(v[i].first);
    return res;
}
};

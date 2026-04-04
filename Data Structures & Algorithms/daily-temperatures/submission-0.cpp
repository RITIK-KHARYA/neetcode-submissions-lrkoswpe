class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>temp;
        vector<int> arr(temperatures.size(), 0);
        for(int i=0;i<temperatures.size();i++){
            
            while(!temp.empty() && temperatures[i] > temp.top().first){
                arr[temp.top().second] = i - temp.top().second;
                temp.pop();
            }
            temp.push({temperatures[i],i});
        }
        return arr;
    }
};
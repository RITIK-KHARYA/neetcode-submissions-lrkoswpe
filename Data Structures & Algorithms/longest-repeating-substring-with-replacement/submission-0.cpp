// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//    vector <pair<char,int>> count;
//    unordered_map<char,int> temp;
    
//     for(int l=0;l<s.size();l++){
//      // intialize the loop 
//         temp[s[i] -'a']++;
//         if(i<s.size()-1 && s[i] != s[i+1]){
            

//             // main logic is here 
//             if(count>=k){
//                 l=r; 
//                 r=l+1;
//                 // should break and create new sliding window
//             }
//         }

//     }
//     // want the max value of possible outcomes 
//     return count;
//     }
// };

class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26, 0);
        int l = 0, maxFreq = 0, res = 0;

        for (int r = 0; r < s.size(); r++) {
            count[s[r] - 'A']++;
            maxFreq = max(maxFreq, count[s[r] - 'A']);

            while ((r - l + 1) - maxFreq > k) {
                count[s[l] - 'A']--;
                l++;
            }

            res = max(res, r - l + 1);
        }

        return res;
    }
};























// class Solution {
// public:
//     int characterReplacement(string s, int k) {
//         if(k==0) return s.size();
//         int res=0;
//         char highlighttemp1;
//         char highlighttemp2;
//         for(int i=0;i<s.size();i++){
//             while(s[i] == s[i+1]){
//                 highlighttemp1 = s[i+1];
//                 if(s[i] != highlighttemp1){
//                     highlighttemp2 = s[i];
//                     highlighttemp1 = highlighttemp2;
//                     k--;
//                 }
//             }
//               if(s[i] != s[i+1]){
//                     res++;
//                 }
//         }
//         return res;
//     }
// };

 
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      if(s1.size() > s2.size()) return false;

      if(s1.size() == 1 && s2.size() == 2){
        if(s2[0] == s1[0]) return true;
      }

    vector<int> temp1(26,0), temp2 (26,0);
    for(int i=0; i<s1.size(); i++){
        temp1[s1[i] - 'a']++;
        temp2[s2[i] - 'a']++; //why to waste an operation
    }
    for(int j=s1.size(); j<s2.size(); j++){
        temp2[s2[j] - 'a']++;
        temp2[s2[j - s1.size()] -  'a']--;
         if(temp1 == temp2 ) return true;
    }
    // for( int k=0; k<26; k++){
    //     if(temp1[k] == temp2[k]) return true;
    // }
     if(temp1 == temp2 ) return true;
   
    return false;
    }
};



// sam copy pasted this 

//   if (s1.size() > s2.size()) return false;

//         vector<int> s1Count(26, 0), windowCount(26, 0);

//         // initial window
//         for (int i = 0; i < s1.size(); i++) {
//             s1Count[s1[i] - 'a']++;
//             windowCount[s2[i] - 'a']++;
//         }

//         if (s1Count == windowCount) return true;

//         // sliding window
//         for (int i = s1.size(); i < s2.size(); i++) {
//             windowCount[s2[i] - 'a']++; // add new
//             windowCount[s2[i - s1.size()] - 'a']--; // remove old

//             if (s1Count == windowCount) return true;
//         }

//         return false;
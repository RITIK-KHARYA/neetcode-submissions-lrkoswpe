class Solution {
public:
    bool isPalindrome(string s) {
      string t="";
      string p="";
      string m="";
      for(char c : s){
        if(isalnum(c) ){
            t+=tolower(c);
        }
      }
      for(int k = 0; k<t.size();k++){
        p+=t[k];  
      }
      cout<<"this is p ="<<p<<endl;
      for(int j =t.size()-1; j>=0;j--){
       m += t[j];
      }
      cout<<"this is m ="<<m;


// can compare like == directly rather then calling compare
      if(p==m){
        return true;
      }
      return false;
    };
    
};

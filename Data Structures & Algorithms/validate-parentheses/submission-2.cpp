// class Solution {
// public:
//     bool isValid(string s) {
//         int size = s.size();
//         stack<char> st;
//         for(int i=0; i<size;i++){
//             if(s[i]=='('  || s[i]=='{' || s[i] == '[' ){ //include opening braket only with this closing bracket meets the 
//                 st.push(s[i]); 
//                 else if(s[0] == '}' || s[0] == ')' || s[0] == ']'){
//                 return false;
//             };
//             }
//             char top = st.top();

            
//             if ((s[i] == ')' && top == '(') ||
//                     (s[i] == '}' && top == '{') ||
//                     (s[i] == ']' && top == '[')) {
//                     st.pop();
//                 } 
                
//         }
//         if(st.empty()){
//             return true;
//         };
//          return false;
//     };
   
// };

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } 
            else {
                if (st.empty()) return false;

                char top = st.top();

                if(s[0] == ']' ||  s[0]== '}' || s[0] == ')'){
                    return false;
                }

                if ((s[i] == ')' && top == '(') ||
                    (s[i] == '}' && top == '{') ||
                    (s[i] == ']' && top == '[')) {
                    st.pop();
                } 
                else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};
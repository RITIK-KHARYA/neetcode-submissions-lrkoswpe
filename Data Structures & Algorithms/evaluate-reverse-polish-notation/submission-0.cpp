class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> temp;
        int math=0;
        for(string c : tokens){
            if(isdigit(c[c.length()-1])){  // pushing numbers values in stack 
                 temp.push(stoi(c));
            } else { // checking for operators 
                 int val2 = temp.top(); temp.pop();
                 int val1 = temp.top(); temp.pop();

                // maths operations here

                if(c == "+"){
                    math = val1+val2;
                    temp.push(math);
                }
                else if(c == "*"){
                    math = val1*val2;
                    temp.push(math);
                }

                 else if(c == "/"){
                    math = val1/val2;
                    temp.push(math);
                }

                 else if(c == "-"){
                    math = val1-val2;
                    temp.push(math);
                }
            }
        }
        return temp.top();
    }
};
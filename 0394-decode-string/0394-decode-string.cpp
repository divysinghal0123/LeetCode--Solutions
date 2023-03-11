class Solution {
public:
    string decodeString(string s) {
    stack<int> stacknum;
    stack<string> stackstr;
    string cur = "";
    int num = 0;
    for (int i = 0; i < s.size(); i++) {
        if(isdigit(s[i])){
            num = num * 10 + s[i] - '0';
        }
        else if (isalpha(s[i])){
            cur += s[i];
        }
        else if (s[i] == '['){
            stacknum.push(num);
            stackstr.push(cur);
            num = 0;
            cur = "";
        }
        else{
            int count = stacknum.top();
            stacknum.pop();
            string str = "";
            for(int j = 0; j < count; j++){
                str += cur;
            }
            cur = stackstr.top() + str;
            stackstr.pop();
        }
    }
    return cur;
    }
};
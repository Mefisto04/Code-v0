class Solution {
public:
    string interpret(string command) {
        string str;
        for(int i = 0; i < command.length(); i++) {
            if(command[i] == '(' && command[i+1] == ')') {
                str.push_back('o');
                i++; 
            } else if(command[i] != '(' && command[i] != ')') {
                str.push_back(command[i]);
            }
        }
        return str;
    }
};
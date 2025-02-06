#include<bits/stdc++.h>
using namespace std;

// Function to define the priority of operators
int priority(char it) {
    if(it == '+' || it == '-') return 1;
    else if(it == '*' || it == '/') return 2;
    else if(it == '^' ) return 3;
    else return 0;
}

// Function to convert infix expression to postfix
string convert(string s) {
    stack<char> st;  // Stack to store operators
    string ans = "";  // Resultant postfix expression
    int n = s.size();
    
    for (int i = 0; i < n; i++) {
        // If character is an operand (a-z, A-Z, 0-9), add it to the result
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')) {
            ans += s[i];
        }
        // If character is '(', push it onto the stack
        else if (s[i] == '(') {
            st.push(s[i]);
        }
        // If character is ')', pop until '(' is found
        else if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            st.pop();  // Remove the '(' from the stack
        }
        // If character is an operator
        else {
            while (!st.empty() && priority(s[i]) <= priority(st.top())) {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);  // Push the current operator onto the stack
        }
    }
    
    // Pop the remaining operators from the stack
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    
    return ans;  // Return the postfix expression
}

int main() {
    string s = "a+b*(c^d-e)^(f+g*h)-i";  // Example infix expression
    string ans = convert(s);  // Convert to postfix
    cout << "Postfix expression: " << ans << endl;  // Output the result
    return 0;
}

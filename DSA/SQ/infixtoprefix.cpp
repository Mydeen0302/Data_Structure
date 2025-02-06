#include<bits/stdc++.h>
using namespace std;

// Function to define the priority of operators
int priority(char it) {
    if(it == '+' || it == '-') return 1;
    else if(it == '*' || it == '/') return 2;
    else if(it == '^' ) return 3;
    else return 0;
}

// Function to convert infix expression to prefix
string convert(string s) {
    stack<char> st;  // Stack to store operators
    string ans = "";  // Resultant prefix expression
    int n = s.size();
    
    // Reverse the infix expression and swap parentheses
    reverse(s.begin(), s.end());
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') s[i] = ')';
        else if (s[i] == ')') s[i] = '(';
    }

    // Traverse the reversed infix expression
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
            // Pop from the stack while the priority of the operator on the stack is greater than or equal to the current operator
            while (!st.empty() && priority(s[i]) < priority(st.top())) {
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

    // Reverse the final result to get the prefix expression
    reverse(ans.begin(), ans.end());
    return ans;  // Return the prefix expression
}

int main() {
    string s = "(A+B)*C-D+F";  // Example infix expression
    string ans = convert(s);  // Convert to prefix
    cout << "Prefix expression: " << ans << endl;  // Output the result
    return 0;
}

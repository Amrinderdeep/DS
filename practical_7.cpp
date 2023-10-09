#include <iostream>
#include <stack>
using namespace std;


int precedence(char op) {
    if(op == '^')
        return 2;
    if (op == '+' || op == '-')
        return 4;
    if (op == '*' || op == '/')
        return 3;
    if (op == '(' || op == ')')
        return 1; 
    return 0;
}

int main() {
    string infix;
    cout << "Enter Infix: ";
    cin >> infix;
    infix = "(" + infix + ")";
    string postfix = "";

    stack<char> st;

    for (int i = 0; i < infix.length(); i++) {
        if (isalnum(infix[i])) {
            postfix += infix[i];
        } else if (infix[i] == '(') {
            st.push(infix[i]);
        } else if (infix[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop(); 
        } else {
            while (!st.empty() && precedence(st.top()) >= precedence(infix[i])) {
                postfix += st.top();
                st.pop();
            }
            st.push(infix[i]);
        }
    }

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}

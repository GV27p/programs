#include <iostream>
#include <stack>
#include <string>
#include <cctype> 
using namespace std;

// Function to return precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

// Function to check if a character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to convert infix expression to postfix
string infixToPostfix(const string &infix) {
    stack<char> st; 
    string postfix; 

    for (char c : infix) {
        // Skip whitespace
        if (isspace(c)) continue;
        
        // If the character is an operand, add it to the output
        if (isalnum(c)) {
            postfix += c; // You might want to add a space here for clarity
        }
        // If the character is '(', push it to the stack
        else if (c == '(') {
            st.push(c);
        }
        // If the character is ')', pop and output from the stack until '(' is found
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop(); // Pop '('
        }
        // If the character is an operator
        else if (isOperator(c)) {
            while (!st.empty() && precedence(st.top()) >= precedence(c)) {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop all the operators from the stack
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter an infix expression: ";
    getline(cin, infix); // Read the entire line for the infix expression

    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}

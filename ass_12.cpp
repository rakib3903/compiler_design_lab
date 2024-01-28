#include <iostream>
#include <string>
#include <stack>
#include <cctype>

using namespace std;

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

bool operatorCheck(const string& expr) {
    stack<char> parentheses;
    bool lastWasOperator = true; 
    for (size_t i = 0; i < expr.size(); ++i) {
        if (expr[i] == '(') {
            if (!lastWasOperator) {
                return false; 
            }
            parentheses.push(expr[i]);
            lastWasOperator = true; 
        } else if (expr[i] == ')') {
            if (parentheses.empty() || lastWasOperator) {
                return false;
            }
            parentheses.pop();
            lastWasOperator = false; 
        } else if (isOperator(expr[i])) {
            if (lastWasOperator) {
                return false; 
            }
            lastWasOperator = true; 
        } else {
            lastWasOperator = false; 
        }
    }
    return parentheses.empty(); 
}

bool isValidExpression(const string& expr) {
    return operatorCheck(expr);
}

int main() {
    string expr;
    cout << "Enter a string: ";
    getline(cin, expr);

    if (isValidExpression(expr)) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}

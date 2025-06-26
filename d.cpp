#include <iostream>
#include <stack>
using namespace std;
bool isBalanced(string expr) {
    stack<char> s;
    for (char c : expr) {
        if (c == '(') s.push(c);
        else if (c == ')') {
            if (s.empty()) return false;
            s.pop();
        }
    }
    return s.empty();
}
int main() {
    string expr;
    cout << "Enter expression: ";
    cin >> expr;
    if (isBalanced(expr)) cout << "Correct\n";
    else cout << "Incorrect\n";
    return 0;
}
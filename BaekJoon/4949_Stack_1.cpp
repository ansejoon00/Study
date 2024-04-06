#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    while (true) {
        string input;
        getline(cin, input);

        if (input == ".") {
            break;
        }

        stack<char> ch_stack;
        bool ans = 0;

        for (int i = 0; i < input.length(); i++) {
            char ch = input[i];

            if ((ch == '(') || (ch == '[')) {
                ch_stack.push(ch);
            }
            else if (ch == ')') {
                if (!ch_stack.empty() && ch_stack.top() == '(') {
                    ch_stack.pop();
                }
                else {
                    ans = 1;
                    break;
                }
            }
            else if (ch == ']') {
                if (!ch_stack.empty() && ch_stack.top() == '[') {
                    ch_stack.pop();
                }
                else {
                    ans = 1;
                    break;
                }
            }
        }

        if (ans == 0 && ch_stack.empty()) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
}

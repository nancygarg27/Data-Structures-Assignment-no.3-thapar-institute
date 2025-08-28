// Write a program that checks if an expression has balanced parentheses.
//  let us take the input : { ( [ ] ) }

#include <iostream>
using namespace std;
#define MAX 100

class Stack {
    char str[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(char ele) {
        if (top >= MAX - 1){
            cout << "Stack Overflow!" << endl;
        }
        else {
            str[++top] = ele;
        }
    }

    char pop() {
        if (top < 0) {
            cout<<"Stack Underflow!"<<endl;
        }
        else {
            char poppedletter = str[top];
            top--;
        }
    }

    bool isMatching(char open, char close) {
        return (open == '(' && close == ')') ||
               (open == '{' && close == '}') ||
               (open == '[' && close == ']');
    }

    bool isEmpty() {
        return (top <0);
    }
};

int main()
{
    char expression[MAX];
    cout << "Enter the expression (only brackets): ";
    cin.getline (expression, MAX);

    Stack s1;
    for (int i = 0; expression[i] != '\0'; i++){
        char ch = expression[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            s1.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            char topChar = s1.pop();

            if (topChar == '\0' || !s1.isMatching(topChar, ch)) {
                cout << "Not Balanced!" << endl;
                return 0;
            }
        }
        else {
            // Invalid character found — you can decide to ignore or reject
            // For now ignoring
        }
    }

    if (s1.isEmpty()) {
        cout << "Balanced!" << endl;
    }
    else {
        cout << "Not Balanced!" << endl;
    }

    return 0;
}

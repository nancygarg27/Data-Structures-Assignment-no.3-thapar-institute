// WAP to reverse a string using stack. For ex “DataStructure” should give “erutcurtSataD.”

#include <iostream>
using namespace std;
#define MAX 100
# include <string.h>

class Stack
{
    private:
    int top;
   char str[MAX];

    public:
    Stack()
    {
        top = -1; // tells us that the stack is empty initially
    }

    void push(char letter)
    {
        if (top >= MAX - 1)
        {
            cout << "Stack Overflow!";
        }
        else
        {
            str[++top] = letter;
            cout << "pushed " << letter << endl;
        }

    }
    
    void pop()
    {
        if (top < 0)
        {
            cout << "Stack underflow!";
        }
        else
        {
            char poppedletter = str[top];
            cout << poppedletter;
            top--;
        }

    }

    void printstack()
    {
        if (top < 0)
        {
            cout << "Nothing to display" << endl;
        }
        else
        {
            for (int i = 0; i <= top; i++)
            {
                cout << str[i];
            }
            cout<<endl;
        }
    }
};

int main () {
char str[MAX];
cout <<"Enter the string: ";
cin >> str;
int i=0;
Stack s1;
while (str[i] != '\0'){
 s1.push(str[i]);
 i++;
}
cout <<"The reversed string is: ";
while (i >0){
 s1.pop();
 i--;
}
}
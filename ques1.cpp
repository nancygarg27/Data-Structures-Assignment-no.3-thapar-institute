// WAP demonstrating the following operations on a Stack using array:
//(i)push(), (ii) pop(), (iii) isEmpty(), (iv) isFull(), (v) display(), and (vi) peek().

#include <iostream>
using namespace std;
#define MAX 100

class Stack
{
private:
    int items[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    // (i) push()
    void push(int item)
    {
        if (top >= MAX - 1)
        {
            cout << "Stack overflow!" << endl;
        }
        else
        {
            items[++top] = item;
            cout << "pushed " << item << endl;
            display();
        }
    }

    // (ii) pop()
    void pop()
    {
        if (top < 0)
        {
            cout << "Stack underflow!" << endl;
        }
        else
        {
            int poppeditem = items[top];
            cout << "popped " << poppeditem << endl;
            top--;
            display();
        }
    }

    // (iii) isEmpty
    bool isEmpty () {
    return (top <0);
    }

    // (iv) isFull 
    bool isFull () {
    return (top >= MAX-1);
    }

    // (v) display
    void display()
    {
        if (top < 0)
        {
            cout << "Nothing to display" << endl;
        }
        else
        {
            cout << "[ ";
            for (int i = 0; i <= top; i++)
            {
                cout << items[i] << " ";
            }
            cout << "] "<<endl;
        }
    }

    // (vi) peek()
    void peek() {
    if(top <0) {
    cout<<"Stack underflow..no element is there to peek at"<<endl;
    }
    else {
        cout <<"the top element is "<<items[top]<<endl;
    }
    }

};

int main () {
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.display();
    s1.pop();
    s1.pop();
    s1.display();
    s1.peek();
    cout<< s1.isFull() <<endl;
    cout<< s1.isEmpty() <<endl;
    return 0;
}
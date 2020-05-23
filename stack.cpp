#include <stack>
#include <string>
#include <iostream>

using namespace std;
void PrintStack(stack<string>);
int main()
{
    stack<string> q;

    cout << "Pushing one two three four\n";
    q.push("one");
    PrintStack(q);
    cout << '\n';
    q.push("two");
    PrintStack(q);
    cout << '\n';
    q.push("three");
    PrintStack(q);
    cout << '\n';
    q.push("four");
    PrintStack(q);
    cout << '\n';

    cout << "Now, retrieve those values in LIFO order.\n";
    PrintStack(q);
    cout << endl;
    while (!q.empty()) {
        cout << "Popping ";
        cout << q.top() << "\n";
        q.pop();
    }
    cout << '\n';

    return 0;
}

void PrintStack(stack<string> s)
{
    // If stack is empty then return
    if (s.empty())
        return;


    string x = s.top();

    // Pop the top element of the stack
    s.pop();

    // Recursively call the function PrintStack
    PrintStack(s);

    // Print the stack element starting
    // from the bottom
    cout << x << " ";

    // Push the same element onto the stack
    // to preserve the order
    s.push(x);
}

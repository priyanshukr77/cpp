#include <iostream>
#include <stack>
using namespace std;

bool isOperator(char ch)
{
    return ch == '+' || ch == '-' ||
           ch == '*' || ch == '/';
}

int main()
{
    string postfix = "ab+c*de/-";

    stack<string> infix;
    stack<string> prefix;

    for (int i = 0; i < postfix.length(); i++)
    {
        char ch = postfix[i];

        if (!isOperator(ch))
        {
            string s(1, ch);

            infix.push(s);
            prefix.push(s);
        }
        else
        {
            string b = infix.top();
            infix.pop();

            string a = infix.top();
            infix.pop();

            string infixExp = "(" + a + ch + b + ")";
            infix.push(infixExp);

            string y = prefix.top();
            prefix.pop();

            string x = prefix.top();
            prefix.pop();

            string prefixExp = ch + x + y;
            prefix.push(prefixExp);
        }
    }

    cout << "Infix: " << infix.top() << endl;
    cout << "Prefix: " << prefix.top() << endl;

    return 0;
}
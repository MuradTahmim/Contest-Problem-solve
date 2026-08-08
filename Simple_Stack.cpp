#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    stack<int> st;
    string s;
    while (cin >> s)
    {
        if (s == "push")
        {
            int x;
            cin >> x;
            st.push(x);
            cout << "ok" << endl;
        }
        else if (s == "pop")
        {
            cout<<st.top()<<endl;
            st.pop();
        }
        else if (s == "back")
        {
            cout << st.top() << endl;
        }
        else if (s == "size")
        {
            cout << st.size() << endl;
        }
        else if (s == "clear")
        {
            while (!st.empty())
            {
                st.pop();
            }
            cout << "ok" << endl;
        }
        else if(s=="exit")
        {
            cout << "bye" << endl;
            break;
        }
    }

    return 0;
}
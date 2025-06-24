#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    getline(cin, S);
    string N;
    bool found = false;

    stringstream x(S);

    while (x >> N)
    {
        if (N == "Jessica")
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
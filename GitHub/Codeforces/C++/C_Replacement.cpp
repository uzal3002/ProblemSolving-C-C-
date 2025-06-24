// Problem: https://codeforces.com/problemset/problem/C. Replacement
// Author: uzzal3002
// Language: C++
// Verdict: Accepted

#include <bits/stdc++.h>
using namespace std;

bool positive(int x)
{
    return x > 0;
}
bool negetive(int x)
{
    return x < 0;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for(int &x : a) cin >> x;

    replace_if(a.begin(), a.end(), positive, 1);
    replace_if(a.begin(), a.end(), negetive, 2);

    for (int x : a) cout << x << " ";

    return 0;
}

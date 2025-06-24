#include <bits/stdc++.h>
using namespace std;

void concatenationArray(vector<int> a, vector<int> b)
{
    for(int i : b) cout << i << " ";
    for(int i : a) cout << i << " ";
}

int main()
{
    int N;
    cin >> N;
    vector<int> a(N), b(N);

    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    
    concatenationArray(a ,b);

    return 0;
}
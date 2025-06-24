#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    string S, X;
    cin >> S >> X;

    int lenS = S.length();
    int lenX = X.length();

    string result = "";

    for (int i = 0; i < lenS; )
    {
        bool match = true;

        if (i + lenX <= lenS)
        {
            for (int j = 0; j < lenX; j++)
            {
                if (S[i + j] != X[j])
                {
                    match = false;
                    break;
                }
            }
        }
        else {
            match = false;
        }

        if (match)
        {
            result += "#";
            i += lenX;
        }
        else
        {
            result += S[i];
            i++;
        }
    }
    cout << result << endl;
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int roll, marks;
};

bool srt(student left, student right)
{
    if (left.marks > right.marks)
    {
        return true;
    }
    else if (left.marks < right.marks)
    {
        return false;
    }
    else
    {
        // if (left.roll < right.roll)
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }

        return left.roll < right.roll;
    }

    //return left.marks >= right.marks; //shorcut way
}

int main()
{
    int n;
    cin >> n;
    student a[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }

    sort(a, a+n, srt);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n <= 2)
            cout << 1 << endl;
        else
            {float y = n-2;
            cout << (ceil(y / x)) + 1 << endl;}
    }
    return 0;
}
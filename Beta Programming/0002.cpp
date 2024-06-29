#include <bits/stdc++.h>
using namespace std;

void fastC();

void solved()
{
    // Solve the problem here
    int q, mn = 2e9, mx=-2e9;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;
        
        mn = min(mn, x);
        mx = max(mx, x);
    }
    cout << mn << "\n" << mx;
}

main(){
    fastC();
    solved();
    return 0;
}

void fastC()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
}
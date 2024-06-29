#include <bits/stdc++.h>
using namespace std;

void fastC();

void solved()
{
    // Solve the problem here
    int a, b;
    cin >> a >> b;
    int ans =  (a > b) ? 2 : ((b + a - 1) / a);
    cout << ans;
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
#include <bits/stdc++.h>
using namespace std;

void fastC();

int GCD(int a, int b)
{
    if(b % a == 0)
        return a;
    return GCD(b%a, a);
}

void solved()
{
    // Solve the problem here
    int x, y;
    cin >> x >> y;

    int a, b;
    a = min(x, y);
    b = max(x, y);

    cout << GCD(a, b);
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
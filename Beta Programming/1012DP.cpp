#include <bits/stdc++.h>
using namespace std;

void fastC();

double x;

void solved()
{
    // Solve the problem here
    double y[10] = {1, 0.75, 0.5, 0.25, 0.125};
    int q;
    cin >> q;

    while (q--)
    {
        for(int i=0 ; i<5 ; i++)
        {
            double a;
            cin >> a;
            x += a * y[i];
        }
    }
    cout << ceil(x);
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

/*
3
1 0 1 0 1
0 1 0 1 0
0 1 0 0 0

4
0 0 1 0 0
0 0 0 0 1
0 0 1 0 0
0 1 0 0 0
*/
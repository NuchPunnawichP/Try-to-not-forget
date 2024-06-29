#include <bits/stdc++.h>
using namespace std;

void fastC();

struct A{
    double a, b, c, d, e;
};

A s;

void solved()
{
    // Solve the problem here
    int q, a, b, c, d, e;
    cin >> q;

    while(q--)
    {
        cin >> a >> b >> c >> d >> e;

        s.a += a;
        s.b += b;
        s.c += c;
        s.d += d;
        s.e += e;
    }

    float p = s.a + s.b * 0.75 + s.c * 0.5 + s.d * 0.25 + s.e * 0.125;
    cout << ceil(p);
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
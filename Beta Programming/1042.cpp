#include <bits/stdc++.h>
using namespace std;

void fastC();

struct A{
    int x[10010], y[10010], r[10010];
};

void solved()
{
    // Solve the problem here
    int n, m, k, mx = -2e9;
    A p;

    cin >> n >> m >> k;

    for(int i=0 ; i<k ; i++)
        cin >> p.x[i] >> p.y[i] >> p.r[i];
    
    // Following X-axis
    for(int i=0 ; i<=n ; i++)
    {
        int cnt = 0;
        for(int j=0 ; j<k ; j++)
        {
            int l, r;
            l = p.x[j] - p.r[j];
            r = p.x[j] + p.r[j];

            if(i >= l and i <= r)
            {
                cnt++;
            }
        }
        mx = max(cnt, mx);
    }

    for(int i=0 ; i<=m ; i++)
    {
        int cnt = 0;
        for(int j=0 ; j<k ; j++)
        {
            int t, d;
            d = p.y[j] - p.r[j];
            t = p.y[j] + p.r[j];

            if(i >= d and i <= t)
            {
                cnt++;
            }
        }
        mx = max(cnt, mx);
    }
    cout << mx;
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
10 10 6
2 4 2
2 5 1
5 7 3
6 9 1
9 7 1
7 3 3
*/
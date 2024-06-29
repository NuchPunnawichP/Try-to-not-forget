#include <bits/stdc++.h>
using namespace std;

void fastC();

void solved()
{
    // Solve the problem here
    int a[110][110];
    int m, n;
    cin >> m >> n;

    for(int i=0 ; i<m ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i=0 ; i<m ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            int x;
            cin >> x;
            a[i][j] += x;
        }
    }

    for(int i=0 ; i<m ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
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
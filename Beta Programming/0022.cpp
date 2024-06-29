#include <bits/stdc++.h>
using namespace std;

char ans[1010][1010];

void fastC();

void solved()
{
    // Solve the problem here
    int n, m;
    cin >> n;
    
    int ch = ceil((n - 1) / 2);

    if(n%2 == 0)
        m = n - 1;
    else
        m = n;

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            if(i + j == ch)
                ans[i][j] = '*';
            else
                ans[i][j] = '-';

            if(n%2 == 0)
            {
                ans[n / 2][0] = '*';
                ans[n / 2][m - 1] = '*';
                continue;
            }

            if(j > ch && i != 0)
            {
                if(ans[i - 1][j - 1] == '*')
                    ans[i][j] = '*';
            }

            if(i > ch && j != 0)
            {
                if(ans[i - 1][j - 1] == '*')
                    ans[i][j] = '*';
            }
        }
    }

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            cout << ans[i][j];
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

/*
*/
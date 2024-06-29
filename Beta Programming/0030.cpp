#include <bits/stdc++.h>
using namespace std;

char s[1000000000];

void fastC();

void solved()
{
    // Solve the problem here
    cin >> s;

    int ln = strlen(s);
    int a3 = 0;

    for(int i=0 ; i<ln ; i++)
    {
        a3 += int(s[i]);
        a3 %= 3;
    }
    cout << a3 % 3 << " ";

    int oa11 = 0, ea11 = 0;

    int ch = (ln%2 == 0)? 0:1;

    for(int i=0 ; i<ln ; i++)
    {
        int n = s[i] - '0';

        if(ch == 0)
        {
            ea11 += n;
            ea11 %= 11;
            ch = 1;
        }
        else if(ch == 1)
        {
            oa11 += n;
            oa11 %= 11;
            ch = 0;
        }
    }
    int ans = (ea11 - oa11) * (-1);
    if(ans < 0)
        ans += 11;

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
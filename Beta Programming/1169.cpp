#include <bits/stdc++.h>
using namespace std;

void fastC();

void solved()
{
    // Solve the problem here
    char s[210];
    stack<char> st;

    cin >> s;
    
    int ln = strlen(s), cnt = 0;

    for(int i=0 ; i<ln ; i++)
    {
        if(st.empty())
        {
            if(s[i] != ')')
            {
                st.push(s[i]);
            }
            else
            {
                cnt += 1;
            }
        }
        else
        {
            if(st.top() == '(' and s[i] == ')')
            {
                st.pop();
            }
            else
                st.push(s[i]);
        }
    }

    while (!st.empty())
    {
        cnt++;
        st.pop();
    }
    cout << cnt;
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
#include <bits/stdc++.h>
using namespace std;

void fastC();

map<char, int> m;

void solved()
{
    // Solve the problem here
    int n[5];
    for(int i=0 ; i<3 ; i++)
        cin >> n[i];
    
    char s[5];
    cin >> s;

    sort(n, n + 3);

    m['A'] = n[0];
    m['B'] = n[1];
    m['C'] = n[2];

    for(int i=0 ; i<3 ; i++)
        cout << m[s[i]] << " ";
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
#include <bits/stdc++.h>
using namespace std;

void fastC();

void solved()
{
    // Solve the problem here
    //cout << int('A') << " " << int('Z') << "\n" << int('a') << " " << int('z') << "\n";

    char s[10100];
    cin >> s;

    int ln = strlen(s), ch1 = 0, ch2 = 0;
    for(int i=0 ; i<ln ; i++)
    {
        if( int(s[i]) >= 65 && int(s[i]) <= 90)
            ch1 = 1;
        if( int(s[i]) >= 97 && int(s[i]) <= 122)
            ch2 = 1;
    }

    if(ch1 && ch2)
        cout << "Mix";
    else if(ch1)
        cout << "All Capital Letter";
    else if(ch2)
        cout << "All Small Letter";
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
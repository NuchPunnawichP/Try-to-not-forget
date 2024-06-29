#include <bits/stdc++.h>
using namespace std;

void fastC();

void solved()
{
    // Solve the problem here
    int a, b, c;
    cin >> a >> b >> c;

    int sc = a + b + c;

    if(sc >= 80)
        cout << "A";
    else if(sc >= 75)
        cout << "B+";
    else if(sc >= 70)
        cout << "B";
    else if(sc >= 65)
        cout << "C+";
    else if(sc >= 60)
        cout << "C";
    else if(sc >= 55)
        cout << "D+";
    else if(sc >= 50)
        cout << "D";
    else
        cout << "F";
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
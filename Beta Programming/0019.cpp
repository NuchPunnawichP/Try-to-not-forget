#include <bits/stdc++.h>
using namespace std;

void fastC();

struct A{
    int si[15], bi[15];
};

void gen(int n, vector<string>& result, string current = "")
{
    if(current.size() == n)
    {
        result.push_back(current);
        return;
    }
    gen(n, result, current + '0');
    gen(n, result, current + '1');
}

void solved()
{
    // Solve the problem here
    int n, ss=0, bb=0, mn = 2e9;
    cin >> n;

    A p;
    for(int i=0 ; i<n ; i++)
    {
        cin >> p.si[i] >> p.bi[i];
    }

    string ch(n, '0');

    vector<string> bina;
    gen(n, bina);
    
    for (const string& s : bina)
    {
        ss = 1;
        bb = 0;

        int id = 0;

        for(auto x:s)
        {
            if(ch != s)
            {
                int kk = x - '0';
                if(kk != 0)
                    ss *= (kk * p.si[id]);
                bb += (kk * p.bi[id]);
            }
            //cout << ss << " " << bb << " " << abs(ss - bb) << "\n";
            id++;
        }
        //cout << ss-bb << "         " << s << "       ss-bb\n";
        if(ch != s)
            mn = min(mn, abs(ss - bb));
    }
    cout << mn;
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
1
3 10

2
3 8
5 8

4
1 7
2 6
3 8
4 9
*/
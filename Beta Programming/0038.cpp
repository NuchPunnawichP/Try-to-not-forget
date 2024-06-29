#include <bits/stdc++.h>
using namespace std;

void fastC();

class dic{
    public:
    char s[40];

    dic(const string& val) {
        strncpy(s, val.c_str(), sizeof(s) - 1);
        s[sizeof(s) - 1] = '\0';
    }

    bool operator<(const dic& other) const {
        return strcmp(s, other.s) < 0;
    }
};

void solved()
{
    // Solve the problem here
    int n;
    cin >> n;

    vector<dic> words;
    for(int i=0 ; i<n ; i++)
    {
        char t[40];
        cin >> t;
        words.push_back(dic(t));
    }

    sort(words.begin(), words.end());

    if (!words.empty())
    {
        cout << words[0].s << endl;
        for (size_t i = 1; i < words.size(); ++i)
        {
            if (strcmp(words[i].s, words[i - 1].s) != 0)
            {
                cout << words[i].s << endl;
            }
        }
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
4
toppykung
krittisakchaiyakul
noob
nakornpathom

6
mai
hen
longsob
ma
pid
sala

6
maidai
leoi
maidai
tong
maidai
nakornpathom
*/
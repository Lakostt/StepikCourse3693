#include <bits/stdc++.h>
using namespace std;

#define ios_b                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

typedef long long ll;
typedef long double ld;

void solve()
{
    string s;
    cin >> s;
    int add = 1;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (add)
        {
            if (s[i] == '1')
                s[i] = '0';
            else
            {
                add = 0;
                s[i] = '1';
            }
        }
    }

    if (add)
        cout << '1';

    cout << s << endl;
}

int main()
{
    ios_b;
#ifdef _DEBUG
    freopen("input-1.txt", "r", stdin);
    //freopen("output-1.txt", "w", stdout);
#endif
    solve();
    return 0;
}

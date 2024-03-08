// اذكر الله
// صلِ على خير خلق الله محمد

/*
 * Author: Jamika78
 */

#include "bits/stdc++.h"

using namespace std;

#define cin(vv)          \
    for (auto &e : (vv)) \
        cin >> e;
#define cout(vv)         \
    for (auto &e : (vv)) \
        cout << e << ' ';

#define sz(vv) (ll) vv.size()
#define ll long long
#define ld long double
#define mod ((ll)1e17 + 5)

void jamika78_()
{
    cin.tie(nullptr)->sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
#endif
}

void s0lve()
{
    int n, m;
    cin >> n >> m;
    int freq[m + 1] = {0};
    int  x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        freq[x]++;
    }
 
    for (int i = 1; i <= m; i++)
        cout << freq[i] << '\n';
}

signed main()
{
    jamika78_();
    int tc = 1;
    // cin >> tc;
    while (tc--)
        s0lve();
    return 0;
}

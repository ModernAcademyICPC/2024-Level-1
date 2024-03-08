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
    ll n, q;
    cin >> n >> q;
    ll pref[n], x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (i == 0)
            pref[i] = x;
        else
            pref[i] = pref[i - 1] + x;
    }
    ll l, r;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r;
        l--, r--;
        if (l == 0)
            cout << pref[r] << '\n';
        else
            cout << pref[r] - pref[l - 1] << '\n';
    }
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

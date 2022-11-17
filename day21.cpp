#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
#define print(out) cout << out << endl;
#define in(out) \
    ll out;     \
    cin >> out;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define lcm(A, B) (A / __gcd(A, B)) * B
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define mp make_pair
#define pb push_back

void I()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void solve()
{
}
int main()
{
    I();
    fast_cin();
    ll t;
    cin >> t;
    while (t--)
    {
        in(n);
        in(q);
        vector<vector<int>> A(60, vector<int>(n + 1, 0));
        v64 num;
        
        ll s = 1;
        for (int i = 1; i <= n; i++)
        {
            in(x);
            int k = 0;
            while (x >> k)
            {
                A[k][i] = (x >> k) & 1;
                k++;
            }
        }
            for (int i = 0; i < 60; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    A[i][j + 1] += A[i][j];
                }
            }

            while (q--)
            {
                ll k;
                ll l1;
                ll r1;
                ll l2;
                ll r2;
                cin >> k >> l1 >> r1 >> l2 >> r2;

                ll s1 = A[k][r1] - A[k][l1-1];
                ll u1 = r1 - l1 + 1 - s1;
                ll s2 = A[k][r2] - A[k][l2-1];
                ll u2 = r2 - l2 + 1 - s2;
                cout<<((s1*u2)+(u1*s2))<<endl;
                
            }
        
    }
    return 0;
}
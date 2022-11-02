#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

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
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

int solve(vector<int> &single, int check, map<int, int> &m, int index)
{
    for (int i = 0; i < single.size(); i++)
    {
        if ((check ^ single[i]) <= 1)
        {
            continue;
        }
        else
        {
            // cout << "Index = " << index << endl;
            if (index >= 2)
            {
                if (m[check] < m[single[i]])
                {
                    auto it = find(single.begin(), single.end(), check);
                    m[check] = 0;
                    single.erase(it);
                }
                else
                {
                    m[single[i]] = 0;
                    single.erase(single.begin() + i);
                }
            }
            return 1;
        }
    }
    return 0;
}
int main()
{
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
    fast_cin();
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> m;
        vector<int> a;
        int max = INT_MAX;
        vector<int> single;
       
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            a.pb(c);
            m[c]++;
            if (m[c] == 1)
            {
                single.pb(c);
            }
        }
        sort(all(single));
        vector<int> to_delete;
        //
        for (int i = 0; i < single.size(); i++)
        {
            int temp = single[i];
            for (int j = 0; j < single.size(); j++)
            {
                if ((temp ^ single[j]) > 1 && i != j)
                {
                    if (m[temp] <= m[single[j]])
                    {
                        if (find(to_delete.begin(), to_delete.end(), temp) == to_delete.end())
                            to_delete.pb(temp);
                    }
                }
            }
        }
            int count = 0;
            for (int i = 0; i < to_delete.size(); i++)
            {
                cout<<to_delete[i]<<" ";
                count += m[to_delete[i]];
            }cout<<endl;

            cout << count << endl;
    }
        return 0;
    }
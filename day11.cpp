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
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
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

int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string QA;
        cin >> QA;
        int A = 0;
        int Q = 0;
        if(QA[n-1]=='Q')
        {
            cout<<"NO"<<endl;
            continue;
        }
        int check = 0;
        for(int i =0;i<n;i++){
            if(QA[i]=='Q'){
            Q++;
            }else{
                A++;
            }
            if(Q<A){
                cout<<"NO"<<endl;
                check++;
                break;
            }
        }
        if(!check){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
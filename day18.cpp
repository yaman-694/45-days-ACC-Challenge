#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mp make_pair
#define pb push_back
 

void solve(){
}
int main()
{
    // freopen("input.txt", "r", stdin);

    // // Printing the Output to output.txt file
    // freopen("output.txt", "w", stdout);
    fast_cin();
    ll t;
    cin >> t;
    while(t--){
        ll n;cin>>n;
        v64 num;
        for(int i=0 ;i<n;i++){
            ll x;cin>>x;
            num.push_back(x);
        }

        if(num[0]==num[n-1])
        {
            cout<<"YES"<<endl;
            continue;
        }
        else if(num[1]==num[n-1]){
            cout<<"YES"<<endl;
            continue;
        }
        else if(num[0]==num[n-2]){
            cout<<"YES"<<endl;
            continue;
        }
        ll index = n-1;

        while(0<=index){
            if(num[index]==num[0]){
                break;
            }index--;
        }
        if(num[index+1]==num[n-1]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
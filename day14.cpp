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
    fast_cin();
    ll t;
    cin >> t;
    while(t--){
        int n;cin>>n;
        string ban="";
        if(n==1){
            cout<<1<<endl;
            cout<<1<<" "<<2<<endl;
            continue;
        }
        for(int i = 0;i<n;i++){
            ban+="ban";
        }
        vector<pair<int,int>> swaping;
        int i = 1;
        int j = ban.size()-1;
        
        while(i<j){
            if(ban[i]=='a'&&ban[j]=='n'){
                pair<int,int> temp;
                // cout<<"enter"<<endl;
                temp.first = i+1;
                temp.second = j+1;
                swaping.push_back(temp);
                i++;
                j--;
            }
            else {
                i++;
                j--;
            }
            

        }
        cout<<swaping.size()<<endl;
        for(auto i:swaping){
            cout<<i.first<<" "<<i.second<<endl;
        }

    }
    return 0;
}
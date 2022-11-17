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
#define print(out) cout<<out<<endl;
#define in(out) ll out; cin>>out;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define lcm(A,B) (A/__gcd(A,B))*B
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mp make_pair
#define pb push_back
 
void vecprint(vector<string> ans){
    for(auto i:ans){
     
        cout<<i<<" ";
    }
}

void I() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    #endif
}
class Solution {
public:
    void solve(vector<string> &ans,string open,string close,string &temp,int n){
        dbg(open);
        dbg(close);
        if(open.size()==0||close.size()==0){
            return;
        }

        solve(ans,open.substr(1,open.size()-1),close,temp,n);
        temp+=open[0];
        temp.pop_back();
        close+=')';
         
        solve(ans,open,close.substr(1,close.size()-1),temp,n);
        temp+=close[0];
        temp.pop_back();
        open+='(';
        ans.push_back(temp);

    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string open,close;

        for(int i=0;i<n;i++){
            open+='(';
            close+=')';
        }
        string temp;
        solve(ans,open,close,temp,n);
        return ans;
    }
};
int main()
{
    Solution s;
    int n;cin>>n;
    vector<string> ans = s.generateParenthesis(n);
    vecprint(ans);

    return 0;
}
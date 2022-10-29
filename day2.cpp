// Longest Palindromic Substring

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

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()==1){
            return s;
        }

        int maxx=0;
        vv32 dp(s.size(),v32 (s.size(),0));
        int i=0;
        while(i<s.size()){
            dp[i][i]=1;
            i++;
        }
        p32 index;
        i=0;
        int j=1;
        int track = 1;
        for(;track<s.size();i++){
            j=track;
            for(;j<s.size();j++){
                if(s[i]==s[j]&&(dp[i+1][j-1]==1||(j-1==i))){
                    if(((j-i)+1)>maxx){
                        index.first=i;
                        index.second=j;
                        maxx=(j-i)+1;
                    }
                        dp[i][j]=1;
                }
                else{
                    dp[i][j]=0;
                }
                i++;
            }
            i=-1;
            track++;
        }
        string ans = s.substr(index.first,maxx);
        if(ans.size()<1){
            return ans = s[0];
        }
        return ans;
    }
};
int main()
{

    Solution sol;
    string s;
    cin>>s;
    cout<<sol.longestPalindrome(s);  
    return 0;
}
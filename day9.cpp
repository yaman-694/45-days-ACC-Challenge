//Longest Palindrome by Concatenating Two Letter Words 
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
 

class Solution
{
public:
    int longestPalindrome(vector<string> &words)
    {
        // store the pair with reverse equal in two arrays pair1 and pair2
        map<string,int> m;
        int n = words.size();
        for(int i = 0;i<n;i++){
            m[words[i]]++;    
        }
        int ans=0;
        bool flag = false;
        for(auto i:m){
            string temp = i.first;
            reverse(temp.begin(),temp.end());

            // if word is a palindorme
            if(temp==i.first){
                if(i.second%2==0) ans+=i.second;
                else{
                    ans=ans+(i.second-1);
                    flag=true;
                }
            }
            // if the word is not palindrome
            else if(m[temp]!=0&&i.second!=0){
                ans+= (2*min(m[temp],i.second));
                m[temp]=0;
                i.second=0;
            }
        }
        if(flag){
            return 2*(ans+1);
        }
        else{
            return 2*ans;
        }
        // return ans;

        
    }
};
int main()
{
    fast_cin();
    Solution s;
    vector<string> vec = {"dd","aa","bb","dd","aa","dd","bb","dd","aa","cc","bb","cc","dd","cc"};
    // vector<string> vec = {"nn","nn","hg","gn","nn","hh","gh","nn","nh","nh"};
    // vector<string> vec = {"ur","rr","uu","uu","uu","rr"};

    cout<<s.longestPalindrome(vec);
    return 0;
}
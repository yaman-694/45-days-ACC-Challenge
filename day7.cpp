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

class Solution
{
public:
    int longestPalindrome(vector<string> &words)
    {
        // check if there is word with self palindrome
        int count_check = 0;
        string same = "";
        for (auto i : words)
        {
            if (i[0] == i[1])
            {
                same = i;
                count_check++;
                break;
            }
        }
        cout<<same<<endl;;
        // count the words in the words array
        unordered_map<string, int> m;

        for (auto i : words)
        {
            string temp = i;
            reverse(temp.begin(), temp.end());
            if (m[temp] >= 1)
            {
                m[temp]++;
            }
            else
            {
                if(m[i]!=1){
                m[i]++;
                }
            }
                // cout << i <<" "<<m[i]<< endl;
        }
        if(m[same]>1)
            --m[same];
        // if first condition is true so we can take ans with add words else only even

        int size = 0;
        for(auto i :m){
            if(i.second%2==0){
                size+=i.second;
            }
            else if((i.second-1)%2==0)
            {
                size+=(i.second-1);
            }
            cout<<i.first<<" "<<i.second<<endl;
        }
        size += count_check;
        return size * 2;
    }
};
int main()
{
    fast_cin();
    Solution sol;
    vector<string> vec = {"nn","nn","hg","gn","nn","hh","gh","nn","nh","nh"};
    cout << sol.longestPalindrome(vec);
    return 0;
}
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
    int binary(vector<int> &nums, int i, int j, int target)
    {
        int mid = (i + j) / 2;
        int l = i, e = j;
        while (l <= e)
        {
            if (nums[mid] == target)
            {
                return 1;
            }
            else if (target > nums[mid])
            {
                l = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
            mid = (l + e) / 2;
        }
        return 0;
    }
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {

        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        
        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                int temp = nums[i]+nums[j];
                temp = target - temp;
                int s = j+1,e = nums.size()-1;

                while(s<e){
                    int sum = nums[s] + nums[e];
                    if(sum == temp){
                        vector<int> temps;
                        temps.push_back(nums[i]);
                        temps.push_back(nums[j]);
                        temps.push_back(nums[s]);
                        temps.push_back(nums[e]);
                        if(find(nums.begin(),nums.end(),temps)==nums.end()){
                            ans.push_back(temps);
                        }
                        if(sum>0){
                            e--;
                        }
                        else{
                            s++;
                        }

                    }
                }
            }
        }
        return ans;
    }
};
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while (t--)
    {
    }
    return 0;
}
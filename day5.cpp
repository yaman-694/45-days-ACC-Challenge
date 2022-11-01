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
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        
        for(int i = 0;i<nums.size();i++){
            
            if(i==0||(nums[i]!=nums[i-1])){
            int lo = i+1,hi = nums.size()-1;
            int sum = -(nums[i]);
            
            while(lo<hi){
                if(nums[lo]+nums[hi]==sum){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[lo]);temp.push_back(nums[hi]);
                    ans.push_back(temp);
                    
                    while(lo<hi&&nums[lo]==nums[lo+1]) lo++;
                    while(lo<hi&&nums[hi]==nums[hi-1]) hi--;
                    lo++;
                    hi--;
                    
                }
                else if(nums[lo]+nums[hi]<sum) lo++;
                else hi--;
                
            }
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = s.threeSum(nums);
    for(auto i: ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}
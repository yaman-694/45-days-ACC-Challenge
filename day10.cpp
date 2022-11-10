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
    int threeSumClosest(vector<int>& nums, int target) {
        int ans_sum = 0;
        int ans = INT_MAX;
        sort(nums.begin(),nums.end())
;        for(int i = 0;i<nums.size();i++){
            int s = i+1;int e = nums.size()-1;
            int temp = nums[i];
            while(s<e){
                // cout<<s<<" "<<e<<endl;
                int sum = temp + nums[s]+ nums[e];
                int diff = sum - target;
               
                if(diff == 0){
                    return sum;
                }
                if(abs(diff)<ans){
                    ans=abs(diff);
                    ans_sum=sum;
                }
                if(diff<0){
                    s++;
                }
                else{
                    e--;
                }
                

            }
            
            
        }
        return ans_sum;
    }
};
int main()
{
    freopen("input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
    
    Solution s;
    v32 num = {-1,2,1,-4};
    int target = 1;
    int a = abs(-4);
    // cout<<a;
    cout<<s.threeSumClosest(num,target);

    return 0;
}
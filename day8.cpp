#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n;
	string s;
	cin>>t;
	while(t--){
	    cin>>n;
	    cin>>s;
        int ax=0,cnt=0;
        bool ans=true;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0'){
				if(cnt%2){ans=false;break;}
				cnt=0;
			}
			else{cnt++;}
	    }
		if(cnt%2)ans=false;
		if(n==1)ans=true;
        if(ans)cout<<"YES\n";
        else cout<<"NO\n";
	}
	return 0;
}
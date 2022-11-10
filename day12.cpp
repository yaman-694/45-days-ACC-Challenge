#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a;
        cin>>a;

        vector<int> A(a);
        unordered_map<int, int> map;
        for(int i = 0 ; i<a;i++){
            cin>>A[i];
           map[A[i]]++;
        }

        int b;cin>>b;
        vector<int> B(b);

        for(int i = 0; i <b;i++){
            int ll ;
            cin>>ll;
            map[ll]=0; 
        }
        
        
        
        for(int i = 0; i< a;i++)
        {
            if(map[A[i]]!=0){
                cout<<A[i]<<" ";
            }
        }
        cout<<"\n";
        
        
        
    }
}
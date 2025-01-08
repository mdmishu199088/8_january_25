#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n,x=0;cin>>n;
        bool flag=false;
        vector<char>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        for(int i=0;i<n;i++){
            if(a[i]=='1' && b[i]=='0') flag=true;
            else if(a[i]=='0' && b[i]=='1') flag =true;
        }
        if(!flag){
            for(int i=0;i<n;i++){
              if(a[i]=='1' && b[i]=='1') x++;
            }
            if(x%2==1)flag=true;
        }
        
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

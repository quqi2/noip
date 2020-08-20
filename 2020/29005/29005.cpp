#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("29005.in","r",stdin);
    freopen("29005.out","w",stdout);
    int m;
    cin>>m;
    int a[m]={0},b[m]={0},cnt,k=0;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    for(int i=0;i<m;i++){
            cnt++;
        while(a[i+1]==a[i]) i++;        
    }
    cout<<cnt<<endl;
    for(int i=0;i<m;i++){
            cout<<a[i]<<" ";
        while(a[i+1]==a[i]) i++;
    }
    return 0;
}
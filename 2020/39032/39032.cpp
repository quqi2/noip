#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("39032.in","r",stdin);
    freopen("39032.out","w",stdout);
    int m;
    cin>>m;
    int a[m]={0},b[m]={0},bcnt[m]={0},k=0;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    for(int i=0;i<m;i++){
            b[k]=a[i];
            bcnt[k]++;
        while(a[i+1]==a[i]) {
            bcnt[k]++;
            i++;
        }        
        k++;
    }
    for(int i=0;i<k;i++){
        cout<<b[i]<<" "<<bcnt[i]<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("29053.in","r",stdin);
    //freopen("29053.out","w",stdout);
    int a,b,tmp,count=0;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        tmp=i;
        while(tmp!=0){
            if(tmp%10==b){
                count++;
            }
            tmp=tmp/10;
        }
    }
    cout<<count<<endl;
    return 0;
}
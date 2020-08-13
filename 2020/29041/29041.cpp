#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("29053.in","r",stdin);
    //freopen("29053.out","w",stdout);
    int a,b,tmp,count=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        tmp=i;
        //cout<<"tmp="<<tmp<<endl;
        while(tmp!=0){
            if(tmp%10==2){
                count++;
                
            }
            tmp=tmp/10;
        }
    }
    cout<<count<<endl;
    return 0;
}
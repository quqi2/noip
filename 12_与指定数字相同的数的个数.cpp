#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d=0;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        cin>>c;
        if(c==b){
            d++;
        }
    }

    cout<<d<<endl;
    return 0;
}
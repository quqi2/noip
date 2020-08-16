#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    char code1;
    int count=0,tmp=0,code;
    cin>>a;
    tmp=(a[0]-'0')*1+(a[2]-'0')*2+(a[3]-'0')*3+(a[4]-'0')*4+(a[6]-'0')*5+(a[7]-'0')*6+(a[8]-'0')*7+(a[9]-'0')*8+(a[10]-'0')*9;
    code=tmp%11;
    if(code==10){
        code1='X';
    }
    else
    {
        code1='N';
    }
    if(code==(a[12]-'0')||code1==a[12]){
        cout<<"Right"<<endl;
        return 0;
    }
    else if(code==10){
        a[12]='X';
        cout<<a<<endl;
    }
    else
    {
        a[12]=code+'0';
        cout<<a<<endl;  
    }
    
    return 0;
}
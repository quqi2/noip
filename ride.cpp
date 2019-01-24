#include<bits/stdc++.h>
#include<string>

using namespace std;
int main(){
    int a=1,b=1,i=0;
    string comet,team;
    cin>>comet>>team;
    while(comet[i]!='\0'){
        a=a*(comet[i]-64);
        i++;  
    }
    i=0;
    while(team[i]!='\0'){
         b=b*(team[i]-64);
         i++;
    }
    if(b%47==a%47){
        cout<<"GO"<<endl;  
     }
    else{
    cout<<"STAY"<<endl;
  }
  return 0;
}
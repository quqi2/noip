#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("20001.in","r",stdin);
    freopen("20001.out","w",stdout);
    string comet,team;
    int comet1,teamnum1,comet2=1,teamnum2=1;
    cin>>comet>>team;
    for(int i=0;i<comet.size();i++){
        comet2=comet2*(int(comet[i])-64);
    }
    for(int i=0;i<team.size();i++){
        teamnum2=teamnum2*(int(team[i])-64);
    }
    if(comet2%47==teamnum2%47){
        cout<<"GO"<<endl;
    }
    else
    {
        cout<<"STAY"<<endl;
    }
    return 0;
}
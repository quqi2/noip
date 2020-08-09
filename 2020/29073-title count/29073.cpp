#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("29073.in","r",stdin);
    //freopen("29073.out","w",stdout);
    string title;
    int count=0;
    getline(cin,title);
    for(int i=0;i<title.size();i++){
        if(title[i]!='\t'&&title[i]!=' '){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
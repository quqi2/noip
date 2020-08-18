#include<bits/stdc++.h>
using namespace std;
int findfirst(string text,string keyword){
    int sizet=text.size(),sizek= keyword.size();
    for(int i=0;i<sizet;i++){
        int j;
        for(j=0;j<sizek;j++){
            if((text[i+j]- keyword[j])%32!=0){
                break;
            }
        }
        if(j==sizek){
            if(text[i-1]!=' '&&text[i+1]) break;
            return i;
        }
    }
    return -1;
} 
int main(){
    freopen("29046.in","r",stdin);
    freopen("29046.out","w",stdout);
    string text,pattern;
    getline(cin,pattern);
    getline(cin,text);
    cout<<findfirst(text,pattern);
    return 0;
}

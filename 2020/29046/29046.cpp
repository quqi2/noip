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
            if(text[i-1]==' '&&text[i+sizek]==' ')
                return i;
        }
    }
    return -1;
}

int findnext(string text,string keyword, int start){
    int sizet=text.size(),sizek= keyword.size();
    for(int i=start;i<sizet;i++){
        int j;
        for(j=0;j<sizek;j++){
            if((text[i+j]- keyword[j])%32!=0){
                break;
            }
        }
        if(j==sizek){
            if(text[i-1]==' '&&text[i+sizek]==' ')
                return i;
        }
    }
    return -1;
}

int main(){
    freopen("./29046.in","r",stdin);
    freopen("./29046.out","w",stdout);
    string text,pattern;
    getline(cin,pattern);
    getline(cin,text);
    
    int start=0,cnt=0;
    while(findnext(text,pattern,start)!=-1){
        cnt++;
        start=findnext(text,pattern,start)+1;
    }
    if(findfirst(text,pattern)==-1){
        cout<<-1<<endl;
        return 0;
    }
    cout<<cnt<<' '<<findfirst(text,pattern)<<endl;
    //cout<<findnext(text,pattern,start);
    return 0;
}

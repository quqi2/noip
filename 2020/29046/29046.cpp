#include<bits/stdc++.h>
using namespace std;
int c=0;
string uptolower(string word){
   // cout<<word<<endl;
    while(word[c]!='\0'){
        if(int(word[c])>'A'&&int(word[c])<'Z'){
            word[c]=char((word[c]+32));

        }
        c++;
    }
    return word;
}
int main(){
    // string tmp="Hello";
    // cout<<uptolower(tmp)<<endl;
    // return 0;
   string word,words,uplword,tmp;
    int count=0;
    cin>>word;
    //getline(cin,words); 
    uplword=uptolower(word);
    //cout<<uplword<<endl;
    while(cin>>words){
        cout<<words<<endl;
        tmp=uptolower(words);
        cout<<tmp<<endl;
        // cout<<uptolower(words)<<" "<<uplword<<endl;
        if(uptolower(words)==uplword){
            count++;
        }
    }
    if(count==0){
        cout<<"-1"<<endl;
        return 0;
    }
    else{
        cout<<count<<endl;
        return 0;
    }

}
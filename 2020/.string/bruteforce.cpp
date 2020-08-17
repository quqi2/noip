#include<bits/stdc++.h>
using namespace std;
int bf(string inputtext,string inputkeyword){
    int sizet=inputtext.size(),sizek=inputkeyword.size();
    
    for(int i=0;i<sizet;i++){
        int j;
        for(j=0;j<sizek;j++){
            if(inputtext[i+j]!=inputkeyword[j]) break;
        }
        if(j==sizek){
            return i;
        }
    }
    return -1;
}
int main(){
    string text="BBC ABCDAB ABCDABCDABDE",pattern="ABCDABD";
    cout<<bf(text,pattern);
    return 0;
}

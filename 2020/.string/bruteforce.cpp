#include<bits/stdc++.h>
using namespace std;
int bf(string text,string  keyword){
    int sizet=text.size(),sizek= keyword.size();
    
    for(int i=0;i<sizet;i++){
        int j;
        for(j=0;j<sizek;j++){
            if(text[i+j]!= keyword[j]) break;
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

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="BBC ABCDAB ABCDABCDABDE",p="ABCDABD";
    int index=0;
    for(int i=0;i<s.length();i++){
        for(int j=0;j<p.length();j++){
           if(s[index]==p[1]){
               /*继续匹配*/
            } 
            else
            {
                break;
            }
            
        }
        index++;
    }
}
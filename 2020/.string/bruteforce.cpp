#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="BBC ABCDAB ABCDABCDABDE",p="ABCDABD";
    int index=0,index2=0;
    for(int i=0;i<s.size()-p.size();i++){
        while(index<p.size()&&s[i+index]==p[index]){
            index++;
        }
        if(s.size()==p.size()){
            cout<<i<<endl;
            return 0;
        }

    }
    cout<<"not found"<<endl;
    return 0;
}
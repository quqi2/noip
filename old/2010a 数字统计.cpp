#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=0,count=0,j=0,l=0,r=0,x=2;
	cin>>l>>r;
    for(i=l;i<=r;i++)
	{
		j=i;
		while(j!=0){
		    if(j%10==x){
		        count++;
		    }
		j=j/10;
	}
	cout<<count<<endl;
}
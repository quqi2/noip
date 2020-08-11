#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("20003.in","r",stdin);
    freopen("20003.out","w",stdout);
    int count[7]={0},dayscnt=0,a,month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},year,month2;
    cin>>a;
    	for(int year=1900;year<=1900+a-1;year++){
            for(month2=1;month2<=12;month2++){
                if((year%4==0&&year%100!=0)||year%400==0){
			        month[2]=29;
		        }
                else
                {
                    month[2]=28;
                }
                
                for(int day=1;day<=month[month2];day++){
				    dayscnt++;
				    if(day==13){
					    count[dayscnt%7]++;
				    }
                }
                
            }
        }
    cout<<count[6]<<" "<<count[0]<<" "<<count[1]<<" "<<count[2]<<" "<<count[3]<<" "<<count[4]<<" "<<count[5]<<endl;
    return 0;
}
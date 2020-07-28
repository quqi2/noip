#include<bits/stdc++.h>
using namespace std;
int main(){
  int monthday[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},days=0,month=0,weekday[9]={0},n=0,year=1900;
  cin>>n;
  for(year=1900;year<=1900+n-1;year++){
    for(month=1;month<=12;month++){
      if(year%4==0&&year%100!=0||year%400==0){
           monthday[2]=29;
        }
        else{
          monthday[2]=28;
        }
      for(int day=1;day<=monthday[month];day++){
        days++;
        if(day==13)
            weekday[days%7]++;
      }
    }
  }
  cout<<weekday[6]<<" "<<weekday[0]<<" "<<weekday[1]<<" "<<weekday[2]<<" "<<weekday[3]<<" "<<weekday[4]<<" "<<weekday[5];
  return 0;
}
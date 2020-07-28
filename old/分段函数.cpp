#include<iostream>
using namespace std;
int main(){
    double n,y;
    cin>>n;
    if(0<=n&&n<10){
        if(0<=n&&n<5){
            y=-n+2.5;
        }
        else{
            y=2-1.5*(n-3)*(n-3); 
        }
    }
    else{   
        y=n/2-1.5;
    }
    printf("%.3lf\n",y);
    return 0;
}
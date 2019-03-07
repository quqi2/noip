#include<bits/stdc++.h>
using namespace std;
int main() {
    double a,b,c,x;
    cin>>a>>b>>c;
    if(b*b==4*a*c)
    printf("x1=x2=%.5f",(-b + sqrt(b*b-4*a*c))/(2*a));
    else {
        if(b*b>4*a*c)
            printf("x1=%.5f;x2=%.5f",(-b + sqrt(b*b-4*a*c))/(2*a), (-b - sqrt(b*b-4*a*c))/(2*a));
        else {
            x=(-b / (2*a));
            if(x==-0.00000)
                x=0;
            printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",x,(sqrt(4*a*c-b*b) / (2*a)),x,(sqrt(4*a*c-b*b) / (2*a)));
        }
    }
}
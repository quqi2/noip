#include <iostream>
using namespace std;
int main()
{
	int n,i,j,t,a[10005];
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<n;i++)
		for(j=i+1;j<=n;j++)
			if(a[j]<a[i])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
	for(i=1;i<=n;i++)
		cout<<a[i]<<" ";
	return 0;
}

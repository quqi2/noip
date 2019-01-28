#include <iostream>
using namespace std;
int main()
{
	int n,i,j,t,a[10005];
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<n;i++)
		for(j=n;j>i;j--)
			if(a[j]<a[j-1])
			{
				t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
	for(i=1;i<=n;i++)
		cout<<a[i]<<" ";
	return 0;
}

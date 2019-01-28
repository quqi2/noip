#include <iostream>
using namespace std;
int main()
{
	int i,j,n,a[10005],minn,minp,t;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<n;i++)
	{
		minn=a[i];
		for(j=i+1;j<=n;j++)
			if(a[j]<minn)
			{
				minn=a[j];
				minp=j;	
			}
		t=a[i];a[i]=a[minp];a[minp]=t;
	}
	for(i=1;i<=n;i++) 
		cout<<a[i]<<" ";
	return 0;
}

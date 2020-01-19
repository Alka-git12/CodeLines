#include<bits/stdc++.h>
using namespace std;
#define max 100000000
int a[max];
int main()
{
	
	int l,r;
	cin>>l>>r;
	a[1]=1;
	for(int i=2;i*i<=max;i++)
	{
		if(a[i]==0)
		for(int j=i*i;j<=max;j+=i)
		a[j]=1;
	}
	int cnt=0;
	for(int i=l;i<=r;i++)
	{
		if(a[i]==0)
		cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}

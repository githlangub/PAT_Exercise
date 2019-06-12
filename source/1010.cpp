#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	unsigned n;
	cin>>n;
	bool nature[n+1];
	for(int i=0;i<n+1;i+=2)
	{
		nature[i]=false;
		nature[i+1]=true;
	}
	for(int i=3;i<=sqrt(n);i+=2)
	{
		if(nature[i])
			for(int j=i*i;j<n+1;j+=2*i)
				nature[j]=false;
	}
	for(int i=0;i<n+1;i++)
		if(nature[i])
			cout<<i<<' ';
	cout<<endl;
	return 0;
}

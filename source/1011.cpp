#include<iostream>
using namespace std;
int main()
{
	unsigned t;
	cin>>t;
	long long a[t],b[t],c[t];
	bool result;
	for(unsigned i=0;i<t;i++)
		cin>>a[i]>>b[i]>>c[i];
	for(unsigned i=0;i<t;i++)
	{
		result=(a[i]+b[i]>c[i])?1:0;
		if(result)
			cout<<"Case #"<<i+1<<": "<<"true"<<'\n';
		else
			cout<<"Case #"<<i+1<<": "<<"false"<<'\n';
	}
	cout<<endl;
	return 0;
}

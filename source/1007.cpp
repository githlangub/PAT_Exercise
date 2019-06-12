#include<iostream>
using namespace std;
int main()
{
	bool judge(unsigned );
	unsigned n=99999,ppre=2,pnext=3,count=0;
	//cin>>n;
	while(pnext<=n)
	{
		if((pnext-ppre)==2)
			count+=1;
		ppre=pnext;
		do
			pnext+=2;
		while(!(judge(pnext)));
	}
	cout<<count<<endl;
	return 0;
}
bool judge(unsigned num)
{
	for(int i=3;i<=num/2;i+=2)
		if(!(num%i))
			return 0;
	return 1;
}

#include<iostream>
using namespace std;
int main()
{
	unsigned num,temp;
	cin>>num;
	for(int i=0;i<(num/100);i++)
		cout<<'B';
	temp=num%100;
	for(int i=0;i<(temp/10);i++)
		cout<<'S';
	temp%=10;
	for(int i=1;i<=temp;i++)
		cout<<i;
	return 0;
}

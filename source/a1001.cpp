#include<iostream>
#include<cmath>
#include<stack>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	int sum=a+b;
	unsigned digit_count=0;
	if(sum<0)
	{
		cout<<'-';
	}
	stack<char> sep;
	do
	{
		sep.push(abs(sum%10)+0x30);
		digit_count++;
		sum/=10;
		if(digit_count%3==0&&sum!=0)
		{
			sep.push(',');
		}
	}while(sum!=0);
	while(sep.size())
	{
		cout<<sep.top();
		sep.pop();
	}
	cout<<endl;
	
	return 0;
}

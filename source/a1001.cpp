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
	stack<int> sep;
	do
	{
		sep.push(abs(sum%10));
		sum/=10;
	}while(sum!=0);
	while(sep.size())
	{
		cout<<sep.top();
		sep.pop();
		digit_count++;
		if(digit_count%3==0&&sep.size()!=0)
		{
			cout<<',';
		}
	}
	cout<<endl;
	
	return 0;
}

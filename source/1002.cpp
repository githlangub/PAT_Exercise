#include<iostream>
using namespace std;
int main()
{
	void getbit(unsigned );
	char num[101]={0};
	unsigned sum=0;
	cin>>num;
	for(int i=0;num[i]!=0;i++)
		sum+=(num[i]-0x30);
	getbit(sum);
	cout<<endl;
	return 0;
}
void getbit(unsigned temp)
{
	int bit=temp%10;
	temp/=10;
	if(temp)
	{
		getbit(temp);
		cout<<' ';
	}
	switch(bit)
	{
		case 0: cout<<"ling";break;
		case 1: cout<<"yi";break;
		case 2: cout<<"er";break;
		case 3: cout<<"san";break;
		case 4: cout<<"si";break;
		case 5: cout<<"wu";break;
		case 6: cout<<"liu";break;
		case 7: cout<<"qi";break;
		case 8: cout<<"ba";break;
		case 9: cout<<"jiu";break;
		default: ;
	}
}

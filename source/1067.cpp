#include<iostream>
using namespace std;
int main()
{
	bool compare(char* ,char* );
	char correct[21]={0},passwd[21]={0};
	unsigned n;
	cin>>correct>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<21;j++)
			passwd[j]={0};
		cin>>passwd;
		if(passwd[0]=='#')
			return 0;
		if(!(compare(correct,passwd)))
			cout<<"Wrong password: "<<passwd<<endl;
		else
		{
			cout<<"Welcome in"<<endl;
			return 0;
		}
	}
	cout<<"Account locked"<<endl;
	return 0;
}
bool compare(char std[21],char test[21])
{
	for(int i=0;i<20;i++)
		if(test[i]!=std[i])
			return 0;
	return 1;
}

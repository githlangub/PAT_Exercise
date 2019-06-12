#include<iostream>
using namespace std;
typedef struct Student
{
	char name[11];
	char number[11];
	unsigned point;
	//Student *next;
}student;
int main()
{
	int n,int max=0,min=0;
	cin>>n;
	student stu[n];
	for(int i=0;i<n;i++)
	{
		cin>>stu[i].name;
		cin>>stu[i].number;
		cin>>stu[i].point;
		if(stu[i].point>stu[max].point)
			max=i;
		if(stu[i].point<stu[min].point)
			min=i;
	}
	cout<<stu[max].name<<' '<<stu[max].number<<endl;
	cout<<stu[min].name<<' '<<stu[min].number<<endl;
	return 0;
}

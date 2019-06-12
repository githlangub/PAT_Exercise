#include<iostream>
#include<vector>
using namespace std;

class Term
{
	public:
		double coefficent;
		unsigned exponent;
};

int main()
{
	vector<Term> poly_A,poly_B;

	//输入
	int k;
	cin>>k;
	for(int i=1;i<=k;i++)
	{
		Term term_i;
		cin>>term_i.exponent>>term_i.coefficent;
		poly_A.push_back(term_i);
	}
	for(int i=1;i<=k;i++)
	{
		Term term_i;
		cin>>term_i.exponent>>term_i.coefficent;
		poly_B.push_back(term_i);
	}

	//排序
	for(int i=1;i<poly_A.size();i++)
	{
		for(int j=1;j<=poly_A.size()-i;j++)
		{
			if(poly_A.at(j-1).exponent>poly_A.at(j).exponent)
			{
				Term temp=poly_A.at(j-1);
				poly_A.at(j-1)=poly_A.at(j);
				poly_A.at(j)=temp;
			}
		}
	}
	for(int i=1;i<poly_B.size();i++)
	{
		for(int j=1;j<=poly_B.size()-i;j++)
		{
			if(poly_B.at(j-1).exponent>poly_B.at(j).exponent)
			{
				Term temp=poly_B.at(j-1);
				poly_B.at(j-1)=poly_B.at(j);
				poly_B.at(j)=temp;
			}
		}
	}

	//插值
	int pos_A=0,pos_B=0;
	vector<Term> poly_sum;
	while(pos_A!=poly_A.size()-1||pos_B!=poly_B.size()-1)
	{
		if(poly_A.at(pos_A).exponent<=poly_B.at(pos_B).exponent)
		{
			poly_sum.push_back(poly_A.at(pos_A));
			pos_A++;
		}
		else
		{
			poly_sum.push_back(poly_B.at(pos_B));
			pos_B++;
		}
	}

	//归并
	for(int i=0;i<poly_sum.size()-1;)
	{
		if(poly_sum.at(i+1).exponent==poly_sum.at(i).exponent)
		{
			poly_sum.at(i).coefficent+=poly_sum.at(i+1).coefficent;
			poly_sum.erase(i+1);
		}
		else
		{
			i++;
		}
	}
	
	for(int i=0;i<poly_A.size();i++)
	{
		cout<<poly_A.at(i).exponent<<' '<<poly_A.at(i).coefficent<<' ';
	}
	cout<<endl;

	return 0;
}

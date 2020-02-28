#include <iostream>
using namespace std;
struct info
{
	string name;
	int roll_no;
};

int main()
{
	int a;
	cout<<"data for how many students do you want to enter?"<<endl;
	cin>>a;
	info std1[a];
	for(int  i=0;i<a;i++)
	{
		
		cin>>std1[i].name;
		cin>>std1[i].roll_no;
	}
	
}

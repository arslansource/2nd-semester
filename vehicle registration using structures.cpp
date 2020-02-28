#include <iostream>
using namespace std;
struct  vehicleid
{
	string owner_name;
	int registration_number;
	string company_name;
	int model;
};

int main()
{
	int a;
	cout<<"For How many Vehicles, The data you want to enter: ";
	cin>>a;
	vehicleid no[a];
	for(int i=1;i<=a;i++)
	{
		cout<<"Enter Vehicle Owner Name: "<<endl;
		cin>>no[i].owner_name;
		cout<<"Enter Vehicle Regstration Number: "<<endl;
		cin>>no[i].registration_number;
		cout<<"Enter Vehicle Company Name: "<<endl;
		cin>>no[i].company_name;
		cout<<"Enter Vehicle Model: "<<endl;
		cin>>no[i].model;
	}
}

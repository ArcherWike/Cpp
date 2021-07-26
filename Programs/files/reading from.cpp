#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
string name, hobbies, device_model, date;

int main()
{	

	string line;
	int nr=1;
	
	fstream plik;
	plik.open("save_inf.txt",ios::in);
	
	if(plik.good()==false)
	{
		cout<<"File does not exist!";
		exit(0);
	}

	while(getline(plik, line))
	{
		switch(nr)
		{
			case 1:	name = line; break;
			case 2: hobbies = line; break;
			case 3: device_model = line; break;
			case 4: date = line; break;
		}
		nr++;	
	}
	plik.close();
	
	cout<<name<<endl;
	cout<<hobbies<<endl;
	cout<<device_model<<endl;
	cout<<date;
		

	
	return 0;
}

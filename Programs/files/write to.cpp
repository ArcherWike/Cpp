#include <iostream>
#include <fstream>


using namespace std;
string name, hobbies, device_model, date;

int main()
{
	cout<<"enter your name: ";	cin>>name;
	cout<<"enter your hobbies: ";	cin>>hobbies;
	cout<<"enter your device model: ";	cin>>device_model;
	cout<<"enter date: ";	cin>>date;
	
	fstream plik;
	plik.open("save_inf.txt",ios::out);
	
	plik<<name<<endl;
	plik<<hobbies<<endl;
	plik<<device_model<<endl;
	plik<<date;
	
	plik.close();
	
	return 0;
}

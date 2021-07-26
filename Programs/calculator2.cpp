#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

float a,b;
char select;

int main()
{
	
	cout<<"enter two numbers " ;
	cin>>a>>b;
	for(;;)
	{
	cout<<"Your number: "<<a<<" ,"<<b;
	cout<<endl<<"what should I do?"<<endl;
	cout<<"1-> add"<<endl;
	cout<<"2-> remove"<<endl;
	cout<<"3-> divide"<<endl;
	cout<<"4-> multiply"<<endl;
	cout<<"5-> Exit"<<endl;
	cout<<endl;
	select=getch();

		
	switch(select)
	{
		case '1':
			{
				cout<<"the sum of your numbers is "<<a+b;
				break;
			}
		case '2':
			{
				if (a>=b)
				{
					cout<<"the difference between your numbers is "<<a-b;
					break;	
				}	else
				{
					cout<<"the difference between your numbers is "<<b-a;
					break;
				}
				
			}
		case '3':
			if (b==0)	{
			cout<<"Error! can't be divided by zero";
			break;}		
			else 
			{
				cout<<"division is "<<a/b;
				break;
			}
		case '4':
			{
				cout<<"multiplication is "<<a*b;
				break;
			}
		case '5':
			{
				exit(0);
			}
		default: cout<<"#Error!#"<<endl<<"there is no such option!";
	}
	getchar();getchar();
	system("cls");
	}
	return 0;
}

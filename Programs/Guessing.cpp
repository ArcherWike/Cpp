#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

main()

{
	srand(time(NULL));
	
	int result, number, attempt=1;
	bool go= false;
	result = rand()%100+1;

	cout<<"Welcome! I thought of a number in the range of 1..100"<<endl
	<<"You'll guess what the number is?"<<endl;
	

	
	for(int i=1; i<5; i++)
	{
		cout<<"Enter a number: ";
		cin>>number;
		if(number<1)
		{
			cout<<"number is in the range of 1 to 100! "<<endl;
			cout<<number<<" is too small! "<<endl;
			cout<<"My number is "<<result;
			go = true;
			break;
		}	if (number>100)
		{
			cout<<"number is in the range of 1 to 100! "<<endl;
			cout<<number<<" is too many! "<<endl;
			cout<<"My number is "<<result;
			go = true;
			break;
		}
		if(number==result)
	{
		cout<<"Very well! yes it is this number"<<endl<<
		"You succeeded guess "<<attempt<<" in trying times!";
		go = true;
		break;
	} else {
		if (number < result){
			cout<<"too small number"<<endl;
			attempt+=1;
			continue;
		} else {
			cout<<"too many"<<endl;
			attempt+=1;
			continue;
		}
		
	}
	}
	getchar();getchar();
	
	if (!go)
		{
		cout<<"You have used all attempts to try! "<<endl;
		cout<<"My number is "<<result;
		}
	return 0;
}

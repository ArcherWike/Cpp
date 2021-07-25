#include <iostream>
#include <windows.h>

using namespace std;
  
int main()
{
	cout<<"		Countdown!"<<endl;
	Sleep(300);
	
    for (int i=10; i>=0; i--)
    {
		cout <<"	"<< i << endl;
        Sleep(1000);
    }
    
    cout<<"			GO!";
    
    return 0;
}

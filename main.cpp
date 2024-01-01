#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void places();

int main() {
	
	places();
	
	return 0;
}

void places()
{
	char arr[10][10];
	srand(time(0));
	int x = rand() % 10;
	int y = rand() %10;
	
	cout << x;
	cout << y;
	cout << endl;
	
	for (int line=0 ; line<10 ; line++)
	{
		for(int i=0 ; i<10 ; i++)
		{
			cout << " ---" ;
		}
		cout << endl;
		
		for (int i=0 ; i<10 ; i++)
		{
			for (int k=0 ; k<10 ; k++)
			{
				
				for (int m=0 ; m<10 ; m++)
				{
					if (x==i && y==line)
				
					{
					cout << "| " << "*"<< " ";	
					}
					else 
					{
						cout << "|   ";
					}
					break;
				}
				break;
			}
		}
		cout << "|";
		cout << endl ;	
	}	
	cout << " --- --- --- --- --- --- --- --- --- ---";
}
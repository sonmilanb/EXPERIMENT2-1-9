#include <iostream>

using namespace std;

int main()
{
	int r, c; //r = rows, c = columns
	bool coaster = false; 
    
    do 
	{
		cout << "How many rows: ";		cin >> r;
    	cout << "How many columns: ";	cin >> c;
    	
    	
		
			{
   		 		for (int a = 0; a < r; a++) 
    				{
   		 				cout << "\n*";
 					  		for (int b = 1; b < c; b++) 
    							{
    								cout << "*";
								}
					}
			}
		
		cout << "\n\n";
		
	} while (!coaster); 
    

    return 0;
}

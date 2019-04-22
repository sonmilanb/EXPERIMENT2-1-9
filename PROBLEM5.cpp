#include <iostream>

using namespace std;

int main()

{
	int x;
	
	cout << "Counting..." << endl;	

	for (x = 1; x < 10; x++) 
	
		{
			cout << x << ",";
		}
	
	for (x = 10; x >= 10, x <= 30; x+=2) 
	
		{
			cout << x << ",";
		}
		
	cout << "\b";
	cout << " "; 
	

	return 0;
}

#include <iostream>


using namespace std;

int main()

{
	int n1 = 0, n2 = 1, n3, n4 = 2, n5 = 2 + 20; 

    cout << "Fibonacci number:\n";
	cout << n1 << "," << n2 << ",";
	
    for (n4; n4 < n5; n4++) 
    
    	{
        	n3 = n1 + n2;
        	n1 = n2; 
        	n2 = n3; 
			cout << n3 << ",";
    	}
		
	cout << "\b";
	cout << " ";
	

	return 0;
}

#include <iostream>


using namespace std;

int main()

{
	int g;

	cout << "How many gallons of water have you consumed based on the meter reading? "; 
	cin >> g;
	
	if (g < 0)
	
	cout << "\nInvalid amount! Please run the program again and enter a valid value to proceed to payment."; 
	
	else
	
		{
			float dC = 35, cC = 1.10, tC = dC + (cC * g), tCL = tC + 20, aP; 
	
			cout << "How much have you paid? ";
			cin >> aP;
	
			if (aP < tC) 
	
				{
					cout << "\nOOF. Your water bill costs P" << tCL << ", including an additional late charge fee of P20. \nPlease pay proper amount: ";
					cin >> aP;
			
					if (aP < tCL) 
	
						{	
							cout << "\nInvalid payment! Please run the program again to pay right amount." << endl; 
						}
				
					else
					
						{	
							cout << "\nPayment accepted! You have a total change of P" << aP - tCL << "." << endl; 
						}
				}
	
			else
			
				{
					cout << "\nPayment accepted! Your water bill costs P" << tC << " with a total change of P" << aP - tC << "." << endl; 
				}
		}

	return 0;
}

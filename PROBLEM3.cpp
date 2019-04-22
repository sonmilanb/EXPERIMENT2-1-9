#include <iostream>
#include <iomanip> 
#include <cmath> 


using namespace std;

int main()

{
	int x, y;
	float V;
	const float z = 2.5; 

	cout << "Enter value for x: ";	cin >> x; 
	cout << "Enter value for y: ";	cin >> y; 
	
	if (x == 1 && 1 < y < 5) 
		{
			V = x * y * z;
			cout << "\nThe value for V is\n" << setw(10) << setprecision(2) << V;
		}
		
	else if (x == 1 && y >= 5) 

		{
			V = x + (y / z);
			cout << "\nThe value for V is\n" << setw(10) << setprecision(2) << V;
		}
		
	else if (x == 2 && y <= 5) 
		{
			V = abs((x - y) / z);
			cout << "\nThe value for V is\n" << setw(10) << setprecision(2) << V;
		}
		
	else if (x == 2 && y > 5) 
		{
			V = x - (sqrt(y + z));
			cout << "\nThe value for V is\n" << setw(10) << setprecision(2) << V;
		}
		
	else 
		{
			V = x + y + z;
			cout << "\nThe value for V is\n" << setw(10) << setprecision(2) << V;
		}
	

	return 0;
}

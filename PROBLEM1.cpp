#include <iostream>
#include <string>
using namespace std;
int main() {
 string package;
 float time;
 float price;
 cout << "Choose package: ";
 cin >> package;
 // Package validation
 if ((package == "A") || (package == "B") || (package == "C")) {
 cout << "The number of hours: ";
 cin >> time;
 // Time validation
 if (time <= 744) {
// Package A
if (package == "A") {
if (time > 10) {
price = 995 + (time - 10) * 2;
} else {
price = 995;
}
// Package B
} else if (package == "B") {
if (time > 20) {
price = 1495 + (time - 20) * 1;
} else {
price = 1495;
}
// Package C
} else {
price = 1995;
}
 } else {
cout << "Invalid number of hours!";
 }
 } else {
 cout << "Invalid package!";
}
cout << "Price: P" << price;
}

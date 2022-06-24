#include <iostream>

using namespace std;

int main() {
    int exit, a, b, c, d, b1, c1, d1, result;
    float e, e1, resulte;

	cout<<"\tWelcome to my calculator c:"<<endl;
	cout<<"\nOption 1. Add";
	cout<<"\nOption 2. Subtraction";
	cout<<"\nOption 3. Multiply";
	cout<<"\nOption 4. Split";
	cout<<"\nOption 5. Exit."<<endl;
	
	cout<<"\nEnter the option you want to use: ";
	cin>>a;
	
	switch(a){
		case 1: 
			cout<<"\nEnter the first number you want to add: ";
			cin>>b;
			cout<<"\nEnter the second number you want to add: ";
			cin>>b1;
			result = b + b1;
			cout<<"\n \n  The result is: "<<result;
			break;
		case 2:
			cout<<"\nEnter the first number you want to subtract: ";
			cin>>c;
			cout<<"\nEnter the first number you want to subtract: ";
			cin>>c1;
			result = c - c1;
			cout<<"\n \n  The result is: "<<result;
			break;
			case 3: 
			cout<<"\nEnter the first number you want to multiply: ";
			cin>>d;
			cout<<"\nEnter the first number you want to multiply: ";
			cin>>d1;
			result = d * d1;
			cout<<"\n \n  The result is: "<<result;
			break;
		case 4: 
			cout<<"\nEnter the first number you want to divide (This is the one for the house): ";
			cin>>e;
			cout<<"\nEnter the first number you want to divide (This let's see how many times it fits in the house): ";
			cin>>e1;
			resulte = e / e1;
			cout.precision(6);
			cout<<"\n \n The result is: "<<resulte;
			break;
		case 5:
			cout<<"\n \nWe leaving:)";	break;
		}
    return 0;
}

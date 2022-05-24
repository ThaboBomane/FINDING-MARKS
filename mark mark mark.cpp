



#include <iostream>
using namespace std;




int main() {

	//Decalring variables

	double firstnumber, secondnumber, results;
	int calculationtype;
	 

	cout << " enter two numbers " <<endl;
	cin >> firstnumber >> secondnumber;

	cout << "Choose the type of calculation which you want to" << endl;

	cout << " 1: Addition " << endl;
	cout << " 2: subtraction ";
	cout << " 3: multiplication ";
	cout << " 4: division ";

	cout << firstnumber << secondnumber << "is equal to " << results;

	switch (calculationtype) {


	case 1:



		results = firstnumber + secondnumber;

		cout << "The addition of" << firstnumber << " and " << secondnumber << " is equal to " << results;

		break;
	case 2:
		int result = secondnumber - firstnumber;

		cout << " The subtraction of " << secondnumber << "and " << firstnumber << " is equal to" << result;

		break;

	case 3:
		result = firstnumber * secondnumber;

		cout << firstnumber << "multiply by" << secondnumber << "is equal to " << result;

		break;


	case 4:
		if (secondnumber == 0); {

			cout << "You cannot divide anything by zero,choose another number";

			cin >> secondnumber;
		}
		else {
			result = firstnumber / secondnumber;
			cout << " The result of division" << firstnumber << by secondnumber << "is equal to" << result << endl;
		}
		break;
	default:
		cout << " Invalid operator selected, please enter tje number operator shown" << endl;


	}


	return 0;





}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

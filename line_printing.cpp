#include <iostream>

using namespace std;

// although i likely should have already figured this out by now // is a comment line.

int demomain() { return 0; } // an example of a comment at the end of the line

/* multi line comments are preformed with the symbol shown at the start of this line and are terminated with */

/* here are the list of different types of variables in c++
*
*
int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)


*/

int calc() {
	int x, y;
	int sum;

	cout << "Type a number: ";
	cin >> x;
	cout << "Type another number: ";
	cin >> y;
	sum = x + y;
	cout << "Sum is: " << sum;
	return 0;\
}

int inout() {
	int x;
	cout << "Type a number: "; // Type a number and press enter
	cin >> x; //Get user input from the keyboard
	cout << "Your number is: " << x; //Display the input variable
	return calc();
}

int notmain() {
	// demonstration of declaring multiple variables data type using a comma to seperate them. declare the initial data type for the first variable and then use a comma with other new variables and the compilier will assign their data type accordingling.
	int x = 5, y = 7, z = 50;
	cout << x + y + z;

	return inout();
}

/* cpp indentifiers
* 
* in cpp VARIABLES must be INDENTIFIED with UNIQUE NAMES
* these UNIQUE NAMES are called INDENTIFIERS
*/

// in cpp identifiers can be short names (like x and y) or more descriptive names like (age, sum, totalVolume).

// Good example

int minutesPerHour = 60;

// Acceptable but hard to understand

int m = 60;

// Here are the rules for VARIABLES (UNIQUE IDENTIFIERS)
/*
Names can contain letters, digits and underscores
Names must begin with a letter or an underscore (_)
Names are case sensitive (myVar and myvar are different variables)
Names cannot contain whitespaces or special characters like !, #, %, etc.
Reserved words (like C++ keybaords, such as int) cannot be used as names.
*/

// CONSTANTS

// Constants are type of variable that has a persistent value, the value cannot be changed once it is declared. Essentially it is READ-ONLY

/*

const int myNum5 = 15; //Mynum5 will always read 15
myNum5 = 10; // error: assignment of read-only variable 'myNum15'

*/

// you should declare a variable as constant when the value is unlikely to be changed.

// USER INPUT

/*
user input is taken via the iostream library's cin (juxtaposing the ctout)
*/

int main() {
	cout << "Hello world";
	//could also be written as
	//	std::cout << "Hello world"

	//Note that cout is only a single line print and does not print information onto a second line

	// << is an insertion operator and inserts the string after it into the object cout from the std namespace library

	std::cout << "Hello world";
	std::cout << "I am learning C++";

	// to print cout to a new line use the \n character at the end of the string to print it into a new line.

	std::cout << "Hello world on a new line\n";
	std::cout << "I am learning C++\n";

	// multiple new lines can be created using this character like so.

	std::cout << "I am learning C++\n\n";
	std::cout << "Great day ain't it?\n\n";

	// another way of adding a new line is using the endl manipulator at the end of the cout string...

	std::cout << "Weather kind of sucks no?" << endl;
	std::cout << "Just kidding it's a hot day!\n\n";

	// just keep in mind that \n is the preferred way to do this and that \n is also universal from c language.
	int myNum = 15;
	std::cout << myNum;

	// a variable can also be created without assigning a value and then assigning the value later.
	int myNum2;
	myNum2 = 10;
	std::cout << myNum2;

	// examples of declaring each data type
	int myNum3 = 5;
	double myFloatNum = 5.99;
	char myLetter = 'D';
	std::string myText = "Hello";
	bool myBoolean = true;

	// remember that string is an object of class std so unless 'using namespace std' is specified then std::string will also need to be used when declaring a string.

	// how to print out variables together
	int myAge = 35;
	std::cout << "I am " << myAge << " Years old\n\n";

	// addition in cpp

	int x = 5;
	int y = 6;
	int sum = x + y;

	std::cout << sum;

	return notmain();
}
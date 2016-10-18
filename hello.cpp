//============================================================================
// Name        : hello.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int addNumbers(int firstNum, int secondNum = 0){

	int sum = firstNum + secondNum;

	return sum;

}

// overload function, using the same name but different attr
int addNumbers(int firstNum, int secondNum, int thirdNum){

	return firstNum + secondNum + thirdNum;

}


int getFactorial(int number){

	int sum;
	if (number == 1) sum = 1;
	else sum = getFactorial(number - 1) * number;
	return sum;
}





int main() {
	cout << "yo wasup" << endl; // prints !!!Hello World!!!

	const double PI = 3.14142466;

	char myGrade = 'A';

	bool isHappy = false;

	int myAge = 39;

	float favNum = 3.24455;

	double otherFav = 1.42324;

	cout << "Favorite Num: " << favNum << " " << myAge << endl;

	cout << "Size of int " << sizeof(myAge)
		<< endl;
	cout << "Size of int " << sizeof(myGrade) << endl;
	cout << "Size of int " << sizeof(isHappy) << endl;
	cout << "Size of int " << sizeof(favNum) << endl;
	cout << "Size of int " << sizeof(otherFav) << endl;
	cout << "Size of int " << sizeof(PI) << endl;

	int largestInt = 2147483647;

	cout << "Largest int " << largestInt << endl;

	cout << "" << endl;
	cout << "*****************************************" << endl;
	cout << "" << endl;

	// +, -, *, /, %, ++, --

	cout << 5 % 2 << endl;

	int five = 12;

	cout << five++ << endl;
	cout << ++five << endl;
	cout << five-- << endl;
	cout << --five << endl;
	five += five;
	cout << five << endl;

	// casting
	cout << (float)4 / 5 << endl;

	cout << "" << endl;
	cout << "*****************************************" << endl;
	cout << "" << endl;

	// condition
	int age = 70;
	int minAge = 16;
	bool noAlcohol = true;

	if ((age >= 1) && (age < 16)){

		cout << "you cannot drive" << endl;

	}
	else if (!noAlcohol){

		cout << "you cannot drink" << endl;

	}
	else if (age >= 80 && ((age > 100) || ((age - minAge) > 5))){

		cout << "you cannot drive" << endl;

	}
	else {

		cout << "you can drive :)" << endl;

	}

	int greetingOption = 1;

	switch (greetingOption){

	case 1:
		cout << "Bonjour" << endl;
		break;

	case 2:
		cout << "Aloha" << endl;
		break;

	default:
		cout << "Hello" << endl;

	}

	// variable change
	char biggest = (1 > 2) ? 'A' : 'H';
	cout << biggest << endl;

	cout << "" << endl;
	cout << "*****************************************" << endl;
	cout << "" << endl;

	// array practice
	int myFavNumsLOL[78];
	int badNums[5] = { 1, 2, 3, 45, 65 };

	cout << myFavNumsLOL[97] << endl;
	cout << badNums[4] << endl;

	char myName[5][5] = { { 'D', 'A', 'N', 'N', 'Y' }, { 'D', 'A', 'N', 'N', 'Y' } };

	myAge = 64;
	cout << myAge << endl;
	cout << myName[0][0] << endl;

	cout << "" << endl;
	cout << "*****************************************" << endl;
	cout << "" << endl;

	// for loop practices
	for (int i = 0; i <= 10; i++){

		cout << i << endl;

	}

	for (int j = 0; j < 2; j++){

		for (int k = 0; k < 5; k++){

			cout << myName[j][k];
		}

		cout << endl;
	}

	cout << "" << endl;
	cout << "*****************************************" << endl;
	cout << "" << endl;


    //while loop
	int randNum = (rand() % 100) + 1;

	cout << randNum << endl;
	cout << "ME" << endl;
	while (randNum != 100){

		cout << randNum << ", ";

		randNum = (rand() % 100) + 1;
	}

	cout << endl;

	cout << "" << endl;
	cout << "*****************************************" << endl;
	cout << "" << endl;


	// do while loop
//	string  numGuess;
//	int intNumGuess = 0;
//
//	do {
//
//		cout << "Guess btw 1 and 10: ";
//		getline(cin, numGuess);
//
//		intNumGuess = stoi(numGuess);
//		cout << intNumGuess << endl;
//
//	} while (intNumGuess != 4);
//
//	cout << "You win!" << endl;

	cout << "" << endl;
	cout << "*****************************************" << endl;
	cout << "" << endl;

	//create string inside C
	char happpyArray[6] = { 'H', 'a', 'p', 'p', 'y', '\0' };

	string birthdayString = " Birthay";
	cout << happpyArray << birthdayString << endl;

	string yourName;
	cout << "what is your name? ";
	getline(cin, yourName);

	cout << "hello " << yourName << endl;

	string wholeName = yourName.assign(yourName);
	cout << wholeName << endl;

	string firstName = wholeName.assign(wholeName, 0, 5);
	cout << firstName << endl;

	int lastNameIndex = yourName.find("Jes", 0);
	cout << "Index for last name: " << lastNameIndex << endl;

	yourName.insert(5, " fucking");
	cout << yourName << endl;

	yourName.erase(6, 8);
	cout << yourName << endl;

	yourName.replace(6, 6, "Savior");
	cout << yourName << endl;

//	double eulers = .57721;
//	string eulerGuess;
//	double eulerGuessDouble;
//
//	cout << "what is Euler's Constant? ";
//	getline(cin, eulerGuess);
//
//	eulerGuessDouble = stod(eulerGuess);
//
//	if (eulerGuessDouble == eulers){
//		cout << "you are right!" << endl;
//	}
//	else {
//		cout << "you wrong!" << endl;
//	}

//	cout << "size: " << eulerGuess.size() << endl;
//	cout << "empty? " << eulerGuess.empty() << endl;
//	cout << eulerGuess.append(" was your guess?") << endl;
//	cout << eulerGuess << endl;

	string dogString = "dog";
	string catString = "cat";

	cout << dogString.compare(catString) << endl;
	cout << dogString.compare(dogString) << endl;
	cout << catString.compare(dogString) << endl;


	cout << "" << endl;
	cout << "*****************************************" << endl;
	cout << "" << endl;


	//vector
	vector <int> lotteryNumVect(10);
	int lotteryNumArray[5] = { 4, 13, 14, 24, 34 };

	lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArray, lotteryNumArray + 3);

	cout << lotteryNumVect.at(2) << endl;

	lotteryNumVect.insert(lotteryNumVect.begin() + 5, 44);

	// all assigned ones are zero, versus in array are just random numbers
	cout << lotteryNumVect.at(4) << endl;
	cout << lotteryNumVect.at(5) << endl;
	cout << lotteryNumVect.at(12) << endl;

	lotteryNumVect.push_back(78);
	// Test again  // lotteryNumVect.pop_back();  << remove final value

	cout << "Final Value: " << lotteryNumVect.back() << endl;
	cout << "First Value: " << lotteryNumVect.front() << endl;

	cout << lotteryNumVect.empty() << endl;
	cout << lotteryNumVect.size() << endl;


	// functions
	cout << addNumbers(1) << endl;
	// run overload function
	cout << addNumbers(1, 2, 3) << endl;

	int testNum = 4;
	cout << "Enter a test value: ";


	cout << "The factorial of " << getFactorial(testNum) << endl;



	// holds output window
	// clear and ignore are for userInput
	cin.clear();
	cin.ignore();
	cin.get();

	return 0;
}

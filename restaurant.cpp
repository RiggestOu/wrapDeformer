//============================================================================
// Name        : dinnerRes.cpp
// Author      : Te Ling Hsu
// Version     : 1.0
// Description : This program will take input from users of the followings:
//					- a selectable list of restaurants
//					- the date and time
//					- the order
//					- the party size
//					- any food allergies
//					- contact number
//				 The program will take the above and out a file 
//				 that contains all the user input
//============================================================================

// import all libraries
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>


using namespace std;

class Restaurant{
private:    
	string place;
	string date;
	string time;
	string foods;
	string partySize;
	string foodAllergies;
	string contactNum;
	

public:
	Restaurant(string, string, string, string, string, string, string);
	//constructor

	void printReservation();


};


//declaration

Restaurant::Restaurant(string place, string date, string time, string foods, string partySize, string foodAllergies, string contactNum){

	this->place = place;
	this->date = date;
	this->time = time;
	this->foods = foods;
	this->partySize = partySize;
	this->foodAllergies = foodAllergies;
	this->contactNum = contactNum;

}

void Restaurant::printReservation(){

	
	string title = "Your Reservation";
	cout << title << endl;
	cout << place << endl;
	cout << date << " " << time << endl;
	cout << "Order: " << foods << endl;
	cout << "Party Size: " << partySize << " people" << endl;
	cout << "Food Allergies: " << foodAllergies << endl;
	cout << "Contact Number: " << contactNum << endl;

	ofstream printOut("dinnerReservation.txt");

	if (!printOut){

		cout << "Error opening" << endl;

	}
	else {

		printOut << title << endl;
		printOut << "***********************************************" << endl;
		printOut << "Restaurant: " << place << endl;
		printOut << "Date & Time: " << date << " " << time << endl;
		printOut << "Order: " << foods << endl;
		printOut << "Party Size: " << partySize << " people" << endl;
		printOut << "Food Allergies: " << foodAllergies << endl;
		printOut << "Contact Number: " << place << endl;


		printOut.close();
	}


}





int main() {

	string date;
	string time;
	string foods;
	string partySize;
	string foodAllergies;
	string contactNum;
	string choice;
	string restaurantsList[5] = { "Burger King", "McDonald's", "In-N-Out", "Wendy's", "Jack in the Box" };


	cout << "Choose your restaurant: " << endl;
	for (int i = 0; i <= 4; i++){
		cout << (i + 1) << ": " << restaurantsList[i] << endl;
	}

	cout << "Please enter number of the restaurant of your choice: ";
	getline(cin, choice);

	cout << "Please enter the date: ";
	getline(cin, date);

	cout << "Please enter the time: ";
	getline(cin, time);

	cout << "Please enter the foods you want to order: ";
	getline(cin, foods);

	cout << "Please specify your party size: ";
	getline(cin, partySize);

	cout << "List your food allergies: ";
	getline(cin, foodAllergies);

	cout << "Please enter your contact number: ";
	getline(cin, contactNum);

	
	int choiceNum = stoi(choice);
	
	if (choiceNum == 1){
			Restaurant burgerKing(restaurantsList[choiceNum - 1], date, time, foods, partySize, foodAllergies, contactNum);
			burgerKing.printReservation();
	}
	else if (choiceNum == 2){
			Restaurant mcDonalds(restaurantsList[choiceNum - 1], date, time, foods, partySize, foodAllergies, contactNum);
			mcDonalds.printReservation();
	}

	else if (choiceNum == 3){
			Restaurant inNOut(restaurantsList[choiceNum - 1], date, time, foods, partySize, foodAllergies, contactNum);
			inNOut.printReservation();
	}
		
	else if (choiceNum == 4){
			Restaurant wendys(restaurantsList[choiceNum - 1], date, time, foods, partySize, foodAllergies, contactNum);
			wendys.printReservation();
	}
		
	else if (choiceNum == 5){
			Restaurant jackInTheBox(restaurantsList[choiceNum - 1], date, time, foods, partySize, foodAllergies, contactNum);
			jackInTheBox.printReservation();
	}

	else {
			cout << "Restaurant not on the list" << endl;
	}
	

	


	// holds output window
	// clear and ignore are for userInput
	cin.clear();
	cin.ignore();
	cin.get();

	return 0;
}





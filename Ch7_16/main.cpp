//Program Name: C++ Early Objects, Chapter 7, Problem 16, Pg. 483
//Programmer: Collin Stevens
//Contact: StevensCollin96@gmail.com

#include <iostream>
#include <climits>
#include <iomanip>
#include "Pharmacy.h"
#include "Surgery.h"
#include "PatientAccount.h"

void displayMenu();
void displaySurgery();
void displayMedication();
double getSurgery();
double getMedication();
bool inputValidation(int int_i, int minRange, int maxRange);
int inputPrompt();

int main()
{
	const int MIN_MENU_CHOICE = 1, 
			  MAX_MENU_CHOICE = 3,
			  MIN_DAYS_SPENT = 1;

	int menuChoice = 0,
		daysSpent;

	double totalSurgeryCharges = 0,
		   totalMedicationCharges = 0;

	std::cout << "Days spent at hospital: " << std::endl;
	daysSpent = inputPrompt();

	while(inputValidation(daysSpent, MIN_DAYS_SPENT, INT_MAX))
		daysSpent = inputPrompt();

	PatientAccount Account(daysSpent);

	do
	{
		displayMenu();
		menuChoice = inputPrompt();

		while(inputValidation(menuChoice, MIN_MENU_CHOICE, MAX_MENU_CHOICE))
			menuChoice = inputPrompt();
		
		switch(menuChoice)
		{
			case 1:
				displaySurgery();
				totalSurgeryCharges += getSurgery();
				break;

			case 2:
				displayMedication();
				totalMedicationCharges += getMedication();
				break;

			case 3:
				std::cout << std::endl << std::fixed << std::showpoint << std::setprecision(2)
						  << "Total Charges: $" << Account.getTotalCharges(totalMedicationCharges, totalSurgeryCharges) << std::endl
						  << "Press <ENTER> to EXIT" << std::endl;
				break;

			default:
				std::cout << "switch(menuChoice) default error." << std::endl;
				break;
		}

	}while(menuChoice != 3);

	std::cin.get();
	std::cin.get();

	return 0;
}

void displayMenu()
{
	std::cout << std::endl
			  << "Hospital Bill Calculator" << std::endl 
			  << "1. Enter a surgery" << std::endl 
			  << "2. Enter a medication" << std::endl
			  << "3. Check out" << std::endl << std::endl;
}

void displaySurgery()
{
	std::cout << std::endl
			  << "Surgery Menu" << std::endl 
			  << "1. Head" << std::endl 
			  << "2. Shoulder" << std::endl
			  << "3. Torso" << std::endl 
			  << "4. Thigh" << std::endl 
			  << "5. Leg" << std::endl << std::endl;
}

double getSurgery()
{
	Surgery mySurgery;

	const int MIN_SURGERY_MENU = 1,
			  MAX_SURGERY_MENU = 5,
			  MIN_SURGERY_QUANITY = 1;

	int int_i = 0,
		surgeryQuanity = 0;

	while(inputValidation(int_i, MIN_SURGERY_MENU, MAX_SURGERY_MENU))
		int_i = inputPrompt();

	std::cout << std::endl << "Please enter the amount of times the surgery was recieved: " << std::endl;
	while(inputValidation(surgeryQuanity, MIN_SURGERY_QUANITY, INT_MAX))
		surgeryQuanity = inputPrompt();

	switch(int_i)
	{
		case 1:
			return surgeryQuanity * mySurgery.getSurgeryHead();
			break;
		case 2:
			return surgeryQuanity * mySurgery.getSurgeryShoulder();
			break;
		case 3:
			return surgeryQuanity * mySurgery.getSurgeryTorso();
			break;
		case 4:
			return surgeryQuanity * mySurgery.getSurgeryThigh();
			break;
		case 5:
			return surgeryQuanity * mySurgery.getSurgeryLeg();
			break;
	}
}


void displayMedication()
{
	std::cout << std::endl
			  << "Medication Menu" << std::endl
			  << "1. Motrin" << std::endl 
			  << "2. Tylenol" << std::endl 
			  << "3. Vicodin" << std::endl 
			  << "4. Blue Pill" << std::endl 
			  << "5. Red Pill" << std::endl << std::endl;
}

double getMedication()
{
	Pharmacy myPharmacy;
                                                    
	const int MIN_PILL_MENU = 1,
              MAX_PILL_MENU = 5,
              MIN_PILL_QUANITY = 1;

	int int_i = 0,
		pillQuanity = 0;

	while(inputValidation(int_i, MIN_PILL_MENU, MAX_PILL_MENU))
		int_i = inputPrompt();

	std::cout << std::endl << "Enter the amount of pills recieved: " << std::endl;
	while(inputValidation(pillQuanity, MIN_PILL_QUANITY, INT_MAX))
		pillQuanity = inputPrompt();

	switch(int_i)
	{
		case 1:
			return pillQuanity * myPharmacy.getPillMotrin();
			break;
		case 2:
			return pillQuanity * myPharmacy.getPillTylenol();
			break;
		case 3:
			return pillQuanity * myPharmacy.getPillVicodin();
			break;
		case 4:
			return pillQuanity * myPharmacy.getPillBlue();
			break;
		case 5:
			return pillQuanity * myPharmacy.getPillRed();
			break;
	}
}

bool inputValidation(int int_i, int minRange, int maxRange)
{
	if(int_i >  maxRange ||  int_i < minRange)
		return true;
	else 
		return false;
}

int inputPrompt()
{
	int int_i;

	std::cout << "User Input: ";
	std::cin >> int_i;

	return int_i;
}
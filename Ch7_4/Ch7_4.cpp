//Program Name: C++ Early Objects, Chapter 7, Problem 4, Pg. 478
//Programmer: Collin Stevens
//Contact: StevensCollin96@gmail.com

#include <iostream>
#include <string>
#include <iomanip>

void getBudget(struct MonthlyBudget& budget);
void displayBudget(struct MonthlyBudget budget);

struct MonthlyBudget
{
    double housing,
           utilities,
           houseHold,
           transport,
           food,
           medical,
           insurance,
           entertainment,
           clothing,
           misc;

    std::string name;
};

int main()
{
    MonthlyBudget budgetA = {500, 150, 65, 50, 250, 30, 100, 150, 75, 50, "Budget A"};

    MonthlyBudget budgetB;
    getBudget(budgetB);

    displayBudget(budgetA);
    displayBudget(budgetB);

    return 0;
}

void getBudget(struct MonthlyBudget& budget)
{
    std::cout << "Enter housing costs: ";
    std::cin  >> budget.housing;

    std::cout << "Enter utilities cost: ";
    std::cin  >> budget.utilities;

    std::cout << "Enter house hold costs: ";
    std::cin  >> budget.houseHold;

    std::cout << "Enter transportation costs: ";
    std::cin  >> budget.transport;

    std::cout << "Enter food costs: ";
    std::cin  >> budget.food;

    std::cout << "Enter medical costs: ";
    std::cin  >> budget.medical;

    std::cout << "Enter insurance costs: ";
    std::cin  >> budget.insurance;

    std::cout << "Enter entertainment costs: ";
    std::cin  >> budget.entertainment;

    std::cout << "Enter clothing costs: ";
    std::cin  >> budget.clothing;

    std::cout << "Enter misellaneous costs: ";
    std::cin  >> budget.misc;

    std::cout << "Name this budget: ";
    std::cin.get();
    getline(std::cin, budget.name);
}

void displayBudget(struct MonthlyBudget budget)
{
    std::cout << std::fixed << std::showpoint << std::setprecision(2) << std::endl
              << "Monthly Budget:        " << budget.name << std::endl
              << "Housing:               $" << budget.housing << std::endl
              << "Utilities:             $" << budget.utilities << std::endl
              << "House Hold Expenses:   $" << budget.houseHold << std::endl
              << "Transportation:        $" << budget.transport << std::endl
              << "Food:                  $" << budget.food << std::endl
              << "Medical:               $" << budget.medical << std::endl
              << "Insurance:             $" << budget.insurance << std::endl
              << "Entertainment:         $" << budget.entertainment << std::endl
              << "Clothing:              $" << budget.clothing << std::endl
              << "Miscelleneous:         $" << budget.misc << std::endl;
}

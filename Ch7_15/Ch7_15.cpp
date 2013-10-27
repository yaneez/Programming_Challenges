//Program Name: C++ Early Objects, Chapter 7, Problem 15, Pg. 482
//Programmer: Collin Stevens
//Contact: StevensCollin96@gmail.com

#include <iostream>
#include "Inventory.h"

int main()
{
    int itemNumber,
        quanity;

    double cost,
           totalCost;

    std::cout << "Enter an item number to create: ";
    std::cin  >> itemNumber;

    std::cout << "Enter the quanity: ";
    std::cin  >> quanity;

    std::cout << "Enter the cost: ";
    std::cin  >> cost;

    Inventory item(itemNumber, quanity, cost);

    std::cout << "Item Number:    " << item.getItemNumber() << std::endl
              << "Quanity:        " << item.getQuanity() << std::endl
              << "Cost Per Unit: $" << item.getCost() << std::endl
              << "Total Cost:    $" << item.getTotalCost() << std::endl;

    return 0;
}

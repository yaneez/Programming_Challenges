#include "Inventory.h"

Inventory::Inventory(int itemNumber, int quanity, double cost)
{
    setItemNumber(itemNumber);
    setQuanity(quanity);
    setCost(cost);
    setTotalCost();
}

void Inventory::setItemNumber(int itemNumber)
{
    m_itemNumber = itemNumber;
}

void Inventory::setQuanity(int quanity)
{
    m_quanity = quanity;
}

void Inventory::setCost(double cost)
{
    m_cost = cost;
}

void Inventory::setTotalCost()
{
    m_totalCost = (getQuanity() * getCost());
}

const int Inventory::getItemNumber()
{
    return m_itemNumber;
}

const int Inventory::getQuanity()
{
    return m_quanity;
}

const double Inventory::getCost()
{
    return m_cost;
}

const double Inventory::getTotalCost()
{
    return m_totalCost;
}

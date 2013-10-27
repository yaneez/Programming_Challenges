class Inventory
{
private:
    int m_itemNumber, //item number
        m_quanity; //quanity of item on hand

    double m_cost, //wholesale per unit of item
           m_totalCost; //holds total inventory cost of the item(quanity * cost)

public:
    Inventory()
    {
        m_itemNumber = 0,
        m_quanity = 0,
        m_cost = 0,
        m_totalCost = 0;
    }

    Inventory(int itemNumber, int quanity, double cost);

    void setItemNumber(int itemNumber);
    void setQuanity(int quanity);
    void setCost(double cost);
    void setTotalCost();

    const int getItemNumber();
    const int getQuanity();

    const double getCost();
    const double getTotalCost();

};

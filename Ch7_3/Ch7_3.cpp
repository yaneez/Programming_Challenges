//Program Name: C++ Early Objects, Chapter 7, Problem 3, Pg. 478
//Programmer: Collin Stevens
//Contact: StevensCollin96@gmail.com

#include <iostream>

int averageSales(struct CorpData CorpDivision);
int totalSales(struct CorpData CorpDivision);
void displayReport(struct CorpData CorpDivision);

struct CorpData
{
    std::string divisionName;

    double firstQuarter,
           secondQuarter,
           thirdQuarter,
           fourthQuarter,
           totalAnnual,
           averageQuarterly;
};

int main()
{
    CorpData West = {"West", 100, 100, 100, 100};
    displayReport(West);

    CorpData East = {"East", 150, 150, 150, 150};
    displayReport(East);

    CorpData North = {"North", 200, 200, 200, 200};
    displayReport(North);

    CorpData South = {"South", 250, 250, 250, 250};
    displayReport(South);

    return 0;
}

int averageSales(struct CorpData CorpDivision)
{
    return CorpDivision.averageQuarterly =
                (CorpDivision.firstQuarter + CorpDivision.secondQuarter +
                 CorpDivision.thirdQuarter + CorpDivision.fourthQuarter) / 4;
}

int totalSales(struct CorpData CorpDivision)
{
    return CorpDivision.totalAnnual =
                (CorpDivision.firstQuarter + CorpDivision.secondQuarter +
                 CorpDivision.thirdQuarter + CorpDivision.fourthQuarter);
}

void displayReport(struct CorpData CorpDivision)
{
    std::cout << "Division:                 " << CorpDivision.divisionName << std::endl
              << "Average Quarterly Sales: $" << averageSales(CorpDivision) << std::endl
              << "Total Sales:             $" << totalSales(CorpDivision) << std::endl << std::endl;
}

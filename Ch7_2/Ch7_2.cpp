//Program Name: C++ Early Objects, Chapter 7, Problem 2, Pg 479
//Programmer: Collin Stevens
//Contact: StevensCollin96@gmail.com

#include <iostream>

void displayMovie(struct MovieData movie);
void movieProfits(struct MovieData movie);

struct MovieData
{
    std::string movieName,
                directorName;

    int movieLength, //minutes
        yearReleased,
        productionCost,
        firstYearRevenue;

};

int main()
{
    MovieData movieA = {"Movie A", "Director A", 127, 2013, 200000, 150000};
    displayMovie(movieA);
    MovieData movieB = {"Movie B", "Director B", 95, 2015, 150000, 275000};
    displayMovie(movieB);
    MovieData movieC = {"Movie C", "Director C", 100, 2017, 175000, 175000};
    displayMovie(movieC);

    return 0;
}

void displayMovie(struct MovieData movie)
{
    std::cout << "Movie:        " << movie.movieName << std::endl
              << "Director:     " << movie.directorName << std::endl
              << "Run Time:     " << movie.movieLength << " minutes" << std::endl
              << "Released:     " << movie.yearReleased << std::endl;

    movieProfits(movie);
}

void movieProfits(struct MovieData movie)
{
    if(movie.productionCost > movie.firstYearRevenue)
        std::cout << "Profit Loss:  $" << movie.productionCost - movie.firstYearRevenue << std::endl << std::endl;
    else if(movie.productionCost < movie.firstYearRevenue || movie.productionCost == movie.firstYearRevenue)
        std::cout << "Profit Gain:  $" << movie.firstYearRevenue - movie.productionCost << std::endl << std::endl;
}

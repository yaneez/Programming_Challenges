//Program Name: C++ Early Objects, Chapter 7, Problem 1, Pg. 477
//Programmer: Collin Stevens
//Contact: StevensCollin96@gmail.com

#include <iostream>

void displayMovie(struct MovieData movie);

struct MovieData
{
    std::string movieName,
                directorName;

    double movieLength;

    int yearReleased;
};

int main()
{
    MovieData movieA = {"Movie A", "Director A", 127.5, 2013};
    displayMovie(movieA);
    MovieData movieB = {"Movie B", "Director B", 95.7, 2015};
    displayMovie(movieB);

    return 0;
}

void displayMovie(struct MovieData movie)
{
    std::cout << "Movie:      " << movie.movieName << std::endl
              << "Director:   " << movie.directorName << std::endl
              << "Run Time:   " << movie.movieLength << std::endl
              << "Released:   " << movie.yearReleased << std::endl << std::endl;
}

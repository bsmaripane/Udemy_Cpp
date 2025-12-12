#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>

class Movie
{
private:
	std::string name;
	std::string rating;	// G, PG, PG-13, R
	int watched;		// number of times the movie has been watched

public:
	Movie(std::string name, std::string rating, int watched);
	void setMovieName(std::string name);
	void setMovieRating(std::string rating);
	void setWatched(int watched);

	std::string getMovieName() const;
	std::string getMovieRating() const;
	int getWatched() const;

	void incrementWatched();
	void display() const;

	Movie(const Movie& source);
	~Movie();
};
#endif
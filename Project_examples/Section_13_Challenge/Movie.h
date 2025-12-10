#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>

class Movie
{
private:
	std::string movieName;
	std::string movieRating;	// G, PG, PG-13, R
	int watched;		// number of times the movie has been watched

public:
	Movie(std::string name = "NoName", std::string rating = "Unknown", int times = 0);
	void setMovieName(std::string mName);
	void setMovieRating(std::string rating);
	void setWatched(int noTimes);

	std::string getMovieName() const;
	std::string getMovieRating() const;
	int getWatched() const;
};
#endif
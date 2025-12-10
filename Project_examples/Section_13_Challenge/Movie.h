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
	Movie(std::string name = "NoName", std::string rating = "Unknown", int times = 0)
		: movieName(name), movieRating(rating), watched(times) {}
	void setMovieName(std::string mName) { movieName = mName; }
	void setMovieRating(std::string rating) { movieRating = rating; }
	void setWatched(int noTimes) { watched = noTimes; }

	std::string getMovieName() const { return movieName; }
	std::string getMovieRating() const { return movieRating; }
	int getWatched() const { return watched; }
};
#endif
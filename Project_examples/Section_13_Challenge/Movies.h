#ifndef MOVIES_H
#define MOVIES_H

#include <iostream>
#include <vector>
#include "Movie.h"

class Movies : public Movie
{
private:
	std::vector<Movie> movies;

public:
	Movies();
	~Movies();
	void display();
	bool incrementWatched(std::string name);
	bool addMovie(std::string name, std::string rating, int watched);
};
#endif
#include "Movies.h"

Movies::Movies() : Movie("", "", 0) {}

void Movies::display()
{
	if (movies.empty())
		std::cout << "Sorry, no movies to display" << std::endl;
	else
	{
		std::cout << "\n=======================================" << std::endl;
		for (const auto &movie : movies) movie.display();
		std::cout << "=======================================" << std::endl;
	}
}

bool Movies::incrementWatched(std::string name)
{
	for (Movie &movie : movies )
		if (movie.getMovieName() == name)
		{
			movie.incrementWatched();
			return true;
		}
	
	return false;
}

bool Movies::addMovie(std::string name, std::string rating, int watched)
{
	for (const Movie &movie : movies)
		if (movie.getMovieName() == name)
			return false;
	
	Movie temp(name, rating, watched);
	movies.push_back(temp);
	return true;
}

Movies::~Movies() { }
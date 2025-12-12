#include "Movie.h"

Movie::Movie(std::string name, std::string rating, int watched)
	: name(name), rating(rating), watched(watched) {}
void Movie::setMovieName(std::string name) { this->name = name; }
void Movie::setMovieRating(std::string rating) { this->rating = rating; }
void Movie::setWatched(int watched) { this->watched = watched; }

std::string Movie::getMovieName() const { return name; }
std::string Movie::getMovieRating() const { return rating; }
int Movie::getWatched() const { return watched; }

Movie::Movie(const Movie &source)
	: Movie(source.name, source.rating, source.watched) {}

void Movie::incrementWatched() { ++watched; }
void Movie::display() const
{
	std::cout << name << ", " << rating << ", " << watched << std::endl;
}

Movie::~Movie() {}
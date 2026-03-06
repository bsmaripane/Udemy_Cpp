// Section 20 Challenge 2 Using std::list

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

class Song
{
	friend std::ostream& operator<<(std::ostream& os, const Song& song)
	{
		os << std::setw(20) << std::left << song.name
			<< std::setw(30) << std::left << song.artist
			<< std::setw(2) << std::left << song.rating;

		return os;
	}
	std::string name;
	std::string artist;
	int rating;
public:
	Song() = default;
	Song(std::string name, std::string artist, int rating) : name(name), artist(artist) 
	{
		if (rating < 0 || rating > 5)
			this->rating = 0;
	}
	std::string GetName() const { return name; }
	std::string GetArtist() const { return artist; }
	int GetRating() const { return rating; }
	bool operator<(const Song& rhs) const { return this->name < rhs.name; }
	bool operator==(const Song& rhs) const { return this->name == rhs.name; }
};

int main()
{


	system("pause");
	return 0;
}
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
	Song(const std::string& name, const std::string& artist, int rating)
		: name(name),
		  artist(artist),
		  rating((rating < 0 || rating > 5) ? 0 : rating) {}
	std::string GetName() const { return name; }
	std::string GetArtist() const { return artist; }
	int GetRating() const { return rating; }
	bool operator<(const Song& rhs) const { return this->name < rhs.name; }
	bool operator==(const Song& rhs) const { return this->name == rhs.name; }
};

void DisplayMenu()
{
	std::cout << "\nF - Play First Song" << std::endl
		<< "N - Play Next Song" << std::endl
		<< "P - Play Previous Song" << std::endl
		<< "A - Add and Play a New Song at Current Location" << std::endl
		<< "L - List the Current Playlist" << std::endl
		<< "========================================================" << std::endl
		<< "Enter a selection(Q to quit): ";
}

void PlayCurrentSong(const Song& song)
{
	std::cout << "Playing:" << std::endl;
	std::cout << song << std::endl;
}

void DisplayPlaylist(const std::list<Song>& playlist, const Song& currentSong)
{
	for (const Song& song : playlist)
		std::cout << song << std::endl;

	std::cout << "Current song:" << std::endl << currentSong << std::endl;
}

int main()
{
	std::list<Song> playlist
	{
		{"God's Plan", "Drake", 5},
		{"Never Be The Same", "Camila Cabello", 5},
		{"Pray for Me", "The Weekend and K.Lamar", 4},
		{"The Middle", "Zedd, Maren Morris & Grey", 5},
		{"Wait", "Maroone 5", 4},
		{"Whatever it Takes", "Imagine Dragons", 3}
	};

	std::list<Song>::iterator currentSong = playlist.begin();

	std::cout << "To be implemented" << std::endl;
	// program logic goes here

	std::cout << "\nThanks for listening!" << std::endl;
	system("pause");
	return 0;
}
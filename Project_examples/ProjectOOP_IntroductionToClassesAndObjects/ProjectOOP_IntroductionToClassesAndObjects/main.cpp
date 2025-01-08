#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel
{
public:
	string name;
	string ownerName;
	int subscribersCount;
	list<string> PublishedVideoTitles;

	YouTubeChannel(string ytName, string ytOwerName)
	{
		name = ytName;
		ownerName = ytOwerName;
		subscribersCount = 0;
	}

	void getInfo()
	{
		cout << "Name: " << name << endl << "Ower name: " << ownerName << endl 
			<< "Subscribers count: " << subscribersCount << endl 
			<< "List of posted videos:" << endl;
		for (string video : PublishedVideoTitles)
			cout << "*  " << video << endl;
	}
};

int main()
{
	/*YouTubeChannel ytChannel;

	ytChannel.name = "YouTube Channel";
	ytChannel.ownerName = "Belmy";
	ytChannel.PublishedVideoTitles = { "First video", "Coding video", "C# beginner", "Python beginner", "SQL beginner"};
	ytChannel.subscribersCount = 8;*/
	YouTubeChannel ytChannel("BelmyCoding", "Belmy");

	ytChannel.PublishedVideoTitles.push_back("First video");
	ytChannel.PublishedVideoTitles.push_back("Coding video");
	ytChannel.PublishedVideoTitles.push_back("C# beginner");
	ytChannel.PublishedVideoTitles.push_back("Python beginner");
	ytChannel.PublishedVideoTitles.push_back("SQL beginner");

	/*cout << "Name: " << ytChannel.name << endl << "Ower name: " << ytChannel.ownerName << endl << "Subscribers count: " << ytChannel.subscribersCount
		<< endl << "List of posted videos:" << endl;
	for (string video : ytChannel.PublishedVideoTitles)
		cout << "*  " << video << endl;*/
	ytChannel.getInfo();


	/*YouTubeChannel ytChannel2;
	
	ytChannel2.name = "AmySings";
	ytChannel2.ownerName = "Amy";*/
	/*ytChannel2.PublishedVideoTitles = { "Johny B - Cover", "Lorelei - Cover", "Lil Wayne - Million", "JJ ft Amy - Dear mom"};
	ytChannel2.subscribersCount = 8000;*/
	YouTubeChannel ytChannel2("AmySing", "Amy");

	ytChannel2.PublishedVideoTitles.push_back("Johny B - Cover");
	ytChannel2.PublishedVideoTitles.push_back("Lorelei - Cover");
	ytChannel2.PublishedVideoTitles.push_back("Lil Wayne - Million");
	ytChannel2.PublishedVideoTitles.push_back("JJ ft Amy - Dear mom");

	/*cout << "Name: " << ytChannel2.name << endl << "Ower name: " << ytChannel2.ownerName << endl << "Subscribers count: " << ytChannel2.subscribersCount
		<< endl << "List of posted videos:" << endl;
	for (string video : ytChannel2.PublishedVideoTitles)
		cout << "*  " << video << endl;*/
	ytChannel2.getInfo();

	system("pause>0");
}
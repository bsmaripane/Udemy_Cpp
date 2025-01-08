/*
*
*/
#include <iostream>
#include <string>
#include <list>
using namespace std;

struct YouTubeChannel
{
	string name;
	int subscribersCount;

	YouTubeChannel(string yName, int ySubscriberCount)
	{
		name = yName;
		subscribersCount = ySubscriberCount;
	}

	bool operator == (const YouTubeChannel& channel) const
	{
		return this->name == channel.name;
	}
};
// To print object in the same "cout << yt1;" 
//void operator << (ostream &COUT, YouTubeChannel &ytChannel)
//{
//	COUT << "Name: " << ytChannel.name << endl
//		<< "Subscribers: " << ytChannel.subscribersCount << endl;
//}

// To print multiple objects in the same line "cout << yt1 << yt2;"
ostream& operator << (ostream& COUT, YouTubeChannel& ytChannel)
{
	COUT << "Name: " << ytChannel.name << endl
		<< "Subscribers: " << ytChannel.subscribersCount << endl;
	return COUT;
}

struct MyCollection
{
	list<YouTubeChannel>myChannels;

	void operator += (YouTubeChannel& channel)
	{
		this->myChannels.push_back(channel);
		//myChannels.push_back(channel);
	}

	void operator -= (YouTubeChannel& channel)
	{
		this->myChannels.remove(channel);
		//myChannels.push_back(channel);
	}
};

ostream &operator << (ostream &COUT, MyCollection & myCollection)
{
	for (YouTubeChannel ytChannel : myCollection.myChannels)
		COUT << ytChannel << endl;
	return COUT;
}

int main()
{
	YouTubeChannel yt1 = YouTubeChannel("C++ beginner", 5000);
	YouTubeChannel yt2 = YouTubeChannel("Second Channel", 8000);

	operator << (cout, yt1); // same as cout << yt1
	cout << endl << yt1 << endl;
	operator << (cout, yt1) << (cout, yt2); // same as cout << yt1 << yt2;
	cout << endl << yt1 << yt2 << endl;

	MyCollection myCollection;

	myCollection += yt1;
	myCollection += yt2;

	cout << myCollection;

	myCollection -= yt2;

	cout << myCollection;


	system("pause>0");
}
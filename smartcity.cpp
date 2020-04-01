#include <iostream>
#include <fstream>
#include <string>
using namespace std;
class tour {
	public:
		void hotels()
		{
			ifstream hotel("hotels.txt");
			if(!hotel)
			{
				hotel.open("hotels.txt");
			}
			string line;
			cout<<"------HOTEL DETAILS------"<<endl;
			while(!hotel.eof())
			{
				getline(hotel,line);
				cout<<line<<endl;
			}
		}
		void places()
		{
			ifstream place("places.txt");
			if(!place)
			{
				place.open("places.txt");
			}
			string line;
			cout<<"------TOURIST PLACES DETAILS------"<<endl;
			while(!place.eof())
			{
				getline(place,line);
				cout<<line<<endl;
			}
		}
		void resturants()
		{
			ifstream resturant("resturants.txt");
			if(!resturant)
			{
				resturant.open("resturants.txt");
			}
			string line;
			cout<<"------RESTURANT DETAILS------"<<endl;
			while(!resturant.eof())
			{
				getline(resturant,line);
				cout<<line<<endl;
			}
		}
		void givefeedback()
	{
		cout<<"Enter your name"<<endl;
		string name;
		cin>>name;
		cout<<"Enter any feedback if you want to or just press space and enter"<<endl;
		string feed;
		cin.ignore();
		getline(cin,feed);
		ofstream feedbacks("feedback.txt",ios::app);
		if(!feedbacks)
		{
			feedbacks.open("feedback.txt");
		}
		feedbacks<<name<<endl;
		feedbacks<<feed<<endl;
	}
	void showfeedback()
	{
		ifstream feedback("feedback.txt");
		if(!feedback)
		{
			feedback.open("feedback.txt");
		}
		string line;
		while(getline(feedback,line))
		{
			cout<<line<<endl;
		}
	}
}tourist;
main()
{
	for(; ;) {
	cout<<"Welcome to Smart City Application"<<endl;
	cout<<"This is the best app for tourists to know about Delhi"<<endl;
	cout<<"Enter 1 to know about hotels"<<endl;
	cout<<"Enter 2 to know tourist places"<<endl;
	cout<<"Enter 3 to know about resturants"<<endl;
	cout<<"Enter 4 to give feedback about a certain thing"<<endl;
	cout<<"Enter 5 to show feedback from our valuable customers"<<endl;
	cout<<"Enter 6 to exit"<<endl;
	int c;
	cin>>c;
	switch(c)
	{
		case 1: tourist.hotels();
		break;
		case 2: tourist.places();
		break;
		case 3: tourist.resturants();
		break;
		case 4: tourist.givefeedback();
		break;
		case 5: tourist.showfeedback();
		break;
		case 6: exit(0);
		default:cout<<"Enter correct details"<<endl;
	}
}
}


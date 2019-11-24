#include"options.h"

//Allows user to add event to the calendar. 
void addEvent(std::map<int, event>& events)
{
	std::string date;int time; std::string name;
	std::cout << "What is the date you would like to add "
		"an event on? (in dd/mm/yyyy format) \n";
	std::cin >> date;
	int dateInt = stoi(date.substr(0, 2))+ stoi(date.substr(3, 5))
		* 100 + stoi(date.substr(6, 10)) * 10000;
	std::cout << "What is the time of the event? (in hhmm format) \n";
	std::cin >> time;
	std::cout << "What is the event? \n";
	std::cin >> name;
	events[dateInt] = { time,name };
}

//Displays options the user can choose from. 
void help(std::vector<std::string>& optionlist)
{
	for (std::string str : optionlist)
	{
		std::cout << str << "\n";
	}
}

//Lists all events saved in the calendar.
void listEvents(std::map<int,event>& events)
{
	int year; int month; int day;
	for (auto eve : events)
	{
		int date=eve.first;
		year=date/10000;
		month=(date/100)%100;
		day=date%100;
		std::cout << month << "/" << day << "/" << year << "\t" 
			<< eve.second.time << "\t" << eve.second.title << "\n";
	}
}

//Lists all events within a range on the calendar. 
void eventRange(std::map<int,event>& events, int beginDate, int endDate)
{
	for (auto eve: events)
	{
		if(eve.first>=beginDate&&eve.first<=endDate)
		{
			int date=eve.first;
			int year=date/10000;
			int month=(date/100)%100;
			int day=date%100;
			std::cout << month << "/" << day << "/" << year << "\t"
				<< eve.second.time << "\t" << eve.second.title << "\n";
		}
	}
}

/*Tomohiko Sakamoto's Algorithm to calculate the day of the
week from a given date.*/
std::string Weekday(std::string date) 
{
	int y = stoi(date.substr(6, 10));
	int m = stoi(date.substr(3, 5));
	int d = stoi(date.substr(0, 2));
	int t[] = { 0, 3, 2, 5, 0, 3,
			    5, 1, 4, 6, 2, 4 };
	y -= m < 3;
	int day = (y + y / 4 - y / 100 +
	y / 400 + t[m - 1] + d) % 7; 

	//Generates a string corresponding to the day instead of a number.
	switch (day) 
	{
	case 0: day = 0;
		return "Sunday";
		
	case 1: day = 1;
		return "Monday";
		
	case 2: day = 2;
		return "Tuesday";
		
	case 3: day = 3;
		return "Wednesday";
		
	case 4: day = 4;
		return "Thursday";
		
	case 5: day = 5;
		return "Friday";
		
	case 6: day = 6;
		return "Saturday";
		
	}
}

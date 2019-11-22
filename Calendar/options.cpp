#include"options.h"

void help(std::vector<std::string>& optionlist)
{
	for (std::string str : optionlist)
	{
		std::cout << str << "\n";
	}
}

void listEvents(std::map<int,event>& events)
{
	int year; int month; int day;
	for (auto eve : events)
	{
		int date=eve.first;
		year=date/10000;
		month(date/100)%100;
		day=date%100;
		std::cout << month << "/" << day << "/" << year << "\t" << eve.second.time << "\t" << eve.second.title << "\n";
	}
}

void eventRange(std::map<int,event>& events, int beginDate, int endDate)
{
	//FIX ME: make me do stuff
}

std::string Weekday(std::string date) //Tomohiko Sakamoto's Algorithm to calculate the day of the week from a given date. 
{
	int y = stoi(date.substr(6, 10));
	int m = stoi(date.substr(3, 5));
	int d = stoi(date.substr(0, 2));
	int t[] = { 0, 3, 2, 5, 0, 3,
			    5, 1, 4, 6, 2, 4 };
	y -= m < 3;
	int day = (y + y / 4 - y / 100 +
	y / 400 + t[m - 1] + d) % 7; 

	switch (day) //Generates a string corresponding to the day instead of a number.
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

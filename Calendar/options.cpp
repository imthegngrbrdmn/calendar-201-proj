#include"options.h"

void help(std::vector<std::string>& optionlist)
{
	optionlist.push_back("Help");
	optionlist.push_back("ListEvents");
	optionlist.push_back("EventRange -begin_end");
	optionlist.push_back("Weekday");
}

void listEvents(std::vector<event>& events)
{
	for (int i = 0; i <= events.size(); i++)
	{
		std::cout << "List of events are: " << i << std::endl;
	}
	//FIX ME: make me do stuff
}

void eventRange(std::vector<event>& events, int beginDate, int endDate)
{
	//FIX ME: make me do stuff
}

std::string Weekday(int d, int m, int y) //Tomohiko Sakamoto's Algorithm to calculate the day of the week from a given date. 
{
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
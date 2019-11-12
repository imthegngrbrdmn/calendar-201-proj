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
	//FIX ME: make me do stuff
}

void eventRange(std::vector<event>& events, int beginDate, int endDate)
{
	//FIX ME: make me do stuff
}

int Weekday(int d, int m, int y) //Tomohiko Sakamoto's Algorithm to calculate the day of the week from a given date. 
{
	int t[] = { 0, 3, 2, 5, 0, 3,
			    5, 1, 4, 6, 2, 4 };
	y -= m < 3;
	return (y + y / 4 - y / 100 +
	y / 400 + t[m - 1] + d) % 7; 
}
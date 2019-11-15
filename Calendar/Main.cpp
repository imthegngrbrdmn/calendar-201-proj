#include"options.h"
#include"calendar.h"

int day = 0;
int month = 0;
int year = 0;

int main(int argc, char** argv)
{
	/*
	std::vector<std::string> helpList;
	help(helpList);
	std::cout << "Here are your options: \n";

	for(std::string str : helpList)
	{
		std::cout << str << "\n";
	}
	std::cout << "Enter a date: (Format: dd/mm/yyyy): " << "\n";
	std::cin >> day;
	std::cin >> month;
	std::cin >> year;

	std::cout << Weekday(day, month, year);*/
	calendarPrint("August",3);
	return 0;
}

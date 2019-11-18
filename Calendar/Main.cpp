#include"options.h"
#include"calendar.h"

int day = 0;
int month = 0;
int year = 0;

int main(int argc, char** argv)
{
	calendarPrint(1, 2028, 31);

	std::string input;

	std::vector<std::string> helpList;
	help(helpList);
	std::cout << "Here are your options: \n";

	for(std::string str : helpList)
	{
		std::cout << str << "\n";
	}

	std::cout << "What would you like to do? \n";
	std::getline(std::cin, input);

	if (input == "ListEvents")
	{
		//listEvents();
	}
	else if (input == "EventRange")
	{

	}
	else if (input == "Weekday")
	{
		std::cout << "Enter a date: (Format: dd/mm/yyyy): " << "\n";
		std::cin >> day;
		std::cin >> month;
		std::cin >> year;

		std::cout << "Day is: " << Weekday(day, month, year);
	}


	//std::cout << Weekday(day, month, year);
	//calendarPrint(1,2028,31);

	return 0;
}

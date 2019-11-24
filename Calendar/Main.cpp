#include"options.h"
#include"calendar.h"


int main(int argc, char** argv)
{
	calendarPrint(1, 2028, 31);

	std::string input;
	std::string date;
	std::vector<std::string> helpList = { "Help","AddEvent","ListEvents","EventRange","Weekday","Quit" };
	std::map<int, event> events;	//keys are stored as yyyymmdd
	
	std::cout << "Here are your options: \n";
	help(helpList);

	while(true)
	{
		std::cout << "What would you like to do? \n";
		std::getline(std::cin, input);
		
		if (input == "AddEvent")
		{
			addEvent(events);
		}
		else if (input == "ListEvents")
		{
			//listEvents();
		}
		else if (input == "EventRange")
		{
			//eventRange();
		}
		else if (input == "Weekday")
		{
			std::cout << "Enter a date: (Format: dd/mm/yyyy): " << "\n";
			std::cin >> date;

			std::cout << "Day is: " << Weekday(date) << "\n";
		}
		else if (input == "Help")
		{
			help(helpList);
		}
		else if (input == "Quit")
		{
			std::cout << "Bye! \n";
			break;
		}
	}
	return 0;
}

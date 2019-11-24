#include"options.h"
#include"calendar.h"


int main(int argc, char** argv)
{
	//calendarPrint(1, 2028);

	std::string input;
	std::vector<std::string> helpList = { "Help","AddEvent","ListEvents","EventRange","Weekday","Quit" };
	std::map<int, event> events;	//keys are stored as yyyymmdd
	std::string date;

	std::cout << "Here are your options: \n";
	help(helpList);

	while(true)
	{
		std::cout << "What would you like to do? \n";
		std::getline(std::cin, input);
		std::cout << std::endl;

		if (input == "AddEvent")
		{
			addEvent(events);
		}
		else if (input == "ListEvents")
		{
			listEvents(events);
		}
		else if (input == "EventRange")
		{
			std::cout << "What day would you like to begin on? (dd/mm/yyyy)";
			std::cin >> date;
			int beginDate = stoi(date.substr(0, 2)) + stoi(date.substr(3, 5)) * 100 + stoi(date.substr(6, 10)) * 10000;
			std::cout << "What day would you like to end on? (dd/mm/yyyy)";
			std::cin >> date;
			int endDate = stoi(date.substr(0, 2)) + stoi(date.substr(3, 5)) * 100 + stoi(date.substr(6, 10)) * 10000;
			eventRange(events,beginDate,endDate);
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

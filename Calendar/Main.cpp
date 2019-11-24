#include"options.h"
#include"calendar.h"

int main(int argc, char** argv)
{
	/*Variables to store user input, the help list options, a map to store
	the events added by user and a varibale to store the date.*/
	std::string input;
	std::vector<std::string> helpList = { "Help", "CalendarPrint", "AddEvent", 
		"ListEvents", "EventRange", "Weekday", "Quit" };
	std::map<int, event> events;	//keys are stored as yyyymmdd
	std::string date;

	//Displays options to the user.
	std::cout << "Here are your options: \n";
	help(helpList);

	//Loop runs until user types "Quit". 
	while(true)
	{
		//Asks user what they want to do.
		std::cout << "What would you like to do?"<<std::endl;
		std::getline(std::cin, input);
		std::cout << std::endl;

		//Options to choose from. User input determines which of these run.
		if (input == "AddEvent") 
		{
			addEvent(events);
		}

		else if (input == "CalendarPrint") 
		{
			int month;
			int year;
			std::cout << "What month would you like printed?"
					"(Number of month e.g. April = 4.)";
			std::cin >> month;
			std::cout << "What year would you like printed? (Format = yyyy.)";
			std::cin >> year;
			std::cout << "\n";
			calendarPrint(month, year);
		} 

		else if (input == "ListEvents")
		{
			listEvents(events);
		}

		else if (input == "EventRange") 
		{
			std::cout << "What day would you like to begin on? (dd/mm/yyyy)";
			std::cin >> date;
			int beginDate = stoi(date.substr(0, 2)) + stoi(date.substr(3, 5))
				* 100 + stoi(date.substr(6, 10)) * 10000;
			std::cout << "What day would you like to end on? (dd/mm/yyyy)";
			std::cin >> date;
			int endDate = stoi(date.substr(0, 2)) + stoi(date.substr(3, 5))
				* 100 + stoi(date.substr(6, 10)) * 10000;
			eventRange(events, beginDate, endDate);
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

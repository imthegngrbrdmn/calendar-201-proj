#include"options.h"

int day = 0;
int month = 0;
int year = 0;

int main(int argc, char** argv)
{
	std::vector<std::string> printlist;
	help(printlist);

	std::cout << "Enter a date: (Format: d/m/yyyy): " << "\n";
	std::cin >> day;
	std::cin >> month;
	std::cin >> year;

	int dayOfWeek = Weekday(day, month, year);
	switch (dayOfWeek) //Generates a string corresponding to the day instead of a number.
	{
	case 0: dayOfWeek = 0;
		std::cout << "Sunday";
		break; 
	case 1: dayOfWeek = 1;
		std::cout << "Monday";
		break; 
	case 2: dayOfWeek = 2;
		std::cout << "Tuesday";
		break;
	case 3: dayOfWeek = 3;
		std::cout << "Wednesday";
		break;
	case 4: dayOfWeek = 4;
		std::cout << "Thursday";
		break;
	case 5: dayOfWeek = 5;
		std::cout << "Friday";
		break;
	case 6: dayOfWeek = 6;
		std::cout << "Saturday";
		break;
	}
	return 0;
}
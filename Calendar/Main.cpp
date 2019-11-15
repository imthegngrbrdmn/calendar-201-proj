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

	std::cout << Weekday(day, month, year);
	return 0;
}
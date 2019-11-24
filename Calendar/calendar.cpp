#include "calendar.h"
#include "options.h"

std::vector<std::string> days = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
std::vector<std::string> months = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
std::vector<int> daysInMonths = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
void calendarPrint(int month, int year)
{
	int daysInMonth = daysInMonths[month-1];
	int m = month;
	int y = year;
	int d = 1;
	int t[] = { 0, 3, 2, 5, 0, 3,
				5, 1, 4, 6, 2, 4 };
	y -= m < 3;
	int firstDay = (y + y / 4 - y / 100 +
		y / 400 + t[m - 1] + d) % 7;
	firstDay = 1 - firstDay;
	std::cout << months[month-1] << "\n";

	for (int i = 0;i < 7 * 10;i++)
	{
		std::cout << "*";
	}
	std::cout << "\n|";

	for(std::string day:days)
	{
		for(int i=day.length();i<9;i++)
		{
			day=day+" ";
		}
		std::cout<<day<<"|";
	}
	std::cout<<"\n";

	for(int i=0;i<70;i++)
	{
		std::cout<<"*";
	}

	std::cout << "\n|";
	std::string dayFillerLine = std::string(7, ' ');
	std::string weekFillerLine = "|";

	for (int i = 0; i < 7; i++)
	{
		weekFillerLine += dayFillerLine + "  |";
	}

	std::string weekDivider = std::string(70, '-');
	for (int day = firstDay,i=1; day <= daysInMonth || i%7!=1; day++,i++)
	{
		std::cout << dayFillerLine;
		if (day <= 0 || day > daysInMonth) std::cout << "  "<<"|";
		if (day > 0 && day < 10) std::cout <<  " "<< day << "|";
		if (day >= 10 && day <= daysInMonth) std::cout << day << "|";
		if (i % 7 == 0) std::cout << "\n" << weekFillerLine << "\n" << weekFillerLine << "\n" << weekFillerLine << "\n" << weekFillerLine << "\n" << weekDivider << "\n|";
	}
}

#include <iostream>
#include <string>
#include <vector>
void calendarPrint(std::string month, int firstDay)
{
	std::cout << month << "\n";
	for (int i = 0;i < 7 * 11;i++)
	{
		std::cout << "*";
	}
	std::cout << "\n";

	std::vector<std::string> days = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	for(std::string day:days)
	{
		for(int i=day.length();i<9;i++)
		{
			day=day+" ";
		}
		std::cout<<day<<"|";
	}
	std::cout<<"\n";
	for(int i=0;i<77;i++)
	{
		std::cout<<"*";
	}
}

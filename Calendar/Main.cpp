#include"options.h"


int main(int argc, char** argv)
{
	std::vector<std::string> printlist;
	help(printlist);

	std::cout << "Enter a date: " << "\n";
	std::cin >>  
	int day = Weekday(30, 8, 2010);
	std::cout << day;


	return 0;
}
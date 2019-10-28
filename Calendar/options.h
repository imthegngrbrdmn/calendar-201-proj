#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

struct event
{
	int date;
	int time;
	std::string title;
}

void help(std::vector<string>& printlist);
std::vector<event> listEvents();

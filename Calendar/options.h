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
};

/*
input: vector of strings that will be printed by main
output: none (but vector is passed by reference so that it can be changed
the help function will give a list of options which the user can use in order to get what they want.
*/
void help(std::vector<std::string>& printlist);
std::vector<event> listEvents();

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
	Input: vector of strings that will be printed by main
	Output: none (but vector is passed by reference so that it can be changed
The help function will give a list of options which the user can use in order to get what they want.
*/
void help(std::vector<std::string>& optionlist);

/*
	Input: vector of events to be manipulated later
	Output: vector passed by reference will be changed
The listEvents function will give a list of all events.
*/
void listEvents(std::vector<event>& events);

/*
	Input: vector of events to be manipulated later, int date to start, int date to end
	Output: vector passed by reference will be changed
The eventRange function will take a list of events and return all the events that are happening between those dates.
*/
void eventRange(std::vector<event>& events,int beginDate,int endDate);

/*
	Input: Day, month and year that the user wants to know.
	Output: The corresponding weekday/weekend for the date the user entered.
	The Weekday function will take integer arguments of day, month and year.
*/
int Weekday(int d, int m, int y);


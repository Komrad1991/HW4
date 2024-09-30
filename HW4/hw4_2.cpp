#include "hw4_2.h"
#include "hw4.h"
#include <iostream>

void stud_report_best(const std::vector<Student>& vec)
{
	std::cout << "Only best students report: " << std::endl;
	for (auto x : vec)
	{
		if (x.Average() == 5.0) x.report();
	}
}

void stud_report_passed(const std::vector<Student>& vec)
{
	std::cout << "Only who have any 3 students report: " << std::endl;
	for (auto x : vec)
	{
		for (auto perf : x.performance)
		{
			if (perf.second == 3)
			{
				x.report();
				break;
			}
		}
	}
}

void stud_report_notPassed(const std::vector<Student>& vec)
{
	std::cout << "Only who not passed any discipline: " << std::endl;
	for (auto x : vec)
	{
		int min, max;
		std::tie(min, max) = x.minAndMax();
		if (min == 2) x.report();
	}
}
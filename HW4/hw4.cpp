#include "hw4.h"
#include <iostream>
#include <map>
#include <tuple>
#include <assert.h>

void Student::print()
{
	std::cout << "Name: " << Name << std::endl;
	std::cout << "Reg_num: " << reg_num << std::endl;
	for (auto x : performance)
	{
		std::cout << "Discipline: " << x.first << " Grade: " << x.second << std::endl;
	}
}

void Student::addGrade(const std::string& discipline, int grade)
{
	assert(grade > 0 && grade < 6);
	performance.insert_or_assign(discipline, grade);
}

int Student::showGrade(const std::string& discipline)
{
	if (performance.contains(discipline))
		return performance[discipline];
	else return -1;
}

double Student::Average()
{
	double res = 0;
	for (auto x : performance)
	{
		res += x.second;
	}
	return res / performance.size();
}

std::tuple<int, int> Student::minAndMax()
{
	int min = INT_MAX;
	int max = INT_MIN;
	for (auto x : performance)
	{
		max = max > x.second ? max : x.second;
		min = min < x.second ? min : x.second;
	}
	return { min,max };
}

void Student::report()
{
	std::cout << "Name: " << Name << std::endl;
	std::cout << "Reg_num: " << reg_num << std::endl;
	std::cout << "Average: " << this->Average() << std::endl;
	int min, max;
	std::tie(min, max) = this->minAndMax();
	std::cout << "Min: " << min << " Max: " << max << std::endl;
}


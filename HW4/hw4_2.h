#pragma once

#include "hw4.h"
#include <vector>


/// <summary>
/// выводит отчет по лучшим студентам(только 5)
/// </summary>
/// <param name="">Вектор студентов</param>
void stud_report_best(const std::vector<Student>&);

/// <summary>
/// выводит отчет по студентам имеющим 3
/// </summary>
/// <param name="">Вектор студентов</param>
void stud_report_passed(const std::vector<Student>&);

/// <summary>
/// выводит отчет по студентам имеющим 2
/// </summary>
/// <param name="">Вектор студентов</param>
void stud_report_notPassed(const std::vector<Student>&);
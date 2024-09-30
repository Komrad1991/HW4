#pragma once

#include "hw4.h"
#include <vector>


/// <summary>
/// ������� ����� �� ������ ���������(������ 5)
/// </summary>
/// <param name="">������ ���������</param>
void stud_report_best(const std::vector<Student>&);

/// <summary>
/// ������� ����� �� ��������� ������� 3
/// </summary>
/// <param name="">������ ���������</param>
void stud_report_passed(const std::vector<Student>&);

/// <summary>
/// ������� ����� �� ��������� ������� 2
/// </summary>
/// <param name="">������ ���������</param>
void stud_report_notPassed(const std::vector<Student>&);
#pragma once
#include <string>
#include <map>
#include <tuple>

/// <summary>
/// ��������� �������� ������ � ��������
/// </summary>
struct Student
{
	/// <summary>
	/// ��� ��������
	/// </summary>
	std::string Name;
	/// <summary>
	/// ��������������� ����� ��������
	/// </summary>
	int reg_num;
	/// <summary>
	/// ������������� ������, �������� ������ �� ������������ � �����������
	/// </summary>
	std::map<std::string, int> performance;

	/// <summary>
	/// ����������� ��������� ��������
	/// </summary>
	/// <param name="Name">��� ��������</param>
	/// <param name="reg_num">����� ��������</param>
	Student(std::string Name, int reg_num)
	{
		this->Name = Name;
		this->reg_num = reg_num;
	}
	/// <summary>
	/// ������� ������� ���������� � ��������
	/// </summary>
	void print();
	/// <summary>
	/// ��������� ������ �� ���������� ��� ��������� ����������
	/// </summary>
	/// <param name="">�������� ����������</param>
	/// <param name="">������</param>
	void addGrade(const std::string&, int);
	/// <summary>
	/// ���������� ������ �� ��������� ����������(���� ����� ��������� ���, ������� -1)
	/// </summary>
	/// <param name="">�������� ����������</param>
	/// <returns></returns>
	int showGrade(const std::string&);
	/// <summary>
	/// ���������� ������� �������������� �� ���� ���������
	/// </summary>
	/// <returns></returns>
	double Average();
	/// <summary>
	/// ���������� ����������� � ������������ ������ ��������
	/// </summary>
	/// <returns></returns>
	std::tuple<int, int> minAndMax();
	/// <summary>
	/// ������� ����� �� ��������
	/// </summary>
	void report();
};
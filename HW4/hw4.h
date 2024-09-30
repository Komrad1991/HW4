#pragma once
#include <string>
#include <map>
#include <tuple>

/// <summary>
/// структура хранящая данные о студенте
/// </summary>
struct Student
{
	/// <summary>
	/// имя студента
	/// </summary>
	std::string Name;
	/// <summary>
	/// Регистрационный номер студента
	/// </summary>
	int reg_num;
	/// <summary>
	/// Ассоциативный массив, хранящий данные по успеваемости в дисциплинах
	/// </summary>
	std::map<std::string, int> performance;

	/// <summary>
	/// Конструктор структуры студента
	/// </summary>
	/// <param name="Name">Имя студента</param>
	/// <param name="reg_num">Номер студента</param>
	Student(std::string Name, int reg_num)
	{
		this->Name = Name;
		this->reg_num = reg_num;
	}
	/// <summary>
	/// Выводит базовую информацию о студенте
	/// </summary>
	void print();
	/// <summary>
	/// добавляет оценку по дисциплине или добавляет дисциплину
	/// </summary>
	/// <param name="">Название дисциплины</param>
	/// <param name="">Оценка</param>
	void addGrade(const std::string&, int);
	/// <summary>
	/// Показывает оценку по указанной дисциплине(если такой дисцплины нет, выводит -1)
	/// </summary>
	/// <param name="">Название дисциплины</param>
	/// <returns></returns>
	int showGrade(const std::string&);
	/// <summary>
	/// Возвращает среднее арифметическое по всем предметам
	/// </summary>
	/// <returns></returns>
	double Average();
	/// <summary>
	/// Возвращает минимальную и максимальную оценку студента
	/// </summary>
	/// <returns></returns>
	std::tuple<int, int> minAndMax();
	/// <summary>
	/// выводит отчет по студенту
	/// </summary>
	void report();
};
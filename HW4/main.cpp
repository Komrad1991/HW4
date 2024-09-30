#include "hw4.h"
#include <vector>
#include <iostream>
#include <tuple>
#include "hw4_2.h"

int main()
{
	Student student = Student("IVAN", 123123);
	student.addGrade("MatLog", 4);
	student.print();
	std::cout << student.showGrade("MatLog") << std::endl;
	std::cout << student.showGrade("Russian") << std::endl;
	student.addGrade("Russian",3);
	student.addGrade("Programming", 5);
	std::cout << student.Average() << std::endl;
	int min, max;
	std::tie(min, max) = student.minAndMax();
	std::cout << "Min: " << min << " Max: " << max << std::endl;
	student.report();

	Student student1 = Student("IVAN1", 1234);
	Student student2 = Student("IVAN2", 1235);
	Student student3 = Student("IVAN3", 1236);
	student1.addGrade("Matlog", 5);
	student1.addGrade("Russian", 5);
	student1.addGrade("Discret", 5);
	student1.addGrade("Programming", 5);
	student1.addGrade("Algebra", 5);

	student2.addGrade("Matlog", 2);
	student2.addGrade("Russian", 3);
	student2.addGrade("Discret", 3);
	student2.addGrade("Programming", 3);
	student2.addGrade("Algebra", 2);

	student3.addGrade("Matlog", 4);
	student3.addGrade("Russian", 5);
	student3.addGrade("Discret", 2);
	student3.addGrade("Programming", 4);
	student3.addGrade("Algebra", 3);
	
	student1.report();
	student2.report();
	student3.report();

	std::vector<Student> college = { student1,student2,student3 };
	stud_report_best(college);
	stud_report_passed(college);
	stud_report_notPassed(college);
	
}
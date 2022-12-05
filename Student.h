/**
* @file student.h
* @brief Declaration of a Student class object.
*
* @author Alexis Lopez
* @bug No known bugs.
*/
#ifndef STUDENT_H
#define STUDENT_H

#include "user.h"

/**
 * @brief A Student class that represents a user.
 *
 * This Student class inherits fields and methods from the User class.
 * This class also implements unique functions that only a Student user would have access to.
*/
//LO2.Use sub-classing to design simple class hierarchies that allow code to be reused for distinct subclasses.
class Student : public User
{
private:
	double final_grade;

public:
	// vector via list initialization used for storing the course grades of a student.
	std::vector<double> student_grades = {0, 0, 0, 0};

	// default student constructor
	Student() noexcept;

	// member methods
	void ViewGrades();
	void UserType() override;
	int StudentChoice();
};
#endif // STUDENT_H

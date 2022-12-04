/**
* @file course.h
* @brief Declaration of a Course class object.
*
* @author Alexis Lopez
* @bug No known bugs.
*/
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <vector>
#include <string>

/**
 * @brief A Course class that contains course related methods and functions.
 *
 * Course class is the base class of the entire program.
 * The User class is the primary sub class of the Course class.
 * This class contains the m_course variable for the course name.
 * It also contains the constant assignments array that contains assignments whose contents cannot be modified
*/
//LO1.Design and implement a class.
class Course
{
private:
	std::string m_course;

public:
	const std::string assignments[4] = { "Quiz", "Exam", "Homework", "Project" };

	//default constructor
	Course();

	//LO1b.Overload a constructor
	Course(std::string course_name);

	// member methods
	void PrintAssignments();
	void PrintCourse();
	void PrintAll();
};
#endif // COURSE_H
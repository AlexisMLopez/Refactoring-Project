/**
* @file course.cpp
* @brief Implementation of a Course class object.
*
* @author Alexis Lopez
* @bug No known bugs.
*/
#include "course.h"

/**
 * @brief Default constructor - intializes m_course to default placeholder values.
 *
 * Theses variables can then be overwritten by functions in the Course class.
*/
Course::Course()
{
	m_course = "No course entered";
}

/**
 * @brief Overloaded properties constructor - intialize a customer course name.
 * @param course_name - any desired course name.
 *
 * Sets the member variable equal to the parameter value in the Course class.
*/
//LO1b.Overload a constructor
Course::Course(std::string course_name) {
	m_course = course_name;
}

/**
 * @brief prints assignments out to user in a stylized format.
 *
 * Simply displays the ordering of how assignment grades should be inputted.
*/
void Course::PrintAssignments() {
	std::cout << "Grades are placed in the following format: " << std::endl;
	for (int i = 0; i < 4; i++) {
		std::cout << "[" << assignments[i] << "]" << " ";
	}
	std::cout << std::endl;
}

/**
 * @brief prints out the course
 *
 * displays either the modified or unmodified course.
*/
void Course::PrintCourse() {
	std::cout << "For the course: " << m_course << std::endl;
}

/**
 * @brief Prints the course and the assignments
*/
void Course::PrintAll() {
	PrintCourse();
	PrintAssignments();
}

/**
 * @brief A simple greeting for the user, that prompts them to select if they are either a student or professor.
*/
void Course::Greeting() {
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Welcome to the Student Gradebook Program!" << std::endl;
	std::cout << "Please select your user type:" << std::endl;
	std::cout << "1: Professor Login" << std::endl;
	std::cout << "2: Student Login" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}
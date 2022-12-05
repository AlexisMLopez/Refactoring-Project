/**
* @file student.cpp
* @brief Implentation of a Student class object.
*
* @author Alexis Lopez
* @bug No known bugs.
*/
#include "student.h"

// default constructor
/**
 * @brief Default constructor - initializes variables to a default values.
 *
 * Sets the final_grade variable to a default value of zero in order to
 * mitigate possible errors.
*/
Student::Student() noexcept
{
	final_grade = 0;
}

// member methods
/**
 * @brief Views every element in the student_grades vector by printing it out to the console.
 *
 * Loops through the aggregate structure by utilizing the iterator.
 * Prints out every element of the vector based on iterator.
*/
void Student::ViewGrades()
{
	std::cout << "You are viewing your grades as a Student" << std::endl;
	for (int i = 0; i < student_grades.size(); i++)
	{
		std::cout << student_grades.at(i) << " ";
	}
	std::cout << std::endl;
}

/**
 * @brief identifies the current account type for the user.
 *
 * This function overrides the user_type function in the User class
 * if the user has selected a student type account.
 *
*/
//LO3. Correctly reason about control flow in a program using dynamic dispatch.
void Student::UserType()
{
	std::cout << "This user is a student!" << std::endl;
	std::cout << std::endl;
}

/**
 * @brief Prompts the a student type user for a selection and uses it to dictate control flow of the program.
 * @return student_choice - student input.
*/
int Student::StudentChoice()
{
	int student_choice = 0;
	std::cout << "Please make a selection:" << std::endl;
	std::cout << "1: View Grades" << std::endl;
	std::cout << "2: Calculate my final grade" << std::endl;
	std::cout << "3: Check user type" << std::endl;
	std::cout << "4: Exit Program" << std::endl;
	std::cout << std::endl;
	std::cin >> student_choice;

	return student_choice;
}

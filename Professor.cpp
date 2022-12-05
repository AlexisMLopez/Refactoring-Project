/**
* @file professor.cpp
* @brief Implementation of a Professor class object.
*
* @author Alexis Lopez
* @bug No known bugs.
*/
#include "professor.h"

/**
 * @brief Default constructor - initializes member variable to default value.
 *
 * calls to the parent User class constructor to access public fields of the Student class
*/
Professor::Professor() noexcept : User()
{
	total_weight = 0;
}

/**
 * @brief Prompts user to enter the name of a student.
 *
 * Takes in a student object as a parameter and modifies the name field
 * to tie that specific name to that student object.
 *
 * @param student - student object passed to modify m_name field.
*/
//LO1a.At least one class in a header file with non - trivial methods implemented in a cpp file
void Professor::EnterStudentName(Student& student)
{
	std::cout << "Please enter the student's name: ";
	std::string name;
	std::cin >> name;
	student.SetName(name);
}

/**
 * @brief identifies the current account type for the user.
 *
 * This function overrides the user_type function in the User class
 * if the user has selected a professor type account.
 *
*/
//LO3. Correctly reason about control flow in a program using dynamic dispatch. 
void Professor::UserType()
{
	std::cout << "This user is a professor!" << std::endl;
	std::cout << std::endl;
}

/**
 * @brief Accesses student object to view student grades.
 *
 * Loops through the aggregate structure by utilizing the iterator.
 * Prints out every element of the vector based on iterator.
 *
 * @param student - Student object that we print out the values in the student_grades vector.
*/
//LO7.Define and use iterators and other operations on aggregates, including operations that take functions as arguments.
void Professor::ViewGrades(Student student)
{
	// Unique view_grades method to Professor class
	std::cout << "You are viewing " << student.GetName() << " grades as a Professor." << std::endl;
	for (int i = 0; i < student.student_grades.size(); i++)
	{
		std::cout << student.student_grades.at(i) << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;
}

/**
 * @brief allows the professor to enter grades into grade Vector in Student class
 *
 * Assigns the professor's input as the student's grades in the student_grades vector.
 *
 * @param student - Student object passed into the function by reference to modify values in student_grades vector in Student class
*/
//LO7.Define and use iterators and other operations on aggregates, including operations that take functions as arguments.
void Professor::SetGrades(Student& student)
{
	double temp = 0;
	std::cout << "You are entering grades for " << student.GetName() << "." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		std::cin >> temp;
		student.student_grades[i] = temp;
	}
	std::cout << "Grades have been successfully submitted" << std::endl;
	std::cout << std::endl;
}

/**
 * @brief Calculates the final grade in the course for a student.
 *
 * Takes the corresponding elements of the vector and multiplies them by the weight of each assignment
 * in order to output the student's final grade for the course.
 *
 * @param student - Student object that is passed by reference whose final_grade field is modified.
*/
void Professor::CalculateCourseAverage(Student& student)
{
	std::cout << "Final Grade: " << student.student_grades.at(0) * quiz_weight + student.student_grades.at(1) *
		exam_weight + student.student_grades.at(2) * homework_weight + student.student_grades.at(3) * project_weight <<
		std::endl;
	std::cout << std::endl;
}

/**
 * @brief Prompts the a professor type user for a selection and uses it to dictate control flow of the program.
 * @return professor_choice - professor input
*/
int Professor::ProfessorChoice()
{
	int professor_choice = 0;
	std::cout << "Please make a selection:" << std::endl;
	std::cout << "1: Enter Grades" << std::endl;
	std::cout << "2: View Grades" << std::endl;
	std::cout << "3: Calculate final grade of student" << std::endl;
	std::cout << "4: Check user type" << std::endl;
	std::cout << "5: Exit Program" << std::endl;
	std::cout << std::endl;
	std::cin >> professor_choice;

	return professor_choice;
}

#include <iostream>
#include "student.h"
#include "professor.h"

// function prototypes
auto ProfessorChoice()->int;
auto StudentChoice()->int;
void Greeting();

/**
 * @brief Dictates the control flow of the program.
 *
 * Utilizes fields and member methods in each distinct class (Course, User, Professor, Student)
 * order to record a student gradebook entry for one course.
 *
 * Each user is split between each portion of a specific control flow. (Professor or Student).
 *
 * @return void
*/
auto main()->int
{
	// Creation of an object of the Student class using default constructor
	Student student;
	// Creation of an object of the Professor class using default constructor
	Professor professor;
	// Creation of course class object using overloaded constructor
	Course course("COP 3003");

	bool system_on = true;
	int switch_input = 0;
	int user_input = 0;

	Greeting();

	std::cin >> switch_input;

	switch (switch_input) {
	case 1:
		while (system_on) {
			user_input = ProfessorChoice();

			if (user_input == 1) {
				course.PrintAssignments();
				course.PrintCourse();
				professor.EnterStudentName(student);
				professor.SetGrades(student);

			}
			else if (user_input == 2) {
				professor.ViewGrades(student);
			}
			else if (user_input == 3) {
				professor.CalculateFinalGrade(student);

			}
			else if (user_input == 4) {
				User user;
				User& usertype2 = professor;
				//LO3. Correctly reason about control flow in a program using dynamic dispatch. 
				usertype2.UserType();
			}
			else if (user_input == 5) {
				// exits while loop
				system_on = false;
			}
			else {
				std::cout << std::endl;
				std::cout << "You made an invalid choice, try again" << std::endl;
			}

		}
		break;
	case 2:
		while (system_on) {
			user_input = StudentChoice();
			if (user_input == 1) {
				student.ViewGrades();
			}
			else if (user_input == 2) {
				professor.CalculateFinalGrade(student);
			}
			else if (user_input == 3) {
				User user;
				User& usertype1 = student;
				//LO3. Correctly reason about control flow in a program using dynamic dispatch. 
				usertype1.UserType();
			}
			else {
				// exits while loop
				system_on = false;
			}
		}
		break;
	default:
		std::cout << "You have made an incorrect login choice, terminating program." << std::endl;
	}
	std::cout << "Exiting the program." << std::endl;

	return 0;
}

/**
 * @brief Prompts the a student type user for a selection and uses it to dictate control flow of the program.
 * @return student_choice - student input.
*/
auto StudentChoice() -> int {
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

/**
 * @brief Prompts the a professor type user for a selection and uses it to dictate control flow of the program.
 * @return professor_choice - professor input
*/
auto ProfessorChoice() -> int {
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

/**
 * @brief A simple greeting for the user, that prompts them to select if they are either a student or professor.
*/
void Greeting() {
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Welcome to the Student Gradebook Program!" << std::endl;
	std::cout << "Please select your user type:" << std::endl;
	std::cout << "1: Professor Login" << std::endl;
	std::cout << "2: Student Login" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}
#include <iostream>
#include "student.h"
#include "professor.h"

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

	int switch_input = 0;
	int user_input = 0;

	course.Greeting();
	
	std::cin >> switch_input;

	switch (switch_input) {
	case 1:
		while (true) {
			user_input = professor.ProfessorChoice();

			if (user_input == 1) {
				course.PrintAll();
				professor.EnterStudentName(student);
				professor.SetGrades(student);

			}
			else if (user_input == 2) {
				professor.ViewGrades(student);
			}
			else if (user_input == 3) {
				professor.CalculateCourseAverage(student);

			}
			else if (user_input == 4) {
				User user;
				User& usertype2 = professor;
				//LO3. Correctly reason about control flow in a program using dynamic dispatch. 
				usertype2.UserType();
			}
			else if (user_input == 5) {
				// exits while loop
				break;
			}
			else {
				std::cout << std::endl;
				std::cout << "You made an invalid choice, try again" << std::endl;
			}

		}
		break;
	case 2:
		while (true) {
			user_input = student.StudentChoice();
			if (user_input == 1) {
				student.ViewGrades();
			}
			else if (user_input == 2) {
				professor.CalculateCourseAverage(student);
			}
			else if (user_input == 3) {
				User user;
				User& usertype1 = student;
				//LO3. Correctly reason about control flow in a program using dynamic dispatch. 
				usertype1.UserType();
			}
			else {
				// exits while loop
				break;
			}
		}
		break;
	default:
		std::cout << "You have made an incorrect login choice, terminating program." << std::endl;
	}
	std::cout << "Exiting the program." << std::endl;

	return 0;
}

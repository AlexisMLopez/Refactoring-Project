/**
* @file professor.h
* @brief Declaration of a Professor class object.
*
* @author Alexis Lopez
* @bug No known bugs.
*/
#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "user.h"
#include "student.h"

/**
 * @brief A Professor class that represents a user.
 *
 * This Professor class inherits fields and methods from the User class.
 * This class also implements unique functions that only a Professor user would have access to.
*/
//LO1a.At least one class in a header file with non - trivial methods implemented in a cpp file
class Professor : public User
{
private:
	//LO6. Use object-oriented encapsulation mechanisms such as interfaces and private members.
	const double quiz_weight = 0.20;
	const double exam_weight = 0.30;
	const double homework_weight = 0.25;
	const double project_weight = 0.25;
	double total_weight;

public:
	//default constructor
	Professor() noexcept;

	// member methods
	void UserType() override;
	static void EnterStudentName(Student& student);
	static void ViewGrades(Student student);
	static void SetGrades(Student& student);
	void CalculateCourseAverage(Student& student);
	int ProfessorChoice();
};
#endif // PROFESSOR_H

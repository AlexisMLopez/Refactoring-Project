/**
* @file user.cpp
* @brief Implementation of a User class object.
*
* @author Alexis Lopez
* @bug No known bugs.
*/
#include "user.h"


/**
 * @brief Default constructor - intializes id number and name variables to default placeholder values.
 *
 * Theses variables can then be overwritten by functions in the User class.
*/
User::User() noexcept
{
	m_idnum = "Unknown";
	m_name = "Null";
}

//LO1c.Utilize an initialization list
/**
 * @brief Overloaded properties constructor - intialize a customer id number for any type of user.
 * @param idnum - id number of user.
 *
 * Sets the member variable equal to the parameter value for any user type.
*/
User::User(std::string idnum) : m_idnum(idnum)
{
	m_idnum = idnum;
}

// getters and setters
//std::string User::GetIdnum() { return m_idnum; }
std::string User::GetIdnum() { return m_idnum; }
void User::SetIdnum(std::string idnum) { m_idnum = idnum; }

//std::string User::GetName() { return m_name; }
std::string User::GetName() { return m_name; }
void User::SetName(std::string name) { m_name = name; }

// member methods
/**
 * @brief virtual function user_type() is made to overwritten so that sub class functions of the same name are carried out instead.
 *
 * @return void
*/
//LO3. Correctly reason about control flow in a program using dynamic dispatch. 
void User::UserType()
{
}

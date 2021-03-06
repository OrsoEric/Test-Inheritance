/**********************************************************************************
**	ENVIROMENT VARIABILE
**********************************************************************************/

#ifndef STUDENT_H_
	#define STUDENT_H_

/**********************************************************************************
**	GLOBAL INCLUDES
**********************************************************************************/

/**********************************************************************************
**	DEFINES
**********************************************************************************/

/**********************************************************************************
**	MACROS
**********************************************************************************/

/**********************************************************************************
**	TYPEDEF
**********************************************************************************/

/**********************************************************************************
**	PROTOTYPE: STRUCTURE
**********************************************************************************/

/**********************************************************************************
**	PROTOTYPE: GLOBAL VARIABILE
**********************************************************************************/

/**********************************************************************************
**	NAMESPACE
**********************************************************************************/

//Assign class to a namespace
namespace User
{

/**********************************************************************************
**	PROTOTYPE: CLASS
**********************************************************************************/

/****************************************************************************
**	Class
**	Student
*****************************************************************************
**	PARAMETER:
**	RETURN:
**	DESCRIPTION:
**	Class Student inherit from class Human
**	A student is a special type of human
****************************************************************************/

class Student: public Human
{
	//Visible to all
	public:
		///--------------------------------------------------------------------------
		///	CONSTRUCTORS
		///--------------------------------------------------------------------------

		//Empty constructor
		Student( void );
		//Initialized constructor
		Student( bool f_male, int age, std::string name, int id );

		///--------------------------------------------------------------------------
		///	DESTRUCTORS
		///--------------------------------------------------------------------------

		//Default destructor
		~Student( void );

		///--------------------------------------------------------------------------
		///	SETTERS
		///--------------------------------------------------------------------------

		//Set student id
		bool set_id( int id );

		///--------------------------------------------------------------------------
		///	GETTERS
		///--------------------------------------------------------------------------

		//Get student id
		int get_id( void );

		///--------------------------------------------------------------------------
		///	TESTERS
		///--------------------------------------------------------------------------

		///--------------------------------------------------------------------------
		///	PUBLIC METHODS
		///--------------------------------------------------------------------------

		//Base class has a method show of the same name. This wins out hiding Human::show()
		bool show( void );

		///--------------------------------------------------------------------------
		///	PUBLIC VARS
		///--------------------------------------------------------------------------

	//Visible to derived classes
	protected:
		///--------------------------------------------------------------------------
		///	PROTECTED METHODS
		///--------------------------------------------------------------------------

		///--------------------------------------------------------------------------
		///	PROTECTED VARS
		///--------------------------------------------------------------------------

	//Visible only inside the class
	private:
		///--------------------------------------------------------------------------
		///	PRIVATE METHODS
		///--------------------------------------------------------------------------

		//Here so that i can easly copy the code.
		bool dummy( void );

		///--------------------------------------------------------------------------
		///	PRIVATE VARS
		///--------------------------------------------------------------------------

		//student id number
		int g_id;

};	//End Class: Student

/**********************************************************************************
**	NAMESPACE
**********************************************************************************/

} //End Namespace

#else
    #warning "Multiple inclusion of hader file"
#endif

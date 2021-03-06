/****************************************************************************
**	OrangeBot Project
*****************************************************************************
**        /
**       /
**      /
** ______ \
**         \
**          \
*****************************************************************************
**
*****************************************************************************
**	Author: 			Orso Eric
**	Creation Date:
**	Last Edit Date:
**	Revision:			1
**	Version:			0.1 ALFA
****************************************************************************/

/****************************************************************************
**	HYSTORY VERSION
*****************************************************************************
**
****************************************************************************/

/****************************************************************************
**	DESCRIPTION
*****************************************************************************
**
****************************************************************************/

/****************************************************************************
**	KNOWN BUG
*****************************************************************************
**
****************************************************************************/

/****************************************************************************
**	INCLUDES
****************************************************************************/

#include <iostream>
//Parent class header
#include "human.h"
//Class Header
#include "student.h"
//Include user log trace
#include "debug.h"

/****************************************************************************
**	USING NAMESPACES
****************************************************************************/

//Never use a whole namespace. Use only what you need from it.
using std::cout;
using std::endl;

/****************************************************************************
**	CLASS NAMESPACE
****************************************************************************/

//Namespace where class items are stored
namespace User
{

/****************************************************************************
**	GLOBAL VARIABILE
****************************************************************************/

/****************************************************************************
*****************************************************************************
**	CONSTRUCTORS
*****************************************************************************
****************************************************************************/

/****************************************************************************
**	Empty Constructor
**	Student | void
*****************************************************************************
**	PARAMETER:
**	RETURN:
**	DESCRIPTION:
****************************************************************************/

Student::Student( void )
{
	///--------------------------------------------------------------------------
	///	STATIC VARIABILE
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	LOCAL VARIABILE
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	CHECK
	///--------------------------------------------------------------------------

	//Trace Enter main
	DENTER();

	///--------------------------------------------------------------------------
	///	INITIALIZATIONS
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	BODY
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	FINALIZATIONS
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	RETURN
	///--------------------------------------------------------------------------

	//Trace Return
	DRETURN();

	return;
}	//end constructor: Student | void

/****************************************************************************
**	Initialized constructor
**	Student | int
*****************************************************************************
**	PARAMETER:
**	RETURN:
**	DESCRIPTION:
**	By default only the empty constructor Human::Human(void) is executed
**	In this case I specifically call the initialized constructor with given parameters
**	The parent constructor Human is executed before the derived constructor
****************************************************************************/

Student::Student( bool f_male, int age, std::string name, int id ) : Human( f_male, age, name )
{
	///--------------------------------------------------------------------------
	///	STATIC VARIABILE
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	LOCAL VARIABILE
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	CHECK
	///--------------------------------------------------------------------------

	//Trace Enter main
	DENTER_ARG("gender: %s, age: %d, name: %s, id: %d\n", GENDER_TO_STR(f_male), age, &name[0], id );

	///--------------------------------------------------------------------------
	///	INITIALIZATIONS
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	BODY
	///--------------------------------------------------------------------------

	//Set class variabiles
	this -> set_id( id );

	///--------------------------------------------------------------------------
	///	FINALIZATIONS
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	RETURN
	///--------------------------------------------------------------------------

	//Trace Return
	DRETURN();

	return;
}	//end constructor:


/****************************************************************************
*****************************************************************************
**	DESTRUCTORS
*****************************************************************************
****************************************************************************/

/****************************************************************************
**	Default Destructor
**
*****************************************************************************
**	PARAMETER:
**	RETURN:
**	DESCRIPTION:
****************************************************************************/

Student::~Student( void )
{
	///--------------------------------------------------------------------------
	///	STATIC VARIABILE
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	LOCAL VARIABILE
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	CHECK
	///--------------------------------------------------------------------------

	//Trace Enter main
	DENTER();

	///--------------------------------------------------------------------------
	///	INITIALIZATIONS
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	BODY
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	FINALIZATIONS
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	RETURN
	///--------------------------------------------------------------------------

	//Trace Return
	DRETURN();

	return;
}	//end empty constructor

/****************************************************************************
*****************************************************************************
**	SETTERS
*****************************************************************************
****************************************************************************/

/****************************************************************************
**	Public Setter
**	set_id | int
*****************************************************************************
**	PARAMETER:
**	RETURN:
**	DESCRIPTION:
****************************************************************************/

bool Student::set_id( int id )
{
	///--------------------------------------------------------------------------
	///	STATIC VARIABILE
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	LOCAL VARIABILE
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	CHECK
	///--------------------------------------------------------------------------

	//Trace Enter main
	DENTER_ARG("id: %d\n", id);

	if (id < 0)
	{
		//bad age
		return true;
	}

	///--------------------------------------------------------------------------
	///	INITIALIZATIONS
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	BODY
	///--------------------------------------------------------------------------

	g_id = id;

	///--------------------------------------------------------------------------
	///	FINALIZATIONS
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	RETURN
	///--------------------------------------------------------------------------

	//Trace Return
	DRETURN();

	return false; //OK
}	//end function: set_id | int

/****************************************************************************
*****************************************************************************
**	GETTERS
*****************************************************************************
****************************************************************************/

/****************************************************************************
*****************************************************************************
**	TESTERS
*****************************************************************************
****************************************************************************/

/****************************************************************************
*****************************************************************************
**	PUBLIC METHODS
*****************************************************************************
****************************************************************************/

/****************************************************************************
**	Public Method
**	show | void
*****************************************************************************
**	PARAMETER:
**	RETURN:
**	DESCRIPTION:
**	There is a method show in the base class Human
**	I declare a show method for the derived class Student
**	This method hides the Human::show method
**	I can explicitally call Human::show and expand it without rewriting more code
****************************************************************************/

bool Student::show( void )
{
	///--------------------------------------------------------------------------
	///	STATIC VARIABILE
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	LOCAL VARIABILE
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	CHECK
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	INITIALIZATIONS
	///--------------------------------------------------------------------------

	//Trace Enter
	DENTER();

	///--------------------------------------------------------------------------
	///	BODY
	///--------------------------------------------------------------------------

	//Explicitaly call the Human show method
	this -> Human::show();
	//Expand the Human::Show method with what's needed by Student::show
	cout << "Student parameters" << endl;
	cout << "Id: " << this -> g_id << endl;

	///--------------------------------------------------------------------------
	///	FINALIZATIONS
	///--------------------------------------------------------------------------

	//Trace Return
	DRETURN();

	return false;	//OK
}	//end method: show | void

/****************************************************************************
*****************************************************************************
**	PRIVATE METHODS
*****************************************************************************
****************************************************************************/

/****************************************************************************
**	Public Method
**
*****************************************************************************
**	PARAMETER:
**	RETURN:
**	DESCRIPTION:
****************************************************************************/

bool Student::dummy( void )
{
	///--------------------------------------------------------------------------
	///	STATIC VARIABILE
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	LOCAL VARIABILE
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	CHECK
	///--------------------------------------------------------------------------

	if (false)
	{
		std::cerr << __FUNCTION__ << ":\n";
		return true; //Fail
	}

	///--------------------------------------------------------------------------
	///	INITIALIZATIONS
	///--------------------------------------------------------------------------

	//Trace Enter main
	DENTER();

	///--------------------------------------------------------------------------
	///	BODY
	///--------------------------------------------------------------------------

	///--------------------------------------------------------------------------
	///	FINALIZATIONS
	///--------------------------------------------------------------------------

	//Trace Return from main
	DRETURN();

	return false;	//OK
}	//end method:

/****************************************************************************
**	NAMESPACES
****************************************************************************/

} //End Namespace

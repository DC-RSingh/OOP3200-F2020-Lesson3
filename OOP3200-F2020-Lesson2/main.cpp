/** main.cpp
 *
 *	In this example program, did the following:
 *		- Examined a simple class with 'instance' data-members, a constructor, accessors, mutators.
 *
 *	@author		Raje Singh
 *	@studentID  100776793
*/

#include <iostream> 		// cin, cout
#include <iomanip>			// fixed, setprecision()

#include "MyconsoleInput.h"
#include "CartesianPoint.h"


// class declaration section

// main() function
int main()
{
	// Declarations
	// a point called 'origin', initialized to 0, 0
	CartesianPoint origin = CartesianPoint(10, 20);
	
	// a point called 'destination'
	CartesianPoint destination;

	int inputX; // temporary input variable for x
	int inputY; // temporary input variable for y

	try
	{
		// Input

		// Prompt the user for the coordinates
		std::cout << "\nEnter coordinates of the destination point: " << std::endl;
		// prompt for, read, and store x coordinate:
		std::cout << "X: ";
		inputX = ConsoleInput::ReadInteger();
		destination.SetX(inputX);

		// prompt for, read, and store y coordinate:
		std::cout << "Y: ";
		inputY = ConsoleInput::ReadInteger();
		destination.SetY(inputY);


		// Processing
		// determine the distance between the two points
		// distance = origin.GetDistanceTo(destination);
		double distance = origin - destination;

		std::cout << "Origin is equal to destination?: " << (origin == destination) << std::endl;

		CartesianPoint newPoint = origin + destination;

		std::cout << "Origin plus destination is equal to: " << newPoint << std::endl;
		
		// Output 
		// Show the points and the distance
		std::cout << std::fixed << std::setprecision(3); // formatting
		std::cout << "\nThe Distance between " << origin
			<< " and " << destination << " is "
			<< distance << ". " << std::endl;

		CartesianPoint anotherPoint;
		
		std::cout << "\nEnter another point: ";
		std::cin >> anotherPoint;

		std::cout << "You Entered: " << anotherPoint;
	}

	catch (std::exception& ex)
	{
		std::cerr << ex.what() << " Ending the program." << std::endl;
	}

	// done.
	std::cout << std::endl << std::endl;
	return 0;
} // end of main()
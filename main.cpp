/**
 * Demo program for snowman exercise.
 * 
 * Author: Erel Segal-Halevi
 * Since : 2021-02
 */

#include "snowman.hpp"
using namespace ariel;
#include <iostream>
#include <stdexcept>
using namespace std;
//using namespace ariel;

int main() {

	cout <<	ariel::snowman(11114411) << endl;   /* Should print:
_===_
(.,.)
( : )
( : )
	*/
	cout << ariel::snowman(33232124) << endl;   /* Should print:
   _
  /_\
\(o_O)
 (] [)>
 (   )
	*/
    cout << ariel::snowman(11111111) << endl; 
    cout << ariel::snowman(44444444) << endl; 

    cout << ariel::snowman(11111) << endl; // should print error

    cout << ariel::snowman(12344561) << endl; //should print error

    
	try {
		cout << ariel::snowman(5) << endl;   // Exception - not a valid code
	} catch (exception& ex) {
	 	cout << "   caught exception: " << ex.what() << endl;  // should print "Invalid code '5'"
	}
}
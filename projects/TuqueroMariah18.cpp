#include <iostream>
using namespace std;

/**
 * Creates a class called Complex to represent complex numbers.
 * In main() it creats at least 3 Complex objects.
 * Test all the class functions using these objects.
 * The prgram should not as for any user unput.
 *
 *@author      Tuquero, Mariah
 *@assignment ICS 212 Assignment 18
 *@date       4/17/25
 */

// Class to represents a complex number in the form a + bi
class Complex {
private:
  // Real part of the complex number
  double real;
  // imaginary part of the complex number
  double imaginary;

public:
  /**
   * Constructs a Complex object.
   * Default value 0 is used for both real and imaginary parts.
   */
  Complex() {
    real =0;
    imaginary = 0;

  }
  /**
   * Mutator member function to change both the real and imaginary data members.
   *
   *@param newReal is the new real value.
   *@param newImaginary is the new imaginary value.
   */

  void set(double newReal, double newImaginary) {
    real = newReal;
    imaginary = newImaginary;
  }

  /** 
   * Accessor method
   *@return real part of the complex number.
   */
  
  double getReal() const {
    return real;
  }
  
  /**
   * Accessor method
   *@return imaginary part of the complex number.
   */

  double getImaginary() const {
    return imaginary;
  }
  
  /**
   *Prints this Complex objects in the form ( a + bi ) or (a - bi) followed by a newline.
   *
   */
  
  void print() const {
    // If the imaginary is postive, prints in the format (a + bi)
    if (imaginary >= 0) {
      cout << "(" << real << " + " << imaginary << "i)" << endl;
    }
    
    else {
      // Prints as (a - bi) - make imaginary part postive for the correct format
      cout << "(" << real << " - " << -imaginary << "i)" << endl;
    } 
  }
};

int main() {

  // Test the constructor
  cout << "Test the contructor." <<endl;
  Complex complex1;
  cout << "Complex number complex1 is: ";
  complex1.print();
  cout << endl;

  // Tests the one set() function
  cout << "Test the one set() function." << endl;
  Complex complex2;
  complex2.set(3.3, -4.4);
  cout << "Complex number complex2 is: ";
  complex2.print();
  cout << endl;

  // Test the two get() functions
  cout << "Test the two get() function." << endl;
  Complex complex3;
  complex3.set(5.5, 6.6);
  cout << "Complex number complex3's real part is: " << complex3.getReal() << endl;
  cout << "Complex number complex3's imaginary part is: " << complex3.getImaginary() << endl;
  cout << endl;

  return 0;
}

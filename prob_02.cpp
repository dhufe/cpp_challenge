/**
 *       @file  prob_01.cpp
 *      @brief
 *
 *
 *     @author  Daniel Hufschlaeger (dhufe), daniel@hufschlaeger.net
 *
 *   @internal
 *     Created  11.10.2023
 *    Revision  ---
 *    Compiler  gcc/g++
 *     License  MIT
 *     Company  dhufe@hufschlaeger.net
 *   Copyright  Copyright (c) 2023, Daniel Hufschlaeger
 *
 *  
 * 
 * =====================================================================================
 */

#include <iostream>

int main ( int argc, const char* argv[] ) {
 
  int iA = 0;
  int iB = 0;
  int iResult = 0;

  std::cout << "First number : "; std::cin >> iA; 
  std::cout << "Second limit: "; std::cin >> iB; 
  std::cout << std::endl << std::endl;


  iResult = 0;
  if ( iA == 0 ) {
    iResult = iB;
  } else {
    while ( iB != 0 ) {
      if ( iA > iB ) {
        iA -= iB;
      } else {
        iB -= iA;
      }
    }
    iResult = iA;
  }

  std::cout << "Greatest common divisor : " << iResult << std::endl;

  return 0;
}

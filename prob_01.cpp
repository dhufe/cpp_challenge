/**
 *       @file  prob_01.cpp
 *      @brief
 *
 * Detailed description starts here.
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
 
  int iCount = 0;
  int iLimit = 0;
  
  std::cout << "Upper limit: "; std::cin >> iLimit; 
  std::cout << std::endl << std::endl;
  

  for ( iCount = 1; iCount < iLimit; ++iCount ) {
    if ( ( iCount % 3 == 0 ) && ( iCount % 5 == 0 ) ) {
        std::cout << iCount << std::endl;
    }
  }

  return 0;
}

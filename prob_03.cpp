/**
 *       @file  prob_01.cpp
 *      @brief  Determining the prime number within an user-defined range.
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
  int iCount   = 0;
  int iDivisor = 1;

  int iLimit = 0;
  
  std::cout << "Upper limit: "; std::cin >> iLimit; 
  std::cout << std::endl << std::endl;


  // loop over all natural numbers 
  for ( iCount = 1; iCount <= iLimit; ++iCount ){
    // state if current number is a prime number
    int iPrime = 1;

    // loop over each divisor candidate
    for ( iDivisor = 2; iDivisor < iCount; ++iDivisor ) {
      
      // if divisor matches the current number -> change state
      if ( iCount % iDivisor == 0 ){
        iPrime = 0;
      }
      
    }

    // if prime print to stdout
    if (iPrime == 1 ) {
      std::cout << iCount << std::endl;
    }
  }

  return 0;
}

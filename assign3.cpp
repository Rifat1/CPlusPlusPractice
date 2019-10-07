/*!
* @file      assign3.cpp
* @brief     Starter file for ENGI 1020 Assignment 3.
*
* @author    Lori Hogan <lehogan@mun.ca>
* @copyright (c) 2019 Lori Hogan. All rights reserved.
* @license   Apache License, Version 2.0
*
* Licensed under the Apache License, Version 2.0 (the "License"); you may not
* use this file except in compliance with the License.  You may obtain a copy
* of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
* WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
* License for the specific language governing permissions and limitations
* under the License.
*/

////////////////////////////////////////////////////////////
// Included headers ////////////////////////////////////////
#include <iostream>
using namespace std;

////////////////////////////////////////////////////////////
// Function declaration for Assignment 3 ///////////////////

/**
* Determine the number of bits required for binary representation of a decimal integer number
*
* @param     n     decimal representation of an integer number, @pre n >= 0
*
* @returns   number of bits required for decimal representation
**/

int binaryLength(int n);
int oddSum(int n);
////////////////////////////////////////////////////////////
// Main function with some basic tests /////////////////////
int main()
{
    // Test case 1: length of 0 should be 1
    int res = binaryLength(0);
    
    if (res == 1)
    {
        cout << "Test case 1 OK" << endl;
    }
    else
    {
        cout << "Test case 1 FAIL: calculated " << res << " instead of 1" << endl;
    }
    
    // Test case 2: length of 1 should be 1
    res = oddSum(1);
    

    if (res == 1)
    {
        cout << "Test case 2 OK" << endl;
    }
    else
    {
        cout << "Test case 2 FAIL: calculated " << res << " instead of 1" << endl;
    }
	
	// Test case 3: length of 3 should be 2
    res = binaryLength(3);
    if (res == 2)
    {
        cout << "Test case 3 OK" << endl;
    }
    else
    {
        cout << "Test case 3 FAIL: calculated " << res << " instead of 2" << endl;
    }
    
    // Try some more test cases yourself...
    
    // Program done
    return 0;
}

////////////////////////////////////////////////////////////
// Implementations/definitions of your functions ///////////
int binaryLength(int n)
{   
    if (n==0){
        return 1;
    }
    int bit = 0;
    while (n > 0)
    {
        n = n / 2;
        bit++;
    }
    return bit;
}

// Your code to complete the assignment goes here!

int oddSum(int n){
    int bit = 0;
    while (n > 0)
    {
        n = n / 2;
        bit++;
    }
    return bit;
}
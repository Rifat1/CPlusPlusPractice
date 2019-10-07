/*!
* @file      assign3.cpp
* @brief     Starter file for ENGI 1020 Assignment 5.
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

/*
Give an array calculate its average

@param values, an array of integers
@param length, the length of the array
			  @prec length >= 0
@returns double indicating average of array values
*/
double arrayAverage(const int values[], int length);

/*
Give a matrix of class test marks, determine the average for a particular test

@param marks, a matrix in which columns hold all the test marks for 
			  a particular student, and rows hold all student marks for a particular test (see Assignment page for example)
@param testCount, the number of tests given to the students
			  (ie the number of rows in the matrix)
			  @prec testCount > 0
@param studentCount, the number of students in the class
			   (ie the number of columns in the matrix)
			   @prec studentCount > 0
@param whichTest, the test (ie row) for which we want to get the average
			   @prec 0 <= whichTest < testCount
*/
double testAverage(const int marks[], int testCount, int studentCount, int whichTest);

int main()
{
	//An array of values
	int arr[] = {50, 55, 60, 65, 70};
	int arrLength = 5;

	//Test 1 - Check arrayAverage()
	double avg = arrayAverage(arr, arrLength);
	cout << "Test 1.0 for arrayAverage() Answer should be 60... ";
	if (avg == 60)
		cout << " correct" << endl;
	else
		cout << " NOT CORRECT, returns " << avg << endl;

	//TODO - Test that function more!!

	int testMarks[] = {50, 70, 60, 65, 55,
					   75, 85, 80, 90, 95,
					   90, 80, 50, 60, 70};
	int avgs[] = {60, 85, 70}; //Precalculated

	//Test 2 - Check testAverage()
	for (int i = 0; i < 3; i++)
	{
		cout << "Test 2." << i << " for testAverage() "
			 << "answer should be " << avgs[i];
		avg = testAverage(testMarks, 3, 5, i);
		if (avg == avgs[i])
			cout << " correct" << endl;
		else
			cout << " NOT CORRECT, returns " << avg << endl;
	}
}

double arrayAverage(const int values[], int length)
{

	double average = 0;
	double sum = 0;
	// length=sizeof(values)/sizeof(values[0]);

	for (int i = 0; i < length; i++)
	{
		sum += values[i];
	}
	average = sum / length;
	return average;
}

double testAverage(const int marks[], int testCount, int studentCount, int whichTest)
{
	double testAverage = 0;
	double sum = 0;

	for (int i = 0; i < testCount; i++)
	{
		// arr[i] = marks[i * 5];
		if (i == whichTest)
		{
			for (int j = 0; j < studentCount; j++)
			{
				sum += marks[i * studentCount + j];
			}
		}
	}
	testAverage = sum / studentCount;
	return testAverage;
}

/** 
// @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CODE_H__
#define __CODE_H__


//#include <stdio_ext.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
void Area_calculation();

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
void Volume_calculation();

int add(int operand1, int operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int subtract(int operand1, int operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
int multiply(int operand1, int operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int divide(int operand1, int operand2);

/**
*  squareroot the operand1 and returns the result
* @param[in] operand1 
* @return Result of squareroot of operand1 
*/
int squareroot(int operand1);

/**
*  square the operand1 and returns the result
* @param[in] operand1 
* @return Result of operand1 * operand1
*/
int square(int operand1);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
void factorial_fun(double value);
void Expo_fun(float base,int power);

void Sin_function(double Degrees_Value);



void Cos_function(double Degrees_Value);



void Tan_function(double Degrees_Value);




void Cosec_function(double Degrees_Value);

void Sec_function(double Degrees_Value);


void Cot_function(double Degrees_Value);

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
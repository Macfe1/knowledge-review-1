#include "main.h"

/**
 * add_function - function to add all the numbers passed by the user
 *
 * @n: number of arguments from the variadic list
 *
 * Return: The adittion of all arguments
 */
int add_function(int n, ...)
{
	va_list arguments;
	va_start(arguments, n);
	
	int iterator = 0, total = 0;

	while(iterartor < n)
	{
		total += va_arg(arguments, int);
		iterator++;
	}

	return (total);

}

/**
 * sub_function - function to substract all the arguments
 *
 * @n: number of arguments from the variadic list
 *
 * Return: The substraction of all arguments
 */
int sub_function(int n, ...)
{
	va_list arguments;
	va_start(arguments, n);

	int iterator = 1; 
	int total = va_arg(arguments, int);
	
	while (iterator < n)
	{
		total -= va_arg(arguments, int);
		iterator++;
	}
	
	return (total);
}


/**
 * mul_function - function to multiply all the arguments
 *
 * @n: number of arguments from the variadic list
 *
 * Return: The multiplication of all arguments
 */
int mul_function(int n, ...)
{
	va_list arguments;
	va_start(arguments, n);

	int iterator = 1; 
	int total = va_arg(arguments, int);
	
	while (iterator < n)
	{
		total *= va_arg(arguments, int);
		iterator++;
	}
	
	return (total);
}

/**
 * div_function - function to divide all the arguments
 *
 * @n: number of arguments from the variadic list
 *
 * Return: The division of all arguments
 */
int div_function(int n, ...)
{
	va_list arguments;
	va_start(arguments, n);

	int iterator = 1; 
	int total = va_arg(arguments, int);
	
	while (iterator < n)
	{
		total /= va_arg(arguments, int);
		iterator++;
	}
	
	return (total);
}

#pragma once
#include <iostream>
#include <exception>

/**
*	Calculate and return the squared sum of two values.
*	@param T - the type of values for calculation
*	@param [in] a <T> first value
*	@param [in] b <T> second value
*	@return [out] <T> squared summ of a and b
*/
template <typename T>
T GetSumSquared(T a, T b)
{
	return (a + b) * (a + b);
}
﻿#include "tasks.h"

/*	Task 02. All Integer Powers of Two [все целые степени двойк]
*
*	По заданному числу распечатайте все целые степени двойки,
*	не превосходящие данного числа, в порядке возрастания.
*	В случае некорректных данных напечатайте ноль.
*
*	Формат входных данных [input]
*	На вход функция принимает целое число типа int.
*
*	Формат выходных данных [output]
*	Функция должна возвратить строку, которая содержит ответ на задание.
*
*	[ input 1]: 40
*	[output 1]: 1 2 4 8 16 32
*
*	[ input 2]: 1
*	[output 2]: 1
*
*	[ input 3]: 0
*	[output 3]: 0
*
*	[ input 4]: -40
*	[output 4]: 0
*/

string task02(int number) {

	if (number < 1)
	{
		return "0";
	}

	string s = "1";

	for (int i = 1; pow(2,i) <= number; i++)
	{
		int t = pow(2, i);
		s += " " + to_string(t);
	}
	return s;
}
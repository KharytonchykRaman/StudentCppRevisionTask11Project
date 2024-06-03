#include "tasks.h"

/*	Task 03. Sum of Number Digits [подсчёт суммы цифр числа]
*
*	Дано целое число (может быть как положительным, так и отрицательным).
*	Подсчитайте сумму его цифр.
*
*	Формат входных данных [input]
*	На вход функция принимает длинное целое число типа long long.
*
*	Формат выходных данных [output]
*	Функция должна возвратить целое число, которое является решением задания.
*
*	[ input 1]: 123456
*	[output 1]: 21
*
*	[ input 2]: 9
*	[output 2]: 9
*
*	[ input 3]: 0
*	[output 3]: 0
*
*	[ input 4]: -15
*	[output 4]: 6
*/

int task03(long long number) {
	number = number > 0 ? number : -number;

	int result = 0;

	while (number > 0)
	{
		result += number % 10;
		number /= 10;
	}

	return result;
}
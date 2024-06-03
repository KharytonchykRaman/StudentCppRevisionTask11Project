#include "tasks.h"

/*	Task 04. Max Number Digit [максимальная цифра числа]
*
*	Дано целое число (может быть как положительным, так и отрицательным).
*	Найдите максимальную цифру заданного числа, используя эффективный алгоритм.
*
*	Формат входных данных [input]
*	На вход функция принимает длинное целое число типа long long.
*
*	Формат выходных данных [output]
*	Функция должна возвратить целое число, которое является решением задания.
*
*	[ input 1]: 12345
*	[output 1]: 5
*
*	[ input 2]: 54321
*	[output 2]: 5
*
*	[ input 3]: 11111
*	[output 3]: 1
*
*	[ input 4]: 0
*	[output 4]: 0
*
*	[ input 5]: -12345
*	[output 5]: 5
*/

int task04(long long number) {
	number = number > 0 ? number : -number;

	int max = 0;

	while (number > 0)
	{
		if (number % 10 > max)
		{
			max = number % 10;
		}
		number /= 10;
	}

	return max;
}
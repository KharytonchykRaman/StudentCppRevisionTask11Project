#include "tasks.h"

/*	Task X. The Count of Min Number Digits [количество наименьших цифр числа]
*
*	Дано целое число (может быть как положительным, так и отрицательным).
*	Определите, используя эффективный алгоритм, какое количество цифр
*	заданного числа равны его наименьшей цифре.
*
*	Примечание
*	Для эффективного алгоритма рекомендуется использовать только один цикл.
*
*	Формат входных данных [input]
*	На вход функция принимает длинное целое число типа long long.
*
*	Формат выходных данных [output]
*	Функция должна возвратить число, которое является решение задачи.
*
*	[ input 1]: 1234
*	[output 1]: 1
*
*	[ input 2]: 4112
*	[output 2]: 2
*
*	[ input 3]: 100
*	[output 3]: 2
*
*	[ input 4]: -2222
*	[output 4]: 4
*/

int calcMinDigit(long long number) {
	number = number > 0 ? number : -number;

	int min = number == 0 ? 0 : 9;

	while (number > 0)
	{
		if (number % 10 < min)
		{
			min = number % 10;
		}
		number /= 10;
	}

	return min;
}

int taskX(long long number) {
	number = number > 0 ? number : -number;

	int count = 0;
	int minDigit = calcMinDigit(number);

	if (number < 10)
	{
		return 1;
	}

	while (number > 0)
	{
		if (number % 10 == minDigit)
		{
			count++;
		}
		number /= 10;
	}

	return count;
}
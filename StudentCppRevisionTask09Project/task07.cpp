#include "tasks.h"

/*	Task 07. Min Number Digit [минимальная цифра числа]
*
*	Дано целое число. Необходимо найти минимальную цифру заданного числа
*	с использованием эффективного алгоритма.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа long.
*
*	Формат выходных данных [output]
*	Должна быть возвращена минимальная цифра числа.
*
*	[ input 1]: 12345
*	[output 1]: 1
*
*	[ input 2]: 54321
*	[output 2]: 1
*
*	[ input 3]: 11111
*	[output 3]: 1
*
*	[ input 4]: 0
*	[output 4]: 0
*
*	[ input 5]: -12345
*	[output 5]: 1
*/

int task07(long a) {
    unsigned int a = 0;
    cout << "Input n: ";
    cin >> a;
    unsigned int min_number = 9;

    while (a > 0)
    {
        if ((a % 10) < min_number) min_number = a % 10;
        a /= 10;
    }

    cout << "Min number : " << min_number << endl;

    system(" pause");
    return 0;
}
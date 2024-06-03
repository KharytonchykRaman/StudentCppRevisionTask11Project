#pragma once
#include "tasks.h"

#define RIGHT " - completed successfully. Well DONE!!!"
#define WRONG " - was not running successfully. ERROR!"


void print(string msg, bool result) {
	cout << msg << (result ? RIGHT : WRONG) << endl;
}

void testingTask01() {
	bool result = task01(15) == 5
		&& task01(49) == 7
		&& task01(1) == 0
		&& task01(-15) == 0
		&& task01(0) == 0
		&& task01(2) == 1
		&& task01(3) == 1
		&& task01(4) == 2
		&& task01(5) == 1
		&& task01(6) == 3
		&& task01(7) == 1
		&& task01(8) == 4
		&& task01(9) == 3
		&& task01(10) == 5
		&& task01(11) == 1
		&& task01(13) == 1
		&& task01(17) == 1
		&& task01(19) == 1
		&& task01(23) == 1
		&& task01(29) == 1
		&& task01(31) == 1
		&& task01(102) == 51
		&& task01(99) == 33;

	print("Task 01 [The Greatest Natural Divisor]", result);
}

void testingTask02() {
	bool result = task02(40) == "1 2 4 8 16 32"
		&& task02(1) == "1"
		&& task02(0) == "0"
		&& task02(-40) == "0"
		&& task02(2) == "1 2"
		&& task02(5) == "1 2 4"
		&& task02(10) == "1 2 4 8"
		&& task02(16) == "1 2 4 8 16"
		&& task02(20) == "1 2 4 8 16"
		&& task02(100) == "1 2 4 8 16 32 64"
		&& task02(500) == "1 2 4 8 16 32 64 128 256"
		&& task02(1000) == "1 2 4 8 16 32 64 128 256 512"
		&& task02(10000) == "1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192";

	print("Task 02 [All Integer Powers of Two]", result);
}

void testingTask03() {
	bool result = task03(123456) == 21
		&& task03(9) == 9
		&& task03(0) == 0
		&& task03(-15) == 6
		&& task03(15) == 6
		&& task03(-9) == 9
		&& task03(-123456) == 21
		&& task03(1234567890) == 45
		&& task03(-1234567890) == 45
		&& task03(123456789) == 45
		&& task03(-123456789) == 45
		&& task03(900) == 9
		&& task03(-900) == 9
		&& task03(11111) == 5
		&& task03(-11111) == 5
		&& task03(999999) == 54
		&& task03(-999999) == 54
		&& task03(1000000) == 1
		&& task03(-1000000) == 1;

	print("Task 03 [Sum of Number Digits]", result);
}

void testingTask04() {
	bool result = task04(12345) == 5
		&& task04(54321) == 5
		&& task04(0) == 0
		&& task04(-12345) == 5
		&& task04(-54321) == 5
		&& task04(1) == 1
		&& task04(-1) == 1
		&& task04(9) == 9
		&& task04(-9) == 9
		&& task04(1234567890) == 9
		&& task04(-1234567890) == 9
		&& task04(999999999) == 9
		&& task04(-999999999) == 9
		&& task04(11111) == 1
		&& task04(-11111) == 1
		&& task04(101) == 1
		&& task04(-101) == 1
		&& task04(121) == 2
		&& task04(-1'223'372'036'854'775'807LL) == 8
		&& task04(1'223'372'036'854'775'807LL) == 8;
	
	print("Task 04 [Max Number Digit]", result);
}

void testingTaskX() {
	bool result = taskX(1234) == 1
		&& taskX(4112) == 2
		&& taskX(100) == 2
		&& taskX(-2222) == 4
		&& taskX(0) == 1
		&& taskX(9) == 1
		&& taskX(10) == 1
		&& taskX(12) == 1
		&& taskX(4321) == 1
		&& taskX(-4321) == 1
		&& taskX(-1234) == 1
		&& taskX(2222) == 4
		&& taskX(1111) == 4
		&& taskX(9999) == 4
		&& taskX(31313) == 2
		&& taskX(13131) == 3
		&& taskX(112233) == 2
		&& taskX(223311) == 2
		&& taskX(221133) == 2
		&& taskX(2211133) == 3
		&& taskX(2221133) == 2
		&& taskX(2233311) == 2
		&& taskX(-33333) == 5
		&& taskX(-11111) == 5
		&& taskX(-31313) == 2
		&& taskX(-13131) == 3
		&& taskX(-112233) == 2
		&& taskX(-223311) == 2
		&& taskX(-221133) == 2
		&& taskX(-2211133) == 3
		&& taskX(-2221133) == 2
		&& taskX(-2233311) == 2
		&& taskX(-9'223'372'036'854'775'807LL) == 2
		&& taskX(9'223'372'036'854'775'807LL) == 2
		&& taskX(-1'223'372'036'854'775'807LL) == 2
		&& taskX(1'223'372'036'854'775'807LL) == 2;

	print("Task X [The Count of Min Number Digits]", result);
}
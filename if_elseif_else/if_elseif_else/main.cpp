// Leap Year problem using C++
// to demonstrate if - else
// go to line 8 to change year

// Grade system to demonstrate if - else if - else
// go to line 30 to change marks
#include <iostream>

int main() {
	int year = 500;

	if (year % 100 == 0) {
		if (year % 400 == 0) {
			std::cout << year << " is Leap Year." << std::endl;
		}
		else {
			std::cout << year << " is Not Leap Year." << std::endl;
		}
	}
	else {
		if (year % 4 == 0) {
			std::cout << year << " is Leap Year." << std::endl;
		}
		else {
			std::cout << year << " is Not Leap Year." << std::endl;
		}
	}

	// Assuming marks is always between 0 - 100
	int marks = 99;
	char grade;

	if (marks < 50) {
		grade = 'F';
	}
	else if (marks < 60) {
		grade = 'E';
	}
	else if (marks < 70) {
		grade = 'D';
	}
	else if (marks < 80) {
		grade = 'C';
	}
	else if (marks < 90) {
		grade = 'B';
	}
	else if (marks < 100) {
		grade = 'A';
	}
	else {
		std::cout << "Invalid marks input." << std::endl;
		return 0;
	}

	std::cout << "Marks: " << marks << " | Grade: " << grade << std::endl;
}
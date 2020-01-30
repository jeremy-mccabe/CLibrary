//#include "Archive.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

#define RESPONSE_SIZE 40
#define FREQUENCY_SIZE 11
#define SUITS 4
#define FACES 13
#define CARDS 52

// functions
void sum(void) {

	int one;
	int two;
	int sum;

	// int one, two, sum;

	printf("Enter first integer\n");
	scanf_s("%d", &one);

	printf("Enter second integer\n");
	scanf_s("%d", &two);

	sum = one + two;

	printf("Sum is %d\n", sum);

} //good practice-> always add comment to closing line of main fx...
void quickIfs(void) {
	int num1;
	int num2;

	printf("Enter two integers, and I will tell you\n");
	printf("the relationships they satisfy: ");

	scanf_s("%d%d", &num1, &num2);

	if (num1 == num2) {
		printf("%d is equal to %d\n", num1, num2);
	}
	if (num1 != num2) {
		printf("%d is not equal to %d\n", num1, num2);
	}
	if (num1 < num2) {
		printf("%d is less than %d\n", num1, num2);
	}
	if (num1 > num2) {
		printf("%d is greater than %d\n", num1, num2);
	}
	if (num1 <= num2) {
		printf("%d is less than or equal to %d\n", num1, num2);
	}
}
// ch2
void twoThree(void) {

	int c;
	int thisVariable;
	int q76354;
	int number;
	int a;

	printf("%s", "Enter an integer: ");
	scanf_s("%d", &a);
	if (a != 7) {
		printf("%s", "The variable number is not equal to 7.\n");
		puts("This is a C program.");
		puts("This is a C\nprogram.");
		puts("This\nis\na\nC\nprogram.");
		puts("This\tis\ta\tC\t program.");
	};



}
void twoFour(void) {
	// this will produce the product of 3 ints
	int x;
	int y;
	int z;
	int result;

	printf("%s", "Gimme 3 ints..\n");
	scanf_s("%d%d%d", &x, &y, &z);
	result = x * y * z;
	printf("The product is: %d\n", result);
}
void twoSixteen(void) {
	int a;
	int b;

	printf("%s", "Gimme two nums\n");
	scanf_s("%d%d", &a, &b);

	int sum = a + b;
	int dif = a - b;
	int pro = a * b;
	int quo = a / b;
	int rem = a % b;

	printf("Two number equations:\nSum:%d\nDif:%d\nPro:%d\nQuo:%d\nRem:%d\n", sum, dif, pro, quo, rem);
}
void weirdMemoryPrinting(void) {
	int first;
	int second;

	printf("%s", "Enter 2 ints:\n");
	scanf_s("%d%d", &first, &second);

	//int *memory = &second;

	if (first > second) {
		printf("%d is larger\n", first);
	}
	else if (second > first) {
		printf("%d is larger\n", second);
	}
	else {
		printf("These numbers are equal\n");
	}
	printf("Address of 'second': %p\n", &second);
}
void twoNineteen(void) {
	int a;
	int b;
	int c;
	char statement[] = "Enter 3 different integers: ";
	printf("%s", statement);
	scanf_s("%d%d%d", &a, &b, &c);
	int sum = a + b + c;
	int avg = (a + b + c) / 3;
	int pro = a * b*c;
	int tiny;
	int big;
	if (a < b && a < c) {
		tiny = a;
	}
	else if (b < a && b < c) {
		tiny = b;
	}
	else {
		tiny = c;
	}
	if (a > b && a > c) {
		big = a;
	}
	else if (b > a && b > c) {
		big = b;
	}
	else {
		big = c;
	}
	printf("Sum is %d\nAverage is %d\nProduct is %d\nSmallest is %d\nLargest is %d\n\n", sum, avg, pro, tiny, big);
}
void circle(void) {//float pi = 3.14159;
	int radius;
	puts("Type radius of your circle:\n");
	scanf_s("%d", &radius);
	printf("Your circle's diameter is: %d, circumference is: %f, and area is: %f", radius * 2, radius * 2 * 3.14159, (radius*radius)*3.14159);
}
void splitDigits(void) {

	int num;
	int first;
	int second;
	int third;
	int fourth;
	int fifth;

	scanf_s("%d", &num);
	fifth = num % 10;
	fourth = num / 10 % 10;
	third = num / 100 % 10;
	second = num / 1000 % 10;
	first = num / 10000 % 10;

	printf("%d %d %d %d %d\n", first, second, third, fourth, fifth);
}
void bmiCalc(void) {
	int weight;
	int height;
	puts("Enter you WEIGHT in pounds:");
	scanf_s("%d", &weight);
	puts("Enter you HEIGHT in inches:");
	scanf_s("%d", &height);
	int bmi = (weight * 703) / (height*height);
	printf("Your BMI is: %d!\n\n", bmi);
	puts("BMI VALUES\nUnderweight:\tless than 18.5\nNormal:\t\tbetween 18.5 and 24.9\nOverweight:\tbetween 25 and 29.9\nObese:\t\t30 or greater\n");
}
void carPool(void) {
	puts("CARPOOLING APP\n\n");

	int miles;
	int gasPrice;
	int mpg;
	int parkFee;
	int tollFee;
	int total;
	int carPoolFee = 24;

	printf("How many miles do you drive per day?\n");
	scanf_s("%d", &miles);
	printf("How much does 1 Gal of gas cost?\n");
	scanf_s("%d", &gasPrice);
	printf("What's your avg. mpg?\n");
	scanf_s("%d", &mpg);
	printf("Enter any parking fees.\n");
	scanf_s("%d", &parkFee);
	printf("Enter any toll road fees.\n");
	scanf_s("%d", &tollFee);

	total = (miles * gasPrice) / mpg + parkFee + tollFee;

	int diff = total - carPoolFee;


	if (total < carPoolFee) {
		puts("Just keep on driving solo, you'll save money.");
	}
	else {
		puts("\nYou should consider carpooling, you'll save money!\n");
		printf("You'll save $%d per day and about $%d per month!!\n\n", diff, diff * 30);
	}
}
// ch3
void tankful(void) {

	int totalMi = 0;
	int totalGal = 0;
	int totalAvg = 0;
	int gal = 0;
	int mi = 0;
	int avg = 0;

	// -1 is sentinel/flag/dummy/signal value
	// retrieve gal
	puts("Enter number of gallons used (-1 to quit): ");
	scanf_s("%d", &gal);

	while (gal != -1) {


		// retrieve mi
		puts("\nEnter number of miles driven: ");
		scanf_s("%d", &mi);
		avg = mi / gal;
		printf("\nAverage for this tank was %d m.p.g.\n\n", avg);
		// tally to totals
		totalMi += mi;
		totalGal += gal;

		// -1 is sentinel/flag/dummy/signal value
		// retrieve gal
		puts("Enter number of gallons used (-1 to quit): ");
		scanf_s("%d", &gal);


	};

	if (totalMi > 0) {
		totalAvg = totalMi / totalGal;
		printf("The overall average miles/gallon was %d\n\n", totalAvg);
	}

	puts("See ya!!");

}
void creditLimit(void) {
	int account = 0;
	int balance = 0;
	int charges = 0;
	int credits = 0;
	int limit = 0;

	printf("Enter ACCOUNT number (Enter -1 to end): ");
	scanf_s("%d", &account);

	while (account != -1) {

		printf("Enter beginning balance: ");
		scanf_s("%d", &balance);
		printf("Enter total charges: ");
		scanf_s("%d", &charges);
		printf("Enter total credits: ");
		scanf_s("%d", &credits);
		printf("Enter credit limit: ");
		scanf_s("%d", &limit);


		// "if over budget" print clause
		if ((balance + charges - credits) > limit) {
			printf("\n\nACCOUNT:\t%d", account);
			printf("\nCredit limit:\t%d", limit);
			printf("\nBalance:\t%d", balance + charges - credits);
			puts("\nCredit Limit Exceeded.");
		}

		// restart loop
		printf("\n\nEnter account number (Enter -1 to end): ");
		scanf_s("%d", &account);

	}// end loop

	puts("See ya!!");
}
void sales(void) {

	float sales = 0;
	float bonus = 0;
	float total = 0;

	printf("(-1 to quit) Enter sales in $:");
	scanf_s("%f", &sales);

	while (sales != -1) {

		bonus = sales * .09;
		total = 200 + bonus;
		printf("Salary is: $%.2f", total);

		printf("\n\n(-1 to quit) Enter sales in $:");
		scanf_s("%f", &sales);
	}
}
void interest(void) {

	// variables
	float interest = 0;
	float principal = 0;
	float rate = 0;
	int days = 0;

	// first prompt
	printf("Enter loan principal (-1 to end): ");
	scanf_s("%f", &principal);

	//start loop
	while (principal != -1) {

		//printf("Enter interest rate: ");
		//scanf("%f", &rate);
		printf("Enter term of loan in days: ");
		scanf_s("%d", &days);


		for (int i = 5; i <= 10; i++) {
			rate = i * .01;
			// math logic
			interest = principal * rate * days / 365;
			// results
			printf("The interest charge at %d percent is: $%.2f\n", i, interest);

		}
		//reprompt
		printf("\n\nEnter loan principal (-1 to end): ");
		scanf_s("%f", &principal);
	}

	puts("See ya!!");
}
void employeeSalary(void) {

	int hours = 0;
	float rate = 0;
	float salary = 0;

	//prompt
	printf("Enter # of hours worked (-1 to quit): ");
	scanf_s("%d", &hours);

	//loop
	while (hours != -1) {

		printf("\nEnter the hourly rate ($00.00): ");
		scanf_s("%f", &rate);


		//overtime 
		if (hours > 40) {
			salary = 40 * rate;
			int overTime = hours - 40;
			printf("Rate:%.2f, Hours:%d, OT:%d", rate, hours, overTime);
			salary += (rate * 1.5 * overTime);
		}
		//no overtime
		else {
			salary = hours * rate;
		}

		//results
		printf("\nSalary is: $%.2f", salary);

		hours = 0;
		rate = 0;
		salary = 0;

		//reloop
		printf("\n\nEnter # of hours worked (-1 to quit): ");
		scanf_s("%d", &hours);
	}

	//exit
	puts("\n\nSee ya!!");
}
void largestNumbers(void) {

	int counter = 1;
	unsigned int number = 0;
	unsigned int secondLargest = 0;
	unsigned int largest = 0;
	// Info
	puts("Input 10 numbers:");
	// Loop start
	while (counter <= 10) {
		// Prompt
		printf("Input #%d: ", counter);
		scanf_s("%u", &number);
		// Logic
		if (counter == 1) {
			largest = number;
		}
		if (number > largest) {
			secondLargest = largest;
			largest = number;
		}
		else if (number > secondLargest) {
			secondLargest = number;
		}

		counter++;
		// Sanity Check
		printf("number:%d, second:%u, largest:%u\n", number, secondLargest, largest);
	}

	printf("\nThe second largest number is: %u\n\n", secondLargest);
	printf("The largest number is: %u\n\n", largest);
}
void aGrid(void) {

	int a = 3;
	puts("A\tA+2\tA+4\tA+6\n");
	while (a <= 15) {
		printf("%d\t%d\t%d\t%d\t", a, a + 2, a + 4, a + 6);
		a += 3;
		puts("");
	}

	puts("");

}
void factorial(void) {
	// delcare it
	int factorial = 0;
	int num = 0;
	// grab it
	printf("Type a number:");
	scanf_s("%d", &num);
	factorial = num * (num - 1);
	num--;
	// add it
	while (num > 1) {
		factorial *= (num - 1);
		num--;
	}
	printf("%d\n", factorial);
}
void heartRate(void) {

	//declarations:
	int dob = 0;
	int date = 0;
	int age = 0;
	int max = 0;
	int targetLow = 0;
	int targetHigh = 0;
	/////////

	//take in dates in 6 digit format
	//date
	printf("Enter today's date (mmddyy): ");
	scanf_s("%d", &date);
	//dob
	printf("Enter your DOB (mmddyy): ");
	scanf_s("%d", &dob);
	//split digits
	date %= 100;
	dob %= 100;
	//get diff between dob yr and today year
	age = (100 - dob) + date;
	//do bpm math
	max = 220 - age;
	targetLow = max * .5;
	targetHigh = max * .8;
	//spit it out
	printf("Age:%d\nMax HR:%d\nTarget HR:%d-%d(Avg. %d)", age, max, targetLow, targetHigh, (targetHigh + targetLow) / 2);


	puts("\n");
}
void encryption(void) {

	int prompt = 0;

	do {

		//procedures

		//////////////////// ENCRYPT -> ///////////////////////
		int pin = 0;
		int mathPin = 0;
		int mixedPin = 0;
		//read 4 digit int
		printf("Enter 4 digit pin: ");
		scanf_s("%d", &pin);
		//split assignment
		int four = ((pin / 1 % 10) + 7) % 10;
		int three = ((pin / 10 % 10) + 7) % 10;
		int two = ((pin / 100 % 10) + 7) % 10;
		int one = ((pin / 1000 % 10) + 7) % 10;
		//print encrypted
		printf("Your (encrypted) PIN is: %d%d%d%d...", three, four, one, two);
		puts("\n");

		//////////////////// DECRYPT -> ///////////////////////
		int PIN = 0;
		int unmathPin = 0;
		//read 4 digit int
		printf("Enter 4 digit ENCRYPTED pin: ");
		scanf_s("%d", &PIN);
		// convert
		int FOUR = PIN / 1 % 10;
		int THREE = PIN / 10 % 10;
		int TWO = PIN / 100 % 10;
		int ONE = PIN / 1000 % 10;
		// check if 10 needs to be added to one, two, or three...
		if (ONE < 7) {
			ONE += 10;
		}
		if (TWO < 7) {
			TWO += 10;
		}
		if (THREE < 7) {
			THREE += 10;
		}
		if (FOUR < 7) {
			FOUR += 10;
		}
		// remove the 7
		FOUR -= 7;
		THREE -= 7;
		TWO -= 7;
		ONE -= 7;
		// printout
		printf("Your PIN is: %d%d%d%d!", THREE, FOUR, ONE, TWO);
		puts("\n");

		//re-run-it
		printf("(PRESS '0' TO RESTART):");
		scanf_s("%d", &prompt);
		puts("");
		puts("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
		puts("");


	} while (prompt == 0);

	puts("Thanks. See ya!!\n\n");
}
// ch4
void powInterest(void) {
	//#include <math.h>
	float a;
	for (int i = 1; i <= 10; i++) {
		a = 1000 * pow(1 + .05, i);
		printf("\nbalance after year %d: %.2f\n", i, a);
	}
}
void averageGrade(void) {
	int grade;
	unsigned int aCount = 0;
	unsigned int bCount = 0;
	unsigned int cCount = 0;
	unsigned int dCount = 0;
	unsigned int fCount = 0;

	// adds up ALL 4.0, 3.0, 2.0, etc...
	float gpa = 0;
	// keeps tally on entires
	int tally = 0;



	puts("Enter the letter grades.");
	puts("Enter the EOF character to end input.");

	while ((grade = getchar()) != EOF) {
		switch (grade) {
		case 'A':
		case 'a':
			aCount++;
			tally++;
			gpa += 4;
			break;
		case 'B':
		case 'b':
			bCount++;
			tally++;
			gpa += 3;
			break;
		case 'C':
		case 'c':
			cCount++;
			tally++;
			gpa += 2;
			break;
		case 'D':
		case 'd':
			dCount++;
			tally++;
			gpa += 1;
			break;
		case 'F':
		case 'f':
			fCount++;
			tally++;
			break;
		case '\n':
		case '\t':
		case ' ':
			break;

		default:
			printf("%s", "Incorrect letter grade entered...");
			puts("  Enter a new grade.");
			break;


		}

	}

	puts("\nEntries are as follows:");
	printf("\nA's: %d", aCount);
	printf("\nB's: %d", bCount);
	printf("\nC's: %d", cCount);
	printf("\nD's: %d", dCount);
	printf("\nF's: %d\n", fCount);
	//gpa
	gpa = gpa / tally;
	printf("\nThe GPA for the class is: %.1f\n\n", gpa);

}
void factorial2(void) {
	unsigned int num;
	int factorial = 1;
	puts("Enter a factorial integer");
	scanf_s("%u", &num);
	int recap = num;
	factorial = num;


	while (num > 1) {
		factorial *= num - (1);
		num--;
		printf("\nnumber this iteration: %d\ntotal: %d", num, factorial);
	}

	printf("\n\n\nThe factorial of %d is: %d\n\n", recap, factorial);
}
void recession(void) {
	unsigned int limit1 = 0;
	unsigned int balance1 = 0;
	unsigned int limit2 = 0;
	unsigned int balance2 = 0;
	unsigned int limit3 = 0;
	unsigned int balance3 = 0;
	unsigned int newLimit1 = 0;
	unsigned int newLimit2 = 0;
	unsigned int newLimit3 = 0;



	//account#1
	puts("Enter limit before recession of account#1:");
	scanf_s("%d", &limit1);
	puts("Enter current balance of account#1:");
	scanf_s("%d", &balance1);
	//       #2
	puts("Enter limit before recession of account#2:");
	scanf_s("%d", &limit2);
	puts("Enter current balance of account#2:");
	scanf_s("%d", &balance2);
	//       #3
	puts("Enter limit before recession of account#3:");
	scanf_s("%d", &limit3);
	puts("Enter current balance of account#3:");
	scanf_s("%d", &balance3);

	//customer #1 segment
	newLimit1 = limit1 / 2;
	printf("\nCustomer 1's new limit is: %u", newLimit1);
	if (balance1 > newLimit1) {
		puts("\nCustomer 1 is currently over balance/limit.");
	}
	//customer #2 segment
	newLimit2 = limit2 / 2;
	printf("\nCustomer 2's new limit is: %u", newLimit2);
	if (balance2 > newLimit2) {
		puts("\nCustomer 2 is currently over balance/limit.");
	}//customer #3 segment
	newLimit3 = limit3 / 2;
	printf("\nCustomer 3's new limit is: %u", newLimit3);
	if (balance3 > newLimit3) {
		puts("\nCustomer 3 is currently over balance/limit.");
	}
}
void histogram(void) {

	int one, two, three, four, five;
	printf("Enter 5 numbers followed by spaces: ");
	scanf_s("%d%d%d%d%d", &one, &two, &three, &four, &five);


	for (int j = 0; j < one; j++) {
		printf("%s", "*");
	}
	puts(" ");
	for (int j = 0; j < two; j++) {
		printf("%s", "*");
	}
	puts(" ");
	for (int j = 0; j < three; j++) {
		printf("%s", "*");

	}
	puts(" ");
	for (int j = 0; j < four; j++) {
		printf("%s", "*");

	}
	puts(" ");
	for (int j = 0; j < five; j++) {
		printf("%s", "*");

	}
	puts(" ");
}
void calculatingSales(void) {
	float total = 0;
	float cost = 0;
	int product = 0;
	int quantity = 0;

	printf("%s", "Enter product # (0 to quit): ");
	scanf_s("%d", &product);
	if (product > 0 && product < 6) {
		printf("%s", "Enter quantity sold: ");
		scanf_s("%d", &quantity);
	}

	while (product != 0) {
		//use switch to determine pricing
		switch (product) {
		case 1:
			cost = 2.98;
			break;
		case 2:
			cost = 4.50;
			break;
		case 3:
			cost = 9.98;
			break;
		case 4:
			cost = 4.49;
			break;
		case 5:
			cost = 6.87;
			break;
		default:
			puts("Invalid inventory selection.  Please re-enter.");
		}

		total += cost * quantity;

		// rereads product number and quantity sold
		printf("%s", "Enter product # (0 to quit): ");
		scanf_s("%d", &product);
		if (product > 0 && product < 6) {
			printf("%s", "Enter quantity sold: ");
			scanf_s("%d", &quantity);
		}

	}

	// print total of all products sold last week
	printf("Total for last weeks sales: $ %.2f", total);
	//exit
	puts(" ");
	puts(" ");
}
void conversionTable(void) {
	//decimal binary hex(%X) octal(%o)
	puts("DEC\tOCT\tHEX\tBIN\n");
	for (int i = 1; i <= 256; i++) {

		int num = i;

		//print statement
		printf("%d\t%o\t%X\t", num, num, num);
		//binary sequence
		if (num % 256 == 0) { printf("00000001 00000000"); }
		else {
			if (num / 128 >= 1) {
				printf("1");
				num -= 128;
			}
			else {
				printf("0");
			}
			if (num / 64 >= 1) {
				printf("1");
				num -= 64;
			}
			else {
				printf("0");
			}
			if (num / 32 >= 1) {
				printf("1");
				num -= 32;
			}
			else {
				printf("0");
			}
			if (num / 16 >= 1) {
				printf("1");
				num -= 16;
			}
			else {
				printf("0");
			}
			if (num / 8 >= 1) {
				printf("1");
				num -= 8;
			}
			else {
				printf("0");
			}
			if (num / 4 >= 1) {
				printf("1");
				num -= 4;
			}
			else {
				printf("0");
			}
			if (num / 2 >= 1) {
				printf("1");
				num -= 2;
			}
			else {
				printf("0");
			}
			if (num / 1 == 1) {
				printf("1");
			}
			else {
				printf("0");
			}
		}//end else statement for 256
		 //newline
		printf("\n\n");
	}// end for loop
}
void valueOfPi(void) {
	double pi = 4;
	int count = 1;
	int check1 = 1;
	int	check2 = 1;
	int	check3 = 1;
	int	check4 = 1;

	for (float i = 1.0; i <= 400.0; i += 4.0) {

		//1st term
		pi -= (4.0 / (i + 2.0));
		printf(" Term: %d\tValue: %f", count, pi);

		// notification matching statements
		if (check1 == 1) {
			if (pi == 3.14) {
				printf("\tFirst time: 3.14!");
				check1 = 0;
			}
		}
		if (check2 == 1) {
			if (pi == 3.141) {
				printf("\tFirst time: 3.141!");
				check2 = 0;
			}
		}
		if (check3 == 1) {
			if (pi == 3.1415) {
				printf("\tFirst time: 3.1415!");
				check3 = 0;
			}
		}
		if (check4 == 1) {
			if (pi == 3.14159) {
				printf("\tFirst time: 3.14159!");
				check4 = 0;
			}
		}
		puts(" ");
		count++;
		//2nd term
		pi += (4.0 / (i + 4.0));
		printf(" Term: %d\tValue: %f", count, pi);
		// notification matching statements
		if (check1 == 1) {
			if (pi == 3.14) {
				printf("\tFirst time: 3.14!");
				check1 = 0;
			}
		}
		if (check2 == 1) {
			if (pi == 3.141) {
				printf("\tFirst time: 3.141!");
				check2 = 0;
			}
		}
		if (check3 == 1) {
			if (pi == 3.1415) {
				printf("\tFirst time: 3.1415!");
				check3 = 0;
			}
		}
		if (check4 == 1) {
			if (pi == 3.14159) {
				printf("\tFirst time: 3.14159!");
				check4 = 0;
			}
		}
		puts(" ");
		count++;

	}//end for loop
}
void pythagoreanTriples(void) {
	// this is "brute force" computing

	for (int i = 1; i <= 500; i++) {
		for (int j = 1; j <= 500; j++) {
			for (int k = 1; k <= 500; k++) {
				printf("Side one: %d  /  Side two: %d/  Side three: %d\n", i, j, k);
				double a = pow(i, 2);
				double b = pow(j, 2);
				double c = pow(k, 2);
				if (a + b == c) {
					puts("^^^^^^^Right Triangle Here!^^^^^^");
				}
			}
		}
	}

}
void weeklyPay(void) {
	double totalPayout = 0;
	//double employeePayout = 0;
	unsigned int code;

	printf("Enter employee code (0 to exit): ");
	scanf_s("%u", &code);

	while (code != 0) {
		double pay = 0;
		double hours = 0;
		double sales = 0;
		int pieces = 0;

		switch (code) {

		case 1: //manager
			puts("$1,000 payed out to employee type: MANAGER");
			totalPayout += 1000;
			break;
		case 2: //hourly
			printf("Enter employee hours: ");
			scanf_s("%lf", &hours);
			if (hours <= 40) {
				pay = hours * 10;
			}
			else {
				pay = 400 + ((hours - 40) * 15);
			}
			printf("$%.2lf payed out to employee type: STD EMPLOYEE", pay);
			totalPayout += pay;
			puts(" ");
			break;
		case 3: //commission
			printf("Enter employee sales: ");
			scanf_s("%lf", &sales);
			pay = 250 + (sales * .057);
			printf("$%.2lf payed out to employee type: COM EMPLOYEE", pay);
			totalPayout += pay;
			puts(" ");
			break;
		case 4: //piece
			printf("How many pieces did the employee produce?");
			scanf_s("%d", &pieces);
			pay = pieces * 1.25;
			printf("$%.2lf payed out to employee type: PC. EMPLOYEE", pay);
			totalPayout += pay;
			puts(" ");
			break;
		default:
			printf("Invalid employee code, try again.");
		}//end switch
		 //re-prompt
		puts(" ");
		puts(" ");
		printf("Enter employee code (0 to exit): ");
		scanf_s("%u", &code);
	}//end while

	printf("\nTOTAL WEEKLY PAYOUT: $%.2lf\n", totalPayout);
	puts("********************************\n");
}
void romanNumerals(void) {

	puts("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");

	for (int num = 1; num <= 100; num++) {
		if (num < 10) {
			switch (num) {
			case 1:
				puts("I");
				break;
			case 2:
				puts("II");
				break;

			case 3:
				puts("III");
				break;

			case 4:
				puts("IV");
				break;

			case 5:
				puts("V");
				break;

			case 6:
				puts("VI");
				break;

			case 7:
				puts("VII");
				break;

			case 8:
				puts("VIII");
				break;

			case 9:
				puts("IX");
				break;

			}

		}
		else if (num >= 10 && num < 20) {

			printf("X");

			int tens = num - 10;

			switch (tens) {
			case 0:
				puts(" ");
				break;
			case 1:
				puts("I");
				break;
			case 2:
				puts("II");
				break;

			case 3:
				puts("III");
				break;

			case 4:
				puts("IV");
				break;

			case 5:
				puts("V");
				break;

			case 6:
				puts("VI");
				break;

			case 7:
				puts("VII");
				break;

			case 8:
				puts("VIII");
				break;

			case 9:
				puts("IX");
				break;


			}
		}
		else if (num >= 20 && num < 30) {

			printf("XX");

			int tens = num - 20;

			switch (tens) {
			case 0:
				puts(" ");
				break;
			case 1:
				puts("I");
				break;
			case 2:
				puts("II");
				break;

			case 3:
				puts("III");
				break;

			case 4:
				puts("IV");
				break;

			case 5:
				puts("V");
				break;

			case 6:
				puts("VI");
				break;

			case 7:
				puts("VII");
				break;

			case 8:
				puts("VIII");
				break;

			case 9:
				puts("IX");
				break;


			}
		}
		else if (num >= 30 && num < 40) {

			printf("XXX");

			int tens = num - 30;

			switch (tens) {
			case 0:
				puts(" ");
				break;
			case 1:
				puts("I");
				break;
			case 2:
				puts("II");
				break;

			case 3:
				puts("III");
				break;

			case 4:
				puts("IV");
				break;

			case 5:
				puts("V");
				break;

			case 6:
				puts("VI");
				break;

			case 7:
				puts("VII");
				break;

			case 8:
				puts("VIII");
				break;

			case 9:
				puts("IX");
				break;


			}
		}
		else if (num >= 40 && num < 50) {

			printf("XL");

			int tens = num - 40;

			switch (tens) {
			case 0:
				puts(" ");
				break;
			case 1:
				puts("I");
				break;
			case 2:
				puts("II");
				break;

			case 3:
				puts("III");
				break;

			case 4:
				puts("IV");
				break;

			case 5:
				puts("V");
				break;

			case 6:
				puts("VI");
				break;

			case 7:
				puts("VII");
				break;

			case 8:
				puts("VIII");
				break;

			case 9:
				puts("IX");
				break;


			}
		}
		else if (num >= 50 && num < 60) {

			printf("L");

			int tens = num - 50;

			switch (tens) {
			case 0:
				puts(" ");
				break;
			case 1:
				puts("I");
				break;
			case 2:
				puts("II");
				break;

			case 3:
				puts("III");
				break;

			case 4:
				puts("IV");
				break;

			case 5:
				puts("V");
				break;

			case 6:
				puts("VI");
				break;

			case 7:
				puts("VII");
				break;

			case 8:
				puts("VIII");
				break;

			case 9:
				puts("IX");
				break;


			}
		}
		else if (num >= 60 && num < 70) {

			printf("LX");

			int tens = num - 60;

			switch (tens) {
			case 0:
				puts(" ");
				break;
			case 1:
				puts("I");
				break;
			case 2:
				puts("II");
				break;

			case 3:
				puts("III");
				break;

			case 4:
				puts("IV");
				break;

			case 5:
				puts("V");
				break;

			case 6:
				puts("VI");
				break;

			case 7:
				puts("VII");
				break;

			case 8:
				puts("VIII");
				break;

			case 9:
				puts("IX");
				break;


			}
		}
		else if (num >= 70 && num < 80) {

			printf("LXX");

			int tens = num - 70;

			switch (tens) {
			case 0:
				puts(" ");
				break;
			case 1:
				puts("I");
				break;
			case 2:
				puts("II");
				break;

			case 3:
				puts("III");
				break;

			case 4:
				puts("IV");
				break;

			case 5:
				puts("V");
				break;

			case 6:
				puts("VI");
				break;

			case 7:
				puts("VII");
				break;

			case 8:
				puts("VIII");
				break;

			case 9:
				puts("IX");
				break;


			}
		}
		else if (num >= 80 && num < 90) {

			printf("LXXX");

			int tens = num - 80;

			switch (tens) {
			case 0:
				puts(" ");
				break;
			case 1:
				puts("I");
				break;
			case 2:
				puts("II");
				break;

			case 3:
				puts("III");
				break;

			case 4:
				puts("IV");
				break;

			case 5:
				puts("V");
				break;

			case 6:
				puts("VI");
				break;

			case 7:
				puts("VII");
				break;

			case 8:
				puts("VIII");
				break;

			case 9:
				puts("IX");
				break;


			}
		}
		else if (num >= 90 && num < 100) {

			printf("XC");

			int tens = num - 90;

			switch (tens) {
			case 0:
				puts(" ");
				break;
			case 1:
				puts("I");
				break;
			case 2:
				puts("II");
				break;

			case 3:
				puts("III");
				break;

			case 4:
				puts("IV");
				break;

			case 5:
				puts("V");
				break;

			case 6:
				puts("VI");
				break;

			case 7:
				puts("VII");
				break;

			case 8:
				puts("VIII");
				break;

			case 9:
				puts("IX");
				break;


			}
		}


	}
	puts("C");
	puts("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	puts(" ");
}
void daysOfXmas(void) {
	//on the DAYth day of christmas, my true love gave to me...
	for (int day = 1; day <= 12; day++) {

		switch (day) {
		case 2:
			puts("On the second day of Christmas my true love gave to me...");
			break;
		case 3:
			puts("On the third day of Christmas my true love gave to me...");
			break;
		case 4:
			puts("On the fourth day of Christmas my true love gave to me...");
			break;
		case 5:
			puts("On the fifth day of Christmas my true love gave to me...");
			break;
		case 6:
			puts("On the sixth day of Christmas my true love gave to me...");
			break;
		case 7:
			puts("On the seventh day of Christmas my true love gave to me...");
			break;
		case 8:
			puts("On the eigth day of Christmas my true love gave to me...");
			break;
		case 9:
			puts("On the ninth day of Christmas my true love gave to me...");
			break;
		case 10:
			puts("On the tenth day of Christmas my true love gave to me...");
			break;
		case 11:
			puts("On the eleventh day of Christmas my true love gave to me...");
			break;
		case 12:
			puts("On the twelveth day of Christmas my true love gave to me...");
			break;

		}//end first switch

		switch (day) {
		case 12:
			puts("...12 drummers drumming...");
		case 11:
			puts("...11 pipers piping...");
		case 10:
			puts("...10 lords a-leaping...");
		case 9:
			puts("...9 ladies dancing...");
		case 8:
			puts("...8 maids a-milking...");
		case 7:
			puts("...7 swans a-swimming...");
		case 6:
			puts("...6 geese a-laying...");
		case 5:
			puts("...5 GOAALLL-den-REEENGS........!!!");
		case 4:
			puts("...4 calling birds...");
		case 3:
			puts("...3 french hens...");
		case 2:
			puts("...2 turtle doves...");

		}//end second switch

		if (day == 1) {
			puts("On the first day of Christmas my true love gave to me...");
			puts("...a partrich and a pear tree!\n");
		}
		else {
			puts("...and a partrich and a pear tree!\n");
		}

	}
}
void worldPopGrowth(void) {

	//1.11 growth per year @ 75 yrs (2017 - 2092)
	//	yr		pop at yr end		pop added
	// what year does it double? 
	//7,500,000,000 current

	unsigned long long pop = 7500000000;
	unsigned long long added = 0;
	unsigned long long check = 15000000000;
	int safety = 1;


	printf("YEAR\t\tPOP. @ YEAR END\t\tPOP. ADDED\n\n");


	for (int year = 2017; year <= 2092; year++) {

		added = pop * .0111;
		pop += added;

		printf("%d\t\t%llu\t\t+%llu\n", year, pop, added);

		if (pop >= check && safety == 1) {
			printf("^^^^^^    POPULATION DOUBLES in %d! :(    ^^^^^^\n", year);
			safety--;
		}
	}
	puts("");
}
// ch5
void sixFaceRand(void) {
	unsigned int frequency1 = 0; // rolled 1 counter
	unsigned int frequency2 = 0; // rolled 2 counter
	unsigned int frequency3 = 0; // rolled 3 counter
	unsigned int frequency4 = 0; // rolled 4 counter
	unsigned int frequency5 = 0; // rolled 5 counter
	unsigned int frequency6 = 0; // rolled 6 counter

	unsigned int roll; // roll counter, value 1 to 6000000
	int face; // represents one roll of the die, value 1 to 6
			  // loop 6000000 times and summarize results
	for (roll = 1; roll <= 6000000; ++roll) {
		face = 1 + rand() % 6; // random number from 1 to 6

							   // determine face value and increment appropriate counter
		switch (face) {

		case 1: // rolled 1
			++frequency1;
			break;

		case 2: // rolled 2
			++frequency2;
			break;

		case 3: // rolled 3
			++frequency3;
			break;

		case 4: // rolled 4
			++frequency4;
			break;

		case 5: // rolled 5
			++frequency5;
			break;

		case 6: // rolled 6
			++frequency6;
			break; // optional

		} // end switch

	} // end for

	  // display results in tabular format
	printf(" \n", "Face", "Frequency");
	printf(" 1%13u\n", frequency1);
	printf(" 2%13u\n", frequency2);
	printf(" 3%13u\n", frequency3);
	printf(" 4%13u\n", frequency4);
	printf(" 5%13u\n", frequency5);
	printf(" 6%13u\n", frequency6);
}
void craps(void) {

	int choice = 1;
	static int bal = 1000;
	int wager = 0;


	do {
		//chatter:
		if (bal < 100) {
			puts("Oh, you're going for broke, huh?");
		}
		else if (bal > 15000) {
			puts("Now's the time to cash in your chips!");
		}
		else if (bal > 30000) {
			puts("You're up big!!");
		}
		else if (bal > 100000) {
			puts("BALLER!!!!!!!");
		}


		//wager prompt
		printf("Balance: %d\n", bal);
		printf("%s", "Enter a wager:");
		scanf_s("%d", &wager);
		//low wager trash talk
		if (wager <= bal * .2) {
			puts("Aw cmon, take a chance!\n");
		}
		//check -> wager < balance
		while (wager > bal) {
			printf("%s\n", "You dont have enough in your account.  Wager less.");
			printf("Balance: %d\n", bal);
			printf("%s", "Enter a wager:");
			scanf_s("%d", &wager);
		}
		enum Status { CONTINUE, WON, LOST };

		int sum;
		int myPoint;

		enum Status gameStatus;

		srand(time(NULL));

		sum = rollDice();

		switch (sum) {
		case 7:
		case 11:
			gameStatus = WON;
			break;
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			printf("Point is %d\n", myPoint);
			break;
		}
		while (CONTINUE == gameStatus) {
			sum = rollDice();

			if (sum == myPoint) {
				gameStatus = WON;

			}
			else {
				if (sum == 7) {
					gameStatus = LOST;
				}
			}
		}
		if (WON == gameStatus) {
			bal += wager;
			puts("Player wins!");
			printf("Balance: %d\n", bal);
		}
		else {
			bal -= wager;
			puts("Player loses.");
			printf("Balance: %d\n", bal);
		}
		//kicks out if balance is 0.
		if (bal == 0) {
			puts("\nSorry, you're broke! Better luck next time.\n");
			break;
		}
		//replay prompt
		puts("\nEnter 0 to quit...");
		scanf_s("%d", &choice);
		puts("");
		puts("");


	} while (choice != 0);

} // end craps fx
int rollDice(void) {
	int die1;
	int die2;
	int workSum;

	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	workSum = die1 + die2;

	printf("Player rolled %d + %d = %d\n", die1, die2, workSum);
	return workSum;

}
int integerPower(int num, int power) {

	int answer = 1;

	for (int i = 0; i < power; i++) {
		answer *= num;
	}

	return answer;
}
int multiple(int one, int two) {

	if (two % one == 0) {
		return 1;
	}
	else {
		return 0;
	}

}
int even(int num) {

	switch (num % 2 == 0) {
	case 1:
		return 1;
	case 0:
		return 0;
	}

	/*if (num % 2 == 0) {
	return 1;
	}
	else {
	return 0;
	}*/

}
void squareOfAst(int num) {

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			printf("%c\t", '*');
		}
		printf("\n\n\n");
	}

}
__int64 timeInSec(int a, int b, int c, int a2, int b2, int c2) {

	// PLACE IN MAIN!!:

	/*__int64 timeFunc = timeInSec(6, 40, 15, 8, 32, 7);
	int hourSlot = timeFunc / 10000;
	int minuteSlot = timeFunc % 10000 / 100;
	int secondSlot = timeFunc % 100;


	printf("\nDifference in time: %d hours\t%d minutes\t%d seconds\n\n", hourSlot, minuteSlot, secondSlot);*/

	// TIME NOTES:
	// 6:40:15
	// 21600 / 2400 / 15 = 24015

	// 8:32:07
	// 28800 / 1920 / 7 = 30740

	int hrs = a;
	int mins = b;
	int secs = c;
	__int64 total = 0;
	int hrs2 = a2;
	int mins2 = b2;
	int secs2 = c2;
	__int64 total2 = 0;
	__int64 dif = 0;
	int formattedDifHrs;
	int formattedDifMins;
	int formattedDifSecs;
	__int64 formattedTime;

	// formatted to seconds
	if (a == 12) {
		total += secs + (mins * 60);
	}
	else {
		total += secs + (mins * 60) + (hrs * 60 * 60);
	}
	if (a == 12) {
		total2 += secs2 + (mins2 * 60);
	}
	else {
		total2 += secs2 + (mins2 * 60) + (hrs2 * 60 * 60);
	}
	// get difference between the two times
	if (total > total2) {
		dif = total - total2;
	}
	else {
		dif = total2 - total;
	}
	// convert back to formatted
	// 
	// 
	// dif = 24015
	// 6:40:15
	// 21600 / 2400 / 15 = 24015

	formattedDifHrs = dif / 3600;
	dif %= 3600;
	formattedDifMins = dif / 60;
	dif %= 60;
	formattedDifSecs = dif;

	formattedTime = (formattedDifHrs * 10000) + (formattedDifMins * 100) + (formattedDifSecs);
	// 000,000

	return formattedTime;
} // end fx
int celsius(int f) {
	int c = (f - 32) * 5 / 9;
	return c;
}
int fahrenheit(int c) {
	int f = c * 9 / 5 + 32;
	return f;
}
void printTempTable(void) {

	// output a chart that shows all celsius values from f 32-212
	//		and all farenhiet values from 0-100 c

	printf("C*\tF*\n");
	// C to F loop
	for (int c = 0; c <= 100; c++) {
		printf("%d\t%d\n", c, fahrenheit(c));
	}

	printf("\n=-=-=-=-=-=-=-=-\nF*\tC*\n");
	// F to C loop
	for (int f = 32; f <= 212; f++) {
		printf("%d\t%d\n", f, celsius(f));
	}

}
float tinyFloat(float a, float b, float c) {

	// .0001, 5.1234, W.12341
	float ans = a;
	if (b < a) {
		ans = b;
		if (c < b) {
			ans = c;
		}
	}
	else if (c < a) {
		ans = c;
	}


	return ans;
}
void perfect(int number) {
	// declare "anti-repeat" variable
	int total = 0;
	// cycle from 2 to NUMBER
	for (int i = 2; i < number; i++) {
		// test if i is a factor of number
		if (number % i == 0) {
			total += i;
		}
	}
	if (number != 1 && total + 1 == number) {
		// test if perfect
		printf("**%d**\t is a perfect number! Factors: ", number, number);
		for (int k = 2; k < number; k++) {
			if (number % k == 0) {
				printf("%d ", k);
			}
		}
		printf("\n");


	}
}
void prime(int num) {

	int check = 0;

	// need to check if number divides by anything from 2 to one less than number
	for (int i = 2; i < num; i++) {

		if (num % i == 0) {
			check = 1;
		}

	} // end for loop

	if (check == 1) {
		printf("%d\n", num);
	}
	else {
		printf("%d is a prime number!\n", num);

	}


}
int reverseDigits(int num) {

	int tenThousands;
	int thousands;
	int hundreds;
	int tens;
	int ones;

	ones = num % 10;
	tens = num / 10 % 10;
	hundreds = num / 100 % 10;
	thousands = num / 1000 % 10;
	tenThousands = num / 10000 % 10;

	printf("Original argument: %d\n", num);
	printf("Flipped and Split: %d %d %d %d %d\n", ones, tens, hundreds, thousands, tenThousands);

	if (num >= 10000) {
		num = (ones * 10000) + (tens * 1000) + (hundreds * 100) + (thousands * 10) + tenThousands;
	}
	else if (num < 10000 && num >= 1000) {
		num = (ones * 1000) + (tens * 100) + (hundreds * 10) + thousands;
	}
	else if (num < 1000 && num >= 100) {
		num = (ones * 100) + (tens * 10) + hundreds;
	}
	else if (num < 100 && num >= 10) {
		num = (ones * 10) + tens;
	}
	else if (num < 10) {
		num = ones;
	}

	return num;

}
int gcd(int a, int b) {

	int gcd = 1;

	// cycle through ints from 2 to cap
	for (int i = 2; i <= a; i++) {
		// if its a divisor of first int...
		if (a % i == 0) {
			if (b % i == 0 && i > gcd) {
				gcd = i;
			}
		}
	}

	return gcd;

	// return gcd of two ints


}
int qualityPoints(void) {

	static int gpa;

	int one = 0;
	int two = 0;
	int three = 0;
	int four = 0;
	int five = 0;

	puts("Input students 5 average test scores (0-100):");
	scanf_s("%d %d %d %d %d", &one, &two, &three, &four, &five);
	//printf("%d %d %d %d %d \n", one, two, three, four, five);
	gpa = (one + two + three + four + five) / 5;

	if (gpa <= 100 && gpa >= 90) {
		gpa = 4;
	}
	else if (gpa < 90 && gpa >= 80) {
		gpa = 3;
	}
	else if (gpa < 80 && gpa >= 70) {
		gpa = 2;
	}
	else if (gpa < 70 && gpa >= 60) {
		gpa = 1;
	}
	else if (gpa < 60) {
		gpa = 0;
	}

	return gpa;

}
int flip(void) {
	//returns 1 for heads and 0 for tails

	int choice = rand();
	if (choice < 16384) {
		return 0;
	}
	else {
		return 1;
	}
	//16,383 to 0 = tails
	//16389 to 32767 = heads
}
void coinToss(void) {
	srand(time(NULL));
	// print heads or tails
	// toss 100
	// count heads and tails and print
	int headCount = 0;
	int tailCount = 0;

	for (int i = 0; i < 100; i++) {
		//fx call

		int land = flip();

		if (land) {
			headCount++;
			puts("Heads!");
		}
		else {
			tailCount++;
			puts("...Tails!");
		}

	}// end for
	printf("Heads: %d Tails: %d\n\n", headCount, tailCount);
}
void guessIt(void) {

	int guess = 0;
	int guessCount = 0;
	int number = rand() % (999 + 1 - 0) + 1;
	puts("I have a number between 1 and 1000.\nCan you guess my number ?\nPlease type your first guess (0 to quit):");

	do {

		scanf_s("%d", &guess);

		if (guess == 0) {
			puts("Thanks for playing...");
			break;
		}
		else if (guess < number) {
			puts("Higher!");
		}
		else if (guess > number) {
			puts("Lower!");
		}
		else {
			puts("That's it!!");
			if (guessCount >= 10) {
				puts("You got lucky >:( ");
			}
			if (guessCount = 10) {
				puts("Ahah! You know the secret!");
			}
			if (guessCount > 10) {
				puts("You should be able to do better!");
			}
			break;
		}

		puts("Guess again...");

		guessCount++;

	} while (guess != 0);

}
int power(int base, int exponent) {
	// RECURSIVE FX
	int answer = 0;
	// terminating condition occurs when exponenent is equal to 1
	if (exponent > 1) {
		answer = base * power(base, exponent - 1);
	}
	else {
		answer = base * exponent;
	}
	return answer;
}
unsigned long long fibonacci(unsigned int n) {
	/*for (int i = 1; i <= 1000; i++) {
	printf("%llu\n\t...(%d)\n", fibonacci(i), i);
	}*/
	// determine largest that can be printed on system.
	//12200160415121876738
	//	...(94)
	//0, 1, 1, 2, 3, 5, 8, 13, 21, …
	unsigned long long a = 0;
	unsigned long long b = 1;
	unsigned long long c = 0;
	if (n < 1) {
		puts("nth number must be above 0, retry.");
	}
	else if (n == 1) {
		c = a;
		return c;
	}
	else if (n == 2) {
		c = b;
		return c;
	}
	else if (n >= 3) {
		for (int i = 3; i <= n; i++) {
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}
void tower(int n, int start, int hold, int end) {
	//base case
	if (n == 1) {
		printf("%d -> %d\n", start, end);
	}
	else {
		tower(n - 1, start, end, hold);
		tower(1, start, hold, end);
		tower(n - 1, hold, start, end);
	}
}
int gcdRecursive(int a, int b) {
	//gcd initializer
	int gcd = 0;
	//recursive call sanity check
	static int round = 1;
	if (round == 1) {
		printf("First Call:\t\ta: %d, b: %d\n", a, b);
	}
	else {
		printf("Recursive step %d:\ta: %d, b: %d\n", round - 1, a, b);
	}
	round++;
	//FX BODY:
	//base case
	if (b == 0) {
		gcd = a;
	}
	//recursive step
	else {
		gcd = gcdRecursive(b, a % b);
	}
	//return

	return gcd;
}
double distance(double x1, double y1, double x2, double y2) {
	double dis = 0;
	double xDis = 0;
	double yDis = 0;
	//making sure x subracts in the right order
	if (x1 > x2) {
		xDis = x1 - x2;
	}
	else {
		xDis = x2 - x1;
	}
	//making sure y subracts in the right order
	if (y1 > y2) {
		yDis = y1 - y2;
	}
	else {
		yDis = y2 - y1;
	}
	return dis = xDis + yDis;
}
void schoolTimesTable(void) {

	int ans = 0;
	int a;
	int b;
	int posRes;
	int negRes;
	static int right = 0;
	static int wrong = 0;
	int difficulty = 0;
	int type = 0;
	//set difficulty & type of problem
	if (right == 0 && wrong == 0) {
		//set difficulty
		printf("Enter a difficulty (1=single digit multipliers, 2=double digit multipliers, 3=triple digit multipliers):");
		scanf_s("%d", &difficulty);
		//type of problem
		printf("Enter for type of problem (1=addition, 2=subtraction, 3=multiplication):");
		scanf_s("%d", &type);
	}
	switch (difficulty) {
	case 1:
		a = rand() % 8 + 2;
		b = rand() % 8 + 2;
		break;
	case 2:
		a = rand() % 90 + 10;
		b = rand() % 90 + 10;
		//= rand() % 98 + 2; gives 2-99 range
		break;
	case 3:
		a = rand() % 900 + 100;
		b = rand() % 900 + 100;
		break;
	default:
		a = rand() % 8 + 2;
		b = rand() % 8 + 2;
	}
	switch (type) {
		//addition app
	case 1:
		//check for 10 attempts...
		if (right + wrong >= 10) {
			if (right <= 7) {
				puts("\n\nYou need a little practice.  Please ask your teacher for some help :)");
				right = 0;
				wrong = 0;
			}
			else {
				puts("\n\nCongratulations, you are ready to go to the next level!");
				right = 0;
				wrong = 0;
			}
		}
		printf("\n***Right answers: %d\tWrong answers: %d***\n", right, wrong);
		printf("How much is %d times %d?\n", a, b);
		scanf_s("%d", &ans);
		if (ans == a + b) {
			right++;
			posRes = rand() % 4 + 1;
			switch (posRes) {
			case 1:
				puts("Very Good!");
				break;
			case 2:
				puts("Excellent!");
				break;
			case 3:
				puts("Nice Work!");
				break;
			case 4:
				puts("Keep up the good work!");
				break;
			}
			schoolTimesTable();
		}
		else {

			do {
				negRes = rand() % 4 + 1;
				switch (negRes) {
				case 1:
					puts("No. Please try again.");
					break;
				case 2:
					puts("Wrong.Try once more.");
					break;
				case 3:
					puts("Don't give up!");
					break;
				case 4:
					puts("No.Keep trying.");
					break;
				}
				printf("How much is %d plus %d?\n", a, b);
				scanf_s("%d", &ans);
				wrong++;
			} while (ans != a + b);
			right++;
			posRes = rand() % 4 + 1;
			switch (posRes) {
			case 1:
				puts("Very Good!");
				break;
			case 2:
				puts("Excellent!");
				break;
			case 3:
				puts("Nice Work!");
				break;
			case 4:
				puts("Keep up the good work!");
				break;
			}
			schoolTimesTable();
			puts("");
			puts("");

		}
		break;
		//subtraction app
	case 2:
		//check for 10 attempts...
		if (right + wrong >= 10) {
			if (right <= 7) {
				puts("\n\nYou need a little practice.  Please ask your teacher for some help :)");
				right = 0;
				wrong = 0;
			}
			else {
				puts("\n\nCongratulations, you are ready to go to the next level!");
				right = 0;
				wrong = 0;
			}
		}
		printf("\n***Right answers: %d\tWrong answers: %d***\n", right, wrong);
		printf("How much is %d minus %d?\n", a, b);
		scanf_s("%d", &ans);
		if (ans == a - b) {
			right++;
			posRes = rand() % 4 + 1;
			switch (posRes) {
			case 1:
				puts("Very Good!");
				break;
			case 2:
				puts("Excellent!");
				break;
			case 3:
				puts("Nice Work!");
				break;
			case 4:
				puts("Keep up the good work!");
				break;
			}
			schoolTimesTable();
		}
		else {

			do {
				negRes = rand() % 4 + 1;
				switch (negRes) {
				case 1:
					puts("No. Please try again.");
					break;
				case 2:
					puts("Wrong.Try once more.");
					break;
				case 3:
					puts("Don't give up!");
					break;
				case 4:
					puts("No.Keep trying.");
					break;
				}
				printf("How much is %d minus %d?\n", a, b);
				scanf_s("%d", &ans);
				wrong++;
			} while (ans != a - b);
			right++;
			posRes = rand() % 4 + 1;
			switch (posRes) {
			case 1:
				puts("Very Good!");
				break;
			case 2:
				puts("Excellent!");
				break;
			case 3:
				puts("Nice Work!");
				break;
			case 4:
				puts("Keep up the good work!");
				break;
			}
			schoolTimesTable();
			puts("");
			puts("");

		}
		break;
		//multiplication app
	case 3:
		//check for 10 attempts...
		if (right + wrong >= 10) {
			if (right <= 7) {
				puts("\n\nYou need a little practice.  Please ask your teacher for some help :)");
				right = 0;
				wrong = 0;
			}
			else {
				puts("\n\nCongratulations, you are ready to go to the next level!");
				right = 0;
				wrong = 0;
			}
		}
		printf("\n***Right answers: %d\tWrong answers: %d***\n", right, wrong);
		printf("How much is %d times %d?\n", a, b);
		scanf_s("%d", &ans);
		if (ans == a * b) {
			right++;
			posRes = rand() % 4 + 1;
			switch (posRes) {
			case 1:
				puts("Very Good!");
				break;
			case 2:
				puts("Excellent!");
				break;
			case 3:
				puts("Nice Work!");
				break;
			case 4:
				puts("Keep up the good work!");
				break;
			}
			schoolTimesTable();
		}
		else {

			do {
				negRes = rand() % 4 + 1;
				switch (negRes) {
				case 1:
					puts("No. Please try again.");
					break;
				case 2:
					puts("Wrong.Try once more.");
					break;
				case 3:
					puts("Don't give up!");
					break;
				case 4:
					puts("No.Keep trying.");
					break;
				}
				printf("How much is %d times %d?\n", a, b);
				scanf_s("%d", &ans);
				wrong++;
			} while (ans != a * b);
			right++;
			posRes = rand() % 4 + 1;
			switch (posRes) {
			case 1:
				puts("Very Good!");
				break;
			case 2:
				puts("Excellent!");
				break;
			case 3:
				puts("Nice Work!");
				break;
			case 4:
				puts("Keep up the good work!");
				break;
			}
			schoolTimesTable();
			puts("");
			puts("");

		}
		break;
		//default app(addition)
	default:
		//check for 10 attempts...
		if (right + wrong >= 10) {
			if (right <= 7) {
				puts("\n\nYou need a little practice.  Please ask your teacher for some help :)");
				right = 0;
				wrong = 0;
			}
			else {
				puts("\n\nCongratulations, you are ready to go to the next level!");
				right = 0;
				wrong = 0;
			}
		}
		printf("\n***Right answers: %d\tWrong answers: %d***\n", right, wrong);
		printf("How much is %d plus %d?\n", a, b);
		scanf_s("%d", &ans);
		if (ans == a + b) {
			right++;
			posRes = rand() % 4 + 1;
			switch (posRes) {
			case 1:
				puts("Very Good!");
				break;
			case 2:
				puts("Excellent!");
				break;
			case 3:
				puts("Nice Work!");
				break;
			case 4:
				puts("Keep up the good work!");
				break;
			}
			schoolTimesTable();
		}
		else {

			do {
				negRes = rand() % 4 + 1;
				switch (negRes) {
				case 1:
					puts("No. Please try again.");
					break;
				case 2:
					puts("Wrong.Try once more.");
					break;
				case 3:
					puts("Don't give up!");
					break;
				case 4:
					puts("No.Keep trying.");
					break;
				}
				printf("How much is %d plus %d?\n", a, b);
				scanf_s("%d", &ans);
				wrong++;
			} while (ans != a + b);
			right++;
			posRes = rand() % 4 + 1;
			switch (posRes) {
			case 1:
				puts("Very Good!");
				break;
			case 2:
				puts("Excellent!");
				break;
			case 3:
				puts("Nice Work!");
				break;
			case 4:
				puts("Keep up the good work!");
				break;
			}
			schoolTimesTable();
			puts("");
			puts("");
		}
	} //end switch app

	  //check for 10 attempts...
	  /*if (right + wrong >= 10) {
	  if (right <= 7) {
	  puts("\n\nYou need a little practice.  Please ask your teacher for some help :)");
	  right = 0;
	  wrong = 0;
	  }
	  else {
	  puts("\n\nCongratulations, you are ready to go to the next level!");
	  right = 0;
	  wrong = 0;
	  }
	  }
	  printf("\n***Right answers: %d\tWrong answers: %d***\n", right, wrong);
	  printf("How much is %d times %d?\n", a, b);
	  scanf("%d", &ans);
	  if (ans == a * b) {
	  right++;
	  posRes = rand() % 4 + 1;
	  switch (posRes) {
	  case 1:
	  puts("Very Good!");
	  break;
	  case 2:
	  puts("Excellent!");
	  break;
	  case 3:
	  puts("Nice Work!");
	  break;
	  case 4:
	  puts("Keep up the good work!");
	  break;
	  }
	  schoolTimesTable();
	  }
	  else {

	  do {
	  negRes = rand() % 4 + 1;
	  switch (negRes) {
	  case 1:
	  puts("No. Please try again.");
	  break;
	  case 2:
	  puts("Wrong.Try once more.");
	  break;
	  case 3:
	  puts("Don't give up!");
	  break;
	  case 4:
	  puts("No.Keep trying.");
	  break;
	  }
	  printf("How much is %d times %d?\n", a, b);
	  scanf("%d", &ans);
	  wrong++;
	  } while (ans != a * b);
	  right++;
	  posRes = rand() % 4 + 1;
	  switch (posRes) {
	  case 1:
	  puts("Very Good!");
	  break;
	  case 2:
	  puts("Excellent!");
	  break;
	  case 3:
	  puts("Nice Work!");
	  break;
	  case 4:
	  puts("Keep up the good work!");
	  break;
	  }
	  schoolTimesTable();
	  puts("");
	  puts("");

	  }*/
}
// ch6
void nastyLunch(void) {

	int survey[RESPONSE_SIZE];
	int frequency[FREQUENCY_SIZE] = { 0 };
	int avg = 0;
	//survey retrieval
	for (int i = 0; i < RESPONSE_SIZE; ++i) {
		printf("\t#%d\nEnter 1-10 food poll:", i + 1);
		scanf_s("%d", &survey[i]);
		if (survey[i] < 1 || survey[i]>10) {
			while (survey[i] < 1 || survey[i]>10) {
				puts("Invalid selection: Try again...");
				printf("\t#%d\nEnter 1-10 food poll:", i + 1);
				scanf_s("%d", &survey[i]);
			}
		}
	}
	//survey averaging
	for (int j = 0; j < RESPONSE_SIZE; ++j) {
		avg += survey[j];
	}
	//calculates avg of survey
	avg /= RESPONSE_SIZE;
	//frequency "scanning" loop
	for (int answer = 0; answer < RESPONSE_SIZE; ++answer) {
		//increments into the frequency array, the subscript of survey results @ element "answer". So in spot 0 of survey, whatever it was gets ++ into that slot of frequency.
		++frequency[survey[answer]];
	}
	printf("\nAverage score: %d\nScore\tFrequency\n", avg);
	//frequency/score printing loop
	for (int i = 1; i < 11; i++) {
		printf("%d\t%d\n", i, frequency[i]);
	}
	puts("");
}
void astBar(void) {

	int arr[10] = { 9,4,10,10,5,1,3,8,9,7 };
	size_t i;
	size_t j;
	printf("\n%s\t%s\t%s\t\n\n", "Element", "Value", "Histogram");
	//first loop, prints EL, VAL, and inner prints ASTs
	for (i = 0; i < 10; ++i) {
		printf("%d\t%d\t", i, arr[i]);
		//AST loop
		for (j = 1; j <= arr[i]; j++) {
			printf("*");
		}
		puts("");
	}
	puts("");
}
void bubbleSorted(void) {
	// declare a 99-el array 'w'
	// determine & print the largest and smallest values
	int small = 0;
	int big = 0;
	int hold = 0;

	float w[99] = { 0 };
	// assign random values to float array 'w'
	for (int i = 0; i < 99; ++i) {
		w[i] = 1 + rand() % 150;
	}
	// print iteration and all indecies of 'w'
	for (int j = 0; j < 99; ++j) {
		printf("IT: %d\t%.0f\n", j + 1, w[j]);
	}
	// create bubble-sort
	puts("");
	puts("");
	puts("");
	puts("");

	// passes
	for (int pass = 0; pass < 99; ++pass) {
		// comparisons per pass
		for (int k = 0; k < 98; ++k) {
			if (w[k] > w[k + 1]) {
				hold = w[k];
				w[k] = w[k + 1];
				w[k + 1] = hold;
			}
		}
	}

	// print loop
	for (int l = 0; l < 99; ++l) {
		printf("\nValue @ index: w[%d]: %.0f", l, w[l]);
	}


	puts("");
	puts("");
}
void employeeRangeArray(void) {

	puts("Employee salary info (0 to quit):");

	int choice = 1;
	int arr[9] = { 0 };

	while (choice != 0) {

		//read salary from user
		printf("Enter employee salary:");
		scanf_s(" %d", &choice);

		if (choice > 199 && choice < 300) {
			++arr[0];
			puts("Employee payrange 1 entered.");
		}
		if (choice > 299 && choice < 400) {
			++arr[1];
			puts("Employee payrange 2 entered.");
		}
		if (choice > 399 && choice < 500) {
			++arr[2];
			puts("Employee payrange 3 entered.");
		}
		if (choice > 499 && choice < 600) {
			++arr[3];
			puts("Employee payrange 4 entered.");
		}
		if (choice > 599 && choice < 700) {
			++arr[4];
			puts("Employee payrange 5 entered.");
		}
		if (choice > 699 && choice < 800) {
			++arr[5];
			puts("Employee payrange 6 entered.");
		}
		if (choice > 799 && choice < 900) {
			++arr[6];
			puts("Employee payrange 7 entered.");
		}
		if (choice > 899 && choice < 1000) {
			++arr[7];
			puts("Employee payrange 8 entered.");
		}
		if (choice >= 1000) {
			++arr[8];
			puts("Employee payrange 9 entered.");
		}
		if (choice < 200) {
			puts("Invalid range, try again...");
		}
	}

	puts("");

	for (int i = 0; i < 8; ++i) {
		printf("Employees who earned $%d99-$%d00: %d\n", i + 1, i + 3, arr[i]);
	}
	printf("Employees who earned over $1000: %d\n\n", arr[8]);

}
void efficientSinkSort(void) {
	// bubble sort: first pass guarentees highest value in highest pos in arr
	// first pass = 9 comps, second pass = 8 comps, third pass = 7 comps, etc.
	int arr[10] = { 0 };
	int hold = 0;
	//check breaks the loop if no more comparisons are needed
	int check = 0;
	//int i = 0;
	// rand assign arr:
	for (int i = 0; i < 10; ++i) {
		arr[i] = 1 + rand() % 100;
		printf("Value @ arr[%d]: %d\n", i, arr[i]);
	}
	puts("");
	// bubble sort
	for (int pass = 0; pass < 10; ++pass) {
		// each pass == comparisons 'i' -1 (and then - 1 per iteration.)
		puts("[NEW pass loop]");
		check = 0;
		for (int i = 0; i < 9 - pass; ++i) {
			if (arr[i] >= arr[i + 1]) {
				hold = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = hold;
				check++;
			}
			puts("\t(NEW comparison loop)");
		}// end comparison loop
		 //check to see if any swaps were made; if not, break;
		if (check == 0) {
			break;
		}
	}// end pass loop
	puts("");
	// reprint sorted efficient array
	for (int i = 0; i < 10; ++i) {
		printf("Value @ arr[%d]: %d\n", i, arr[i]);
	}
	puts("");

}
void diceTally(void) {
	int die1;
	int die2;
	int sum;
	int tally[11] = { 0 };
	for (int i = 0; i < 36000; ++i) {
		die1 = 1 + rand() % 6;
		die2 = 1 + rand() % 6;
		sum = die1 + die2;
		switch (sum) {
		case 2:
			++tally[0];
			break;
		case 3:
			++tally[1];
			break;
		case 4:
			++tally[2];
			break;
		case 5:
			++tally[3];
			break;
		case 6:
			++tally[4];
			break;
		case 7:
			++tally[5];
			break;
		case 8:
			++tally[6];
			break;
		case 9:
			++tally[7];
			break;
		case 10:
			++tally[8];
			break;
		case 11:
			++tally[9];
			break;
		case 12:
			++tally[10];
			break;
		}
	}
	//print results:
	printf("DICE SUM:\tOCCURANCES:\n");
	for (int i = 0; i < 11; ++i) {
		printf("%d\t\t%d\n", i + 2, tally[i]);
	}
	puts("");
}
void modifiedCraps(void) {
	enum Status { CONTINUE, WON, LOST };
	int sum;
	int myPoint;
	enum Status gameStatus;
	int round = 0;
	int die1;
	int die2;
	int rollThisRound = -1;
	int wins[21] = { 0 };
	int loses[21] = { 0 };
	int totalWon = 0;
	int totalLost = 0;
	int totalRolls = 0;
	float winChance = 0;
	float lossChance = 0;
	//int avgRolls = 0;

	do {
		//original "rollDice" fx:
		die1 = 1 + (rand() % 6);
		die2 = 1 + (rand() % 6);
		sum = die1 + die2;
		printf("Player rolled %d + %d = %d\n", die1, die2, sum);
		rollThisRound++;
		totalRolls++;
		//end fx
		switch (sum) {
		case 7:
		case 11:
			gameStatus = WON;
			if (rollThisRound >= 20) {
				rollThisRound = 20;
			}
			wins[rollThisRound]++;
			totalWon++;
			rollThisRound = -1;
			break;
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			if (rollThisRound >= 20) {
				rollThisRound = 20;
			}
			loses[rollThisRound]++;
			totalLost++;
			rollThisRound = -1;
			break;
		default:
			gameStatus = CONTINUE;
			myPoint = sum;
			printf("Point is %d\n", myPoint);
			break;
		}
		while (CONTINUE == gameStatus) {
			die1 = 1 + (rand() % 6);
			die2 = 1 + (rand() % 6);
			sum = die1 + die2;
			printf("Player rolled %d + %d = %d\n", die1, die2, sum);
			totalRolls++;
			if (sum == myPoint) {
				gameStatus = WON;
				wins[rollThisRound]++;
				totalWon++;
			}
			else {
				if (sum == 7) {
					gameStatus = LOST;
					loses[rollThisRound]++;
					totalLost++;
				}
			}
		}
		if (WON == gameStatus) {
			puts("Player wins!");
		}
		else {
			puts("Player loses.");
		}
		puts("");
		puts("");
		round++;
	} while (round < 1000);
	puts("\n");
	//WINS AND LOSES UPTO AND AFTER THE 20TH ROLL...
	//wins tally loop:
	for (int i = 0; i <= 20; ++i) {
		if (i < 20) {
			printf("Games WON on roll #%d: %d\n", i + 1, wins[i]);
		}
		else {
			printf("Games WON on roll #21 or over: %d\n", wins[i]);
		}
	}
	//losses tally loop:
	for (int i = 0; i <= 20; ++i) {
		if (i < 20) {
			printf("Games LOST on roll #%d: %d\n", i + 1, loses[i]);
		}
		else {
			printf("Games LOST on roll #21 or over: %d\n", loses[i]);
		}
	}
	//DISPLAY AVG CHANCES OF WINNING(fairness)
	puts("");
	winChance = totalWon / 10;
	lossChance = totalLost / 10;
	printf("Total won: %d\tTotal lost: %d\n", totalWon, totalLost);
	printf("Win percentage: %.0f%%\t", winChance);
	printf("Loss percentage: %.0f%%", lossChance);
	//AVERAGE ROLLS PER GAME
	puts("\n");
	printf("The average rolls per game were: %d", totalRolls / 1000);
	puts("\n");
}
void planeSeating(void) {
	int arr[10] = { 0 };
	int choice = 0;
	//any vacancy loop
	while (arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[8] + arr[9] != 10) {
		//both coach and 1st still available:
		if ((arr[0] == 0 || arr[1] == 0 || arr[2] == 0 || arr[3] == 0 || arr[4] == 0) && (arr[5] == 0 || arr[6] == 0 || arr[7] == 0 || arr[8] == 0 || arr[9] == 0)) {
			printf("Hello and Welcome!\nEnter '1' for 1st Class or '2' for Economy:");
			scanf_s(" %d", &choice);
			//invalid read loop:
			while (choice < 1 || choice > 2) {
				printf("Were sorry, please try again:");
				scanf_s(" %d", &choice);
			}
			if (choice == 1) {
				//empty seat/assignment loop:
				for (int i = 0; i < 5; ++i) {
					//check for first empty seat:
					if (arr[i] == 0) {
						printf("You have been seated in seat #%d.  We will be boarding shortly.  Thank you for flying with us!\n\n", i + 1);
						arr[i] = 1;
						break;
					}
				}
			}
			else {
				for (int i = 5; i < 10; ++i) {
					//check for empty seat in coach:
					if (arr[i] == 0) {
						printf("You have been seated in seat #%d.  We will be boarding shortly.  Thank you for flying with us!\n\n", i + 1);
						arr[i] = 1;
						break;
					}
				}
			}
		}
		//only coach available:
		else if ((arr[0] + arr[1] + arr[2] + arr[3] + arr[4] == 5) &&
			(arr[5] + arr[6] + arr[7] + arr[8] + arr[9] != 5)) {
			printf("Hello and Welcome!\nAll seats in 1st class are currently unavailable.  Would you like to book Economy class? (1 : YES, 0 : NO)");
			scanf_s(" %d", &choice);
			while (choice < 0 || choice > 1) {
				printf("Were sorry, please try again:");
				scanf_s(" %d", &choice);
			}
			if (choice == 1) {
				//create boarding pass/conf for coach
				for (int i = 5; i < 10; ++i) {
					//check for empty seat in coach:
					if (arr[i] == 0) {
						printf("You have been seated in seat #%d.  We will be boarding shortly.  Thank you for flying with us!\n\n", i + 1);
						arr[i] = 1;
						break;
					}
				}
			}
			//if they deny coach
			else {
				printf("Thank you for choosing us, we apologize for any inconvenience.\n\n");
			}
		}
		//only 1st available:
		else if ((arr[5] + arr[6] + arr[7] + arr[8] + arr[9] == 5) &&
			(arr[0] + arr[1] + arr[2] + arr[3] + arr[4] != 5)) {
			printf("Hello and Welcome!\nAll seat in Economy class are currently unavailable.  Would you like to book 1st class? (1 : YES, 0 : NO)");
			scanf_s(" %d", &choice);
			while (choice < 0 || choice > 1) {
				printf("Were sorry, please try again:");
				scanf_s(" %d", &choice);
			}
			if (choice == 1) {
				//create boarding pass/conf for coach
				for (int i = 0; i < 5; ++i) {
					//check for empty seat in coach:
					if (arr[i] == 0) {
						printf("You have been seated in seat #%d.  We will be boarding shortly.  Thank you for flying with us!\n\n", i + 1);
						arr[i] = 1;
						break;
					}
				}
			}
			//if they deny 1st class
			else {
				printf("Thank you for choosing us, we apologize for any inconvenience.\n\n");
			}
		}
		//printf("Thank you for flying with us!\n\n");
	}
	puts("***************************************");
	printf("\nWe're sorry all seats for this flight are booked.  Next flight leaves in 3 hours.  We apologize for any inconvenience.\n\n");
	puts("***************************************\n\n");
}
void salesTable(void) {
	int sales[4][5] = { 0 };
	int productTotal[5] = { 0 };
	//recieve slip:
	//need to read about 20 slips for data
	int salesman = 1;
	int product = 0;
	int cash = 0;
	int totalBySalesman = 0;
	int totalByProduct = 0;
	int grandTotal = 0;

	while (salesman != 0) {
		printf("Enter sales person(1-4) 0 to quit:");
		scanf_s("%d", &salesman);
		if (salesman == 0) {
			break;
		}
		printf("Enter product(1-5):");
		scanf_s("%d", &product);
		printf("Enter sales($):");
		scanf_s("%d", &cash);
		sales[salesman - 1][product - 1] += cash;

	};
	//print loop
	puts("");
	printf("\t\tPRODUCT 1\tPRODUCT 2\tPRODUCT 3\tPRODUCT 4\tPRODUCT 5\tTOTAL\n");
	for (int row = 0; row < 4; ++row) {
		printf("\nSALESMAN %d\t", row + 1);
		totalBySalesman = 0;
		for (int col = 0; col < 5; ++col) {
			printf("%d\t\t", sales[row][col]);
			totalBySalesman += sales[row][col];
			productTotal[col] += sales[row][col];
		}
		printf("%d", totalBySalesman);
		grandTotal += totalBySalesman;
	}
	puts("");
	printf("TOTAL");
	//print total by product row--
	for (int j = 0; j < 5; ++j) {
		printf("\t\t%d", productTotal[j]);
	}
	printf("\t\t%d\n\n\n\n", grandTotal);
}
void turtleGraphics(void) {
	//longitude coor:
	int n_s = 0;
	//latitiude coor:
	int e_w = 0;
	int floor[50][50] = { 0 };
	int cmd = 0;
	int spaces = 0;
	bool penDown = false;
	int dir = 1; //1=EAST,2=SOUTH,3=WEST,4=NORTH
	int cmdArr[5] = { 0 };

	while (cmd != 9) {
		puts("*************************************************************************************");
		//print orientation:
		printf("CURRENT POSITION: %d,%d\t", n_s, e_w);
		switch (dir) {
		case 1:
			printf("\tCURRENT DIRECTION: East\t");
			break;
		case 2:
			printf("\tCURRENT DIRECTION: South\t");
			break;
		case 3:
			printf("\tCURRENT DIRECTION: West\t");
			break;
		case 4:
			printf("/tCURRENT DIRECTION: North\t");
			break;
		}
		if (penDown == false) {
			printf("\tPEN: Up\n");
		}
		else {
			printf("\tPEN: Down\n");
		}
		//cmd prompt:
		printf("Enter command(1:Pen down | 2:Pen up | 3:Right | 4:Left | 5:Move | 6:Print | 9:Quit):");
		scanf_s("%d", &cmd);
		puts("*************************************************************************************\n");
		//grab cmd
		//switch to cmd to perform action
		switch (cmd) {
		case 1:
			//drop pen
			penDown = true;
			break;
		case 2:
			//lift pen
			penDown = false;
			break;
		case 3:
			//turn right
			switch (dir) {
			case 1:
				dir = 2;
				break;
			case 2:
				dir = 3;
				break;
			case 3:
				dir = 4;
				break;
			case 4:
				dir = 1;
				break;
			}
			break;
		case 4:
			//turn left
			switch (dir) {
			case 1:
				dir = 4;
				break;
			case 2:
				dir = 1;
				break;
			case 3:
				dir = 2;
				break;
			case 4:
				dir = 3;
				break;
			}
			break;
		case 5:
			//move, # of paces
			printf("How many spaces?:\n");
			scanf_s("%d", &spaces);
			//move logic
			//EAST(1)
			if (dir == 1) {
				//boundries statement
				if (e_w + spaces >= 50) {
					printf("Sorry, move is out of bounds...try again.\n");
				}
				//moving:
				else {
					if (penDown == true) {
						for (int i = 0; i < spaces; ++i) {
							//for every area in the for loop path, change out 0 for 1:
							floor[n_s][e_w + i] = 1;
						}
					}
					//adds position to east
					e_w += spaces;
				}
			}
			//SOUTH(2)
			if (dir == 2) {
				//boundries statement
				if (n_s + spaces >= 50) {
					printf("Sorry, move is out of bounds...try again.\n");
				}
				//moving:
				else {
					if (penDown == true) {
						for (int i = 0; i < spaces; ++i) {
							//for every area in the for loop path, change out 0 for 1:
							floor[n_s + i][e_w] = 1;
						}
					}
					//adds position to east
					n_s += spaces;
				}
			}
			//WEST(3)
			if (dir == 3) {
				//boundries statement
				if (e_w - spaces < 0) {
					printf("Sorry, move is out of bounds...try again.\n");
				}
				//moving:
				else {
					if (penDown == true) {
						for (int i = 0; i < spaces; ++i) {
							//for every area in the for loop path, change out 0 for 1:
							floor[n_s][e_w - i] = 1;
						}
					}
					//adds position to east
					e_w -= spaces;
				}
			}
			//NORTH(4)
			if (dir == 4) {
				//boundries statement
				if (n_s - spaces < 0) {
					printf("Sorry, move is out of bounds...try again.\n");
				}
				//moving:
				else {
					if (penDown == true) {
						for (int i = 0; i < spaces; ++i) {
							//for every area in the for loop path, change out 0 for 1:
							floor[n_s - i][e_w] = 1;
						}
					}
					//adds position to east
					n_s -= spaces;
				}
			}
			puts("");
			break;
		case 6:
			//print floor
			puts("\t\t\t\t\t\t\MAP");
			puts("<----------------------------------------------------------------------------------------------------->");
			for (int row = 0; row < 50; ++row) {
				printf("| ");
				for (int col = 0; col < 50; ++col) {
					//if equal to '1': *, equal to '0': space, equal to turtle: '&'...
					if (col == e_w && row == n_s) {
						//turtle:
						printf("& ");
					}
					else if (floor[row][col] == 1) {
						//marked:
						printf("  ");
					}
					else if (floor[row][col] == 0) {
						//unmarked:
						printf("- ");
					}

				}
				printf("|");
				puts("");
			}
			puts("<----------------------------------------------------------------------------------------------------->\n\n");
			break;
		case 9:
			//quit
			break;
		default:
			cmd = 0;
			puts("Invalid selection.\n");
		}


	}//end cmd while loop
}
void knightsTour(void) {
	int board[8][8] = { 0 };
	//"trips" an indicator to NOT enter the 'move player' code block
	int trip;
	int winCheck = 1;
	//moves from K=L,S,S,L,L,S,S,L
	int horizontal[8] = { 2,1,-1,-2,-2,-1,1,2 };
	int vertical[8] = { -1,-2,-2,-1,1,2,2,1 };
	int vPosRecord[64] = { 0 };
	int hPosRecord[64] = { 0 };
	int currentRow = 7;
	int currentColumn = 7;
	int moveCount = 0;
	//the move (between 0-7):
	int moveNumber = 0;
	//record init all to -1
	for (int i = 0; i < 64; ++i) {
		hPosRecord[i] = -1;
		vPosRecord[i] = -1;
	}
	while (winCheck != 0) {//[game] while
		while (moveNumber != 9) {//[round] while
			system("cls");
			trip = 0;
			//print board
			puts("\n       BOARD");
			puts("<-0-1-2-3-4-5-6-7->");
			for (int row = 0; row < 8; ++row) {
				printf("%d ", row);
				for (int col = 0; col < 8; ++col) {
					//if equal to '1': x, equal to '0': space, equal to knight: 'K'...
					if (col == currentColumn && row == currentRow) {
						//knight:
						printf("K ");
					}
					else if (board[row][col] == 1) {
						//visited:
						printf("o ");
					}
					else if (board[row][col] == 0) {
						//unvisited:
						printf("- ");
					}

				}
				printf("|");
				puts("");
			}
			puts("<----------------->\n\n");
			//read move:
			moveNumber = 0 + rand() % 7;
			printf("Move #: %d\nRandom Move is: %d:", moveCount, moveNumber);
			puts("");
			//also need to test if the knight has visited the square already
			//test for in bounds
			if ((currentRow + vertical[moveNumber] < 0 || currentRow + vertical[moveNumber] > 7) || (currentColumn + horizontal[moveNumber] > 7 || currentColumn + horizontal[moveNumber] < 0)) {
				if (moveNumber != 9) {
					printf("Move is OUT OF BOUNDS...try again.\n");
				}
			}
			else {
				//move statements to adjust current pos + recording block:
				//for loop cycle through all the indecies of Record variables:
				for (int i = 0; i < 64; i++) {
					//if checks if all 64 indecies of both Record arrays are identical to the position that the player will move to if their is no match
					if (((currentRow + vertical[moveNumber] == vPosRecord[i]) && (currentColumn + horizontal[moveNumber] == hPosRecord[i])) || ((currentRow + vertical[moveNumber] == 7) && (currentColumn + horizontal[moveNumber] == 7))) {
						printf("POSITION has ALREADY been visited...try again.\n");
						//breaks the for loop
						trip = 1;
						break;
					}
				}
				//need to create condition that allows only if no matches, (possible without for loop?)
				if (trip != 1) {
					currentRow += vertical[moveNumber];
					currentColumn += horizontal[moveNumber];
					moveCount++;
					//in these 2 records, 0 was the starting position and 1 was the first landing spot.  So, Record[63] will be the final place on the board
					vPosRecord[moveCount + 1] = currentRow;
					hPosRecord[moveCount + 1] = currentColumn;
					//set initial spot and subsequent spots in board array to 1:
					board[7][7] = 1;

					board[currentRow][currentColumn] = 1;
				}
			}
			winCheck = 0;
			for (int row = 0; row < 8; ++row) {
				for (int col = 0; col < 8; ++col) {
					if (board[row][col] != 1) {
						winCheck++;
					}
				}
			}
		}//end [round] while
	}//end [game] while
	puts("");
}
void nonDuplicate(void) {

	int num = 0;
	int arrSize;
	int nonDuplicate[20] = { 0 };
	int hold = 0;
	int set = 0;
	//printf 20 random values between 1 and 20
	//store all non-duplicate values in smallest array possible
	for (int i = 0; i < 20; ++i) {
		//makeNum();
		num = 1 + rand() % 20;
		//nonDuplicate arr is filling with all values: 
		nonDuplicate[i] = num;
	}
	//PRINT
	for (int i = 0; i < 20; ++i) {
		printf("\nassignedUnsorted arr[%d]: %d\n", i, nonDuplicate[i]);
	}
	///
	for (int j = 0; j < 20; ++j) {
		for (int i = 0; i < 19; ++i) {
			//bubble sort:
			if (nonDuplicate[i] > nonDuplicate[i + 1]) {
				hold = nonDuplicate[i];
				nonDuplicate[i] = nonDuplicate[i + 1];
				nonDuplicate[i + 1] = hold;
			}
		}
	}
	//PRINT
	for (int i = 0; i < 20; ++i) {
		printf("\nbubbleSorted arr[%d]: %d\n", i, nonDuplicate[i]);
	}

	//determines if index ahead is the same and sets to 0;
	for (int i = 0; i < 20; ++i) {
		if (nonDuplicate[i] > set) {
			set = nonDuplicate[i];
		}
		if (nonDuplicate[i + 1] == set) {
			nonDuplicate[i + 1] = 0;
		}
	}

	//PRINT
	for (int i = 0; i < 20; ++i) {
		printf("\nNew: arr[%d]: %d\n", i, nonDuplicate[i]);
	}
}
void primeSubscript(void) {
	int arr[1000];
	int product = 0;
	int total = 0;
	arr[0], arr[1] = 0;
	for (int i = 2; i < 1000; ++i) {
		arr[i] = 1;
	}
	// primes: 2 3 5 7 11 13...
	//if prime integer, ss will remain 1, else 0.
	for (int i = 2; i < 1000; ++i) {
		for (int j = 2; j < 500; ++j) {
			product = i * j;
			if (product < 1000) {
				arr[product] = 0;
			}
		}
	}
	puts("Prime Numbers:");
	for (int i = 1; i < 1000; ++i) {
		if (arr[i] != 0) {
			printf("%d\n", i);
			total++;
		}
	}
	printf("\nTOTAL: %d\n\n", total);
}
int testPalindrome(char name[], int low, int high, bool even)
{
	//PLACE IN MAIN:::

	////recursive testPalindrome
	////returns 1 if palindrome, 0 if not
	////ignores spaces and punctuation
	//int check = 0;
	//char friend[] = { 'h','a','n','n','a','h' };
	///*for (int i = 0; i < 6; ++i) {
	//printf("%c", friend[i]);
	//}*/
	//puts("");
	//check = testPalindrome(friend, 0, 5, true);
	//if (check == 1) {
	//	printf("\n**Palindrome!**\n\n");
	//}
	//else if (check == 0) {
	//	printf("\n*NOT A Palindrome...\n\n");
	//}
	//'low' takes '0' for lowest element in arr, 'high' takes element in the arr
	//now we have name = {'h','a','n','n','a','h'}
	static int ans = 0;
	printf("\nStart== LOW: %d, HIGH: %d ANS: %d\n", low, high, ans);

	if (!even) {
		//odd number of actual letters (+'\0')
		//base case:
		if (name[low + 1] == name[high - 1] && name[low] == name[high - 1]) {
			ans = 1;
			printf("\nLOW: %d, HIGH: %d ANS: %d\n", low, high, ans);
		}
		//recursive steps:
		else if (name[low] == name[high - 1]) {
			ans = testPalindrome(name, low + 1, high - 1, even);
			printf("\nLOW: %d, HIGH: %d ANS: %d\n", low, high, ans);
		}
		else {
			ans = 0;
		}
	}


	//////////////////$$$$$$$$$$$$$$$$$$/////////////////////////


	else {
		//even number of actual letters (+'\0')
		//hannah & 6 enter here
		//base case:
		if (low + 1 == high && name[low + 1] == name[high - 1]) {
			ans = 1;
			printf("\nLOW: %d, HIGH: %d ANS: %d\n", low, high, ans);

		}
		//recursive steps:
		else if (name[low] == name[high]) {
			testPalindrome(name, low + 1, high - 1, even);
			printf("\nLOW: %d, HIGH: %d ANS: %d\n", low, high, ans);

		}
		else {
			ans = 0;
		}
	}
	return ans;
}
int linearSearch(char b[], int size, char key)
{
	//call = linearSearch(a, 10, 'i');
	//a=array of chars
	//10=size of array
	//'i'=search char

	static int ans = 99;
	if (size - 1 == 0 && key != b[size - 1]) {
		//if key found return subscript
		ans = -1;
	}
	else if (key != b[size - 1]) {
		ans = linearSearch(b, size - 1, key);
	}
	else {
		ans = size - 1;
	}
	return ans;

} // end function someFunction
void printArray(const int a[], int size) {
	//PLACE IN MAIN:
	//int arr[5] = { 0,12,23,34,45 };
	//printArray(arr, 5);
	static int arrSize;
	arrSize = size;
	if (arrSize > 0) {
		printf("Value at position %d: %d\n\n", arrSize - 1, a[arrSize - 1]);
		printArray(a, arrSize - 1);
	}
	//print all emements;
	//returns nothing when arr size is 0;

}
// ch7
void pointerExamples(void) {
	int SIZE = 10;
	float numbers[10] = { 0.0,1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9 };
	float *nPtr;
	nPtr = &numbers;
	//print
	for (int i = 0; i < SIZE; ++i) {
		printf("%.1f\n", numbers[i]);
	}
	puts("");
	//print using ptr
	for (int i = 0; i < SIZE; ++i) {
		printf("%.1f\n", *(nPtr + i));
	}
	puts("");
	//print using arr
	for (int i = 0; i < SIZE; ++i) {
		printf("%.1f\n", *(numbers + i));
	}
	puts("");
	//print using ptr subscript
	for (int i = 0; i < SIZE; ++i) {
		printf("%.1f\n", nPtr[i]);
	}
	puts("");
	//refer to element 4 with the 4 methods:
	//("nPtr" + "numbers")
	printf("%.1f\t%.1f\t%.1f\t%.1f", numbers[1], *(numbers + 2), nPtr[3], *(nPtr + 4));
	puts("\n");
	/////////////////////////
	float number1 = 7.3;
	float number2;
	float* fPtr = &number1;
	printf("%f\n", *fPtr);
	number2 = *fPtr;
	printf("%f\n", number2);
	printf("Printed as pointer:   %p\n", fPtr);
	printf("Printed as hex:       %x\n", &number1);
	puts("");

	/// void exchange(float *x, float *y) {}
	//ptr to poly (takes an int, returns an int):
	/// int evaluate(int x, int(*poly)(int)) {}

	unsigned int values[5] = { 2,4,6,8,10 };
	unsigned int* vPtr;
	for (int i = 0; i < 5; ++i) {
		printf("%d\n", values[i]);
	}
	vPtr = &values[2];
	printf("%p\n", vPtr);
	vPtr = &values;
	printf("%p\n", vPtr);
	//ptr offset notation:
	for (int i = 0; i < 5; ++i) {
		printf("%d\n", *(vPtr + i));
	}
	//using array name:
	for (int i = 0; i < 5; ++i) {
		printf("%d\n", *(values + i));
	}
	//using array name:
	for (int i = 0; i < 5; ++i) {
		printf("%d\n", vPtr[i]);
	}
	//array subscript notation: 
	printf("\n%d\n", values[4]); //array[4]
								 //pointer / offset notation w arr name as ptr:
	printf("\n%d\n", *(values + 4)); //array[4]
									 //pointer subscript notation:
	printf("\n%d\n", vPtr[4]); //array[4]
							   //pointer / offset notation:
	printf("\n%d\n", *(vPtr + 4)); //array[4]

	long value1 = 200000;
	long value2;
	long* lPtr;
	lPtr = &value1;
	printf("%ld\n", *lPtr);
	value2 = *lPtr;
	printf("%ld\n", value2);
	printf("%p == %p!\n", lPtr, &value1);
}
void deal52(void) {


	void shuffle(unsigned int wDeck[][FACES]); // shuffling modifies wDeck
	void deal(unsigned int wDeck[][FACES], const char *wFace[],
		const char *wSuit[]); // dealing doesn't modify the arrays

	const char *suit[SUITS] = { "HEARTs","DIAMONDs","CLUBs","SPADEs" };
	const char *face[FACES] = { "Ace", "2", "3", "4",
		"5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	// initialize deck array
	unsigned int deck[SUITS][FACES] = { 0 };

	shuffle(deck);
	deal(deck, face, suit);

}
void shuffle(unsigned int wDeck[][FACES]) {
	size_t row;
	size_t column;
	size_t card;

	for (card = 1; card <= CARDS; ++card) {
		do {
			row = rand() % SUITS;
			column = rand() % FACES;
		} while (wDeck[row][column] != 0);

		wDeck[row][column] = card;
	}
}
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[]) {
	size_t card;
	size_t row;
	size_t column;

	for (card = 1; card <= CARDS; ++card) {
		for (row = 0; row < SUITS; ++row) {
			for (column = 0; column < FACES; ++column) {
				if (wDeck[row][column] == card) {
					printf("%5s of %-8s%c", wFace[column], wSuit[row], card % 2 == 0 ? '\n' : '\t'); //2-column format
				}
			}
		}
	}
}
void dealPoker(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[]) {

	//const char *suit[SUITS] = { "HEARTs","DIAMONDs","CLUBs","SPADEs" };
	//const char *face[FACES] = { "Ace", "2", "3", "4",
	//	"5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	//// initialize deck array
	//unsigned int deck[SUITS][FACES] = { 0 };


	unsigned int newDeck[SUITS][FACES] = { 0 };
	size_t card;
	size_t row;
	size_t column;
	char* hand[10];
	int handVal[5];
	bool straight = false;
	bool flush = false;
	bool fourKind = false;
	bool threeKind = false;
	bool twoPair = false;
	bool pair = false;
	puts("Your Hand!:");
	for (card = 1; card <= 5; ++card) {
		for (row = 0; row < SUITS; ++row) {
			for (column = 0; column < FACES; ++column) {
				if (wDeck[row][column] == card) {
					printf("Card# %d: %5s of %-8s\n", card, wFace[column], wSuit[row]);
					hand[card - 1] = wFace[column];//saves the current 
					hand[card + 4] = wSuit[row];
					//card/value assignment block
					if (wFace[column] == "2") {
						handVal[card - 1] = 2;
					}
					else if (wFace[column] == "3") {
						handVal[card - 1] = 3;
					}
					else if (wFace[column] == "4") {
						handVal[card - 1] = 4;
					}
					else if (wFace[column] == "5") {
						handVal[card - 1] = 5;
					}
					else if (wFace[column] == "6") {
						handVal[card - 1] = 6;
					}
					else if (wFace[column] == "7") {
						handVal[card - 1] = 7;
					}
					else if (wFace[column] == "8") {
						handVal[card - 1] = 8;
					}
					else if (wFace[column] == "9") {
						handVal[card - 1] = 9;
					}
					else if (wFace[column] == "10") {
						handVal[card - 1] = 10;
					}
					else if (wFace[column] == "J") {
						handVal[card - 1] = 11;
					}
					else if (wFace[column] == "Q") {
						handVal[card - 1] = 12;
					}
					else if (wFace[column] == "K") {
						handVal[card - 1] = 13;
					}
					else if (wFace[column] == "Ace") {
						handVal[card - 1] = 14;
					}
				}
			}
		}
	}
	int hold;
	//bubbleSort:
	//pass
	for (int i = 0; i < 5; ++i) {
		//comparison
		for (int j = 0; j < 4; ++j) {
			if (handVal[j] > handVal[j + 1]) {
				hold = handVal[j];
				handVal[j] = handVal[j + 1];
				handVal[j + 1] = hold;
			}
		}
	}
	for (int i = 0; i < 5; ++i) {
		printf("\narr[%d]: %s\tarr[%d]: %s\n", i, hand[i], i + 5, hand[i + 5]);
	}
	for (int i = 0; i < 5; ++i) {
		printf("\narrVal[%d]: %d\n", i, handVal[i]);
	}
	//0-4 is the FACE; 5-9 is the SUIT!
	//f) Determine whether the hand contains a straight(i.e., five cards of consecutive face values).
	//organize Val from low to high:
	if (handVal[1] == handVal[0] + 1 && handVal[2] == handVal[0] + 2 && handVal[3] == handVal[0] + 3 && handVal[4] == handVal[0] + 4) {
		straight = true;
		printf("\n\nSTRAIGHT!!!!\n\n");
	}
	//e) Determine whether the hand contains a flush(i.e., all five cards of the same suit).
	else if (hand[5] == hand[6] && hand[5] == hand[7] && hand[5] == hand[8] && hand[5] == hand[9]) {
		flush = true;
		printf("\n\nFLUSH!!!!\n\n");
	}
	//d) Determine whether the hand contains four of a kind(e.g., four aces).
	else if ((handVal[0] == handVal[1] && handVal[1] == handVal[2] && handVal[2] == handVal[3]) || (handVal[1] == handVal[2] && handVal[2] == handVal[3] && handVal[3] == handVal[4])) {
		fourKind = true;
		printf("\n\nFOUR OF A KIND!!!!\n\n");
	}
	//c) Determine whether the hand contains three of a kind(e.g., three jacks).
	else if ((handVal[0] == handVal[1] && handVal[1] == handVal[2]) || (handVal[1] == handVal[2] && handVal[2] == handVal[3]) || (handVal[2] == handVal[3] && handVal[3] == handVal[4])) {
		threeKind = true;
		printf("\n\nTHREE OF A KIND!!!!\n\n");
	}
	//b) Determine whether the hand contains two pairs.
	else if ((handVal[0] == handVal[1] && handVal[2] == handVal[3]) || (handVal[1] == handVal[2] && handVal[3] == handVal[4]) || (handVal[0] == handVal[1] && handVal[3] == handVal[4])) {
		twoPair = true;
		printf("\n\nTWO PAIRS!!!!\n\n");
	}
	//a) Determine whether the hand contains a pair.
	else if (handVal[0] == handVal[1] || handVal[1] == handVal[2] || handVal[2] == handVal[3] || handVal[3] == handVal[4]) {
		pair = true;
		printf("\n\nA PAIR!!!!\n\n");
	}
	while (!(flush)) {
		shuffle(newDeck);
		dealPoker(newDeck, wFace, wSuit);
	}
	puts("");
}
void waitFor(unsigned int secs) {
	unsigned int retTime = time(0) + secs;   // Get finishing time.
	while (time(0) < retTime);               // Loop until it arrives.
}
void tortoiseAndHare(void) {
	int tPos = 1;
	int hPos = 1;
	int tMove;
	int hMove;
	while (tPos < 70 && hPos < 70) {
		system("cls");
		tMove = 1 + rand() % 10;
		hMove = 1 + rand() % 10;
		//Tortoise Switch:
		switch (tMove) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			//Fast plod		50%		3 squares to the right
			tPos += 3;
			break;
		case 6:
		case 7:
			//Slip			20%		6 squares to the left
			/*	if (tPos <= 7) {
			tPos = 1;
			break;
			}
			tPos -= 6;*/
			break;
		case 8:
		case 9:
		case 10:
			//Slow plod		30%		1 square to the right
			tPos += 1;
			break;
		}
		//Hare Switch:
		switch (hMove) {
		case 1:
		case 2:
			//Big hop		20%		9 squares to the right
			hPos += 9;
			break;
		case 3:
		case 4:
			////Big slip		20%		12 squares to the left
			//if (hPos <= 13) {
			//	hPos = 1;
			//	break;
			//}
			//hPos -= 12;
			break;
		case 5:
			//Small hop		10%		1 square to the right
			hPos += 1;
			break;
		case 6:
		case 7:
		case 8:
			//Small slip	30%		2 squares to the left
			/*if (hPos <= 3) {
			hPos = 1;
			break;
			}
			hPos -= 2;*/
			break;
		case 9:
		case 10:
			//Sleep:		20%		No move
			break;
		}
		printf("START |");
		//T print loop
		for (int i = 1; i <= 70; ++i) {
			if (tPos == i) {
				printf("T");
			}
			else {
				printf("-");
			}
		}
		printf("|FINISH\nSTART |");
		//H print loop
		for (int i = 1; i <= 70; ++i) {

			if (hPos == i) {
				printf("H");
			}
			else {
				printf("-");
			}
		}
		printf("|FINISH");
		waitFor(1);


	}//end while
	if (tPos >= 70) {
		puts("\n\nTortoise WINs!\n");
	}
	else if (hPos >= 70) {
		puts("\n\nHare WINs!\n");
	}
}
void mazeTraverse(int rowPos, int colPos) {

	//Place in main:
	/*int startRowPos = 10;
	int startColPos = 1;
	mazeTraverse(startRowPos, startColPos);*/

	int moveNum = 0;
	const char maze[12][12] = { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',
		'#', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#',
		' ', ' ', '#', ' ', '#', ' ', '#', '#', '#', '#', ' ', '#',
		'#', '#', '#', ' ', '#', ' ', ' ', ' ', ' ', '#', ' ', '#',
		'#', ' ', ' ', ' ', ' ', '#', '#', '#', ' ', '#', ' ', ' ',
		'#', '#', '#', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#',
		'#', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#',
		'#', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#',
		'#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#',
		'#', '#', '#', '#', '#', '#', ' ', '#', '#', '#', ' ', '#',
		'#', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#',
		'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',
	};
	bool win = false;
	int dir = 1;
	//print maze:
	while (win == false) {
		++moveNum;
		if ((rowPos == 2 && colPos == 0) || (rowPos == 4 && colPos == 11)) {
			win = true;
		}
		for (int row = 0; row < 12; ++row) {
			for (int col = 0; col < 12; ++col) {
				if (rowPos == row && colPos == col) {
					printf("X ");
				}
				else { printf("%c ", maze[row][col]); }
			}
			printf("\n");
		}
		printf("\n--------Move: %d--------\n\n", moveNum);
		//1 east, 2 south, 3 west, 4 north
		//control block:
		switch (dir) {
			//east
		case 1:
			//check right, turn & move 1:
			if (maze[rowPos + 1][colPos] != '#') {
				dir = 2;
				++rowPos;
			}
			//check fwd & move 1:
			else if (maze[rowPos][colPos + 1] != '#') {
				++colPos;
			}
			//check left, turn & move 1:
			else if (maze[rowPos - 1][colPos] != '#') {
				dir = 4;
				--rowPos;
			}
			//reverse & move 1:
			else {
				dir = 3;
				--colPos;
			}
			break;
			//south
		case 2:
			//check right, turn & move 1:
			if (maze[rowPos][colPos - 1] != '#') {
				dir = 3;
				--colPos;
			}
			//check fwd & move 1:
			else if (maze[rowPos + 1][colPos] != '#') {
				++rowPos;
			}
			//check left, turn & move 1:
			else if (maze[rowPos][colPos + 1] != '#') {
				dir = 1;
				++colPos;
			}
			//reverse & move 1:
			else {
				dir = 4;
				--rowPos;
			}
			break;
			//west
		case 3:
			//check right, turn & move 1:
			if (maze[rowPos - 1][colPos] != '#') {
				dir = 4;
				--rowPos;
			}
			//check fwd & move 1:
			else if (maze[rowPos][colPos - 1] != '#') {
				--colPos;
			}
			//check left, turn & move 1:
			else if (maze[rowPos + 1][colPos] != '#') {
				dir = 2;
				++rowPos;
			}
			//reverse & move 1:
			else {
				dir = 1;
				++colPos;
			}
			break;
			//north
		case 4:
			//check right, turn & move 1:
			if (maze[rowPos][colPos + 1] != '#') {
				dir = 1;
				++colPos;
			}
			//check fwd & move 1:
			else if (maze[rowPos - 1][colPos] != '#') {
				--rowPos;
			}
			//check left, turn & move 1:
			else if (maze[rowPos][colPos - 1] != '#') {
				dir = 3;
				--colPos;
			}
			//reverse & move 1:
			else {
				dir = 2;
				++rowPos;
			}
			break;
		}//end switch

		 //exit maze:
		if ((rowPos == 2 && colPos == 0) || (rowPos == 4 && colPos == 11)) {
			printf("\n\nCONGRATS!! YOU FOUND AN EXIT!\n\n");
		}

	}//end while
}//end mazeTraverse fx
void simpletron(void) {
#define READ 10
	//Read a word from the terminal into a specific location in memory
#define WRITE 11
	//Write a word from a specific location in memory to the terminal
#define LOAD 20
	//Load a word from a specific location in memory into the accumulator
#define STORE 21
	//Store a word from the accumulator into a specific location in memory
#define ADD 30
	//Add a word from a specific location in memory to the word in the accumulator (leave result in accumulator)
#define SUBTRACT 31
	//Subtract a word from a specific location in memory from the word in the accumulator(leave result in accumulator)
#define DIVIDE 32
	//Divide a word from a specific location in memory into the word in the accumulator (leave result in accumulator).
#define MULTIPLY 33
	//Multiply a word from a specific location in memory by the word in the accumulator(leave result in accumulator).
#define MOD 34
	//Remainder a word from a specific location in memory by the word in the accumulator(leave result in accumulator).
#define BRANCH 40
	//Branch to a specific location in memory
#define BRANCHNEG 41
	//Branch to a specific location in memory if the accumulator is negative
#define BRANCHZERO 42
	//Branch to a specific location in memory if the accumulator is zero
#define HALT 43
	//Halt—i.e., the program has completed its task
	short mem[101];
	short acc = 0;
	short* insPtr;
	insPtr = &mem[0];
	puts("\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/");
	//input instructions
	puts("ENTER SML PROGRAM::\n...................");
	for (int i = 0; i < 100; ++i) {
		printf("%d ? : ", i);
		scanf_s("%d", &mem[i]);
		if (mem[i] == 0) {
			break;
		}
		while (mem[i] < -9999 || mem[i]>9999) {
			printf("CMD out of range.\n");
			printf("%d ? : ", i);
			scanf_s("%d", &mem[i]);
			if (mem[i] == 0) {
				for (int j = i; j < 100; ++j) {
					mem[j] = 0;
				}
				break;
			}
		}
	}//end instruction loop

	 //*=*=*=*=*=|SIMPLETRON|=*=*=*=*=*
	 //SML programs will be "instructions" placed in the array
	 //XX-operation_code XX-operand

	 //execution:
	int code;
	int operand;
	int skip;
	bool quit = false;
	waitFor(3);
	puts("\n*** Program loading completed ***");
	waitFor(2);
	puts("*** Program execution begins ***\n");
	waitFor(2);
	for (; *insPtr != 0; ++insPtr) {
		//prevents stack corruption on 'mem' array; acitvates 'quit'
		if (insPtr == mem[100] || quit == true) {
			break;
		}
		code = *insPtr / 100;
		operand = *insPtr - (code * 100);
		//instruction execution cycle:
		switch (code) {
		case READ:
			puts("[*READ]");
			printf("Enter value for location: [%d]\n", operand);
			scanf_s("%d", &mem[operand]);
			//sentinel control:
			if (insPtr[operand] == 0) {
				quit = true;
			}
			break;
		case WRITE:
			puts("[*WRITE]");
			printf("Value in location [%d]: %d\n", operand, mem[operand]);
			break;
		case LOAD:
			puts("[*LOAD]");
			acc = mem[operand];
			printf("Value loaded into accumulator");
			break;
		case STORE:
			puts("[*STORE]");
			mem[operand] = acc;
			printf("Value loaded into memory");
			break;
		case ADD:
			printf("[*ADD]\t");
			acc += mem[operand];
			printf("Accumulator = %d\n", acc);
			//sentinel
			/*if (*insPtr + operand == 0) {
			quit = true;
			}*/
			break;
		case SUBTRACT:
			printf("[*SUB]\t");
			acc -= mem[operand];
			printf("Accumulator = %d\n", acc);
			//sentinel
			/*if (*insPtr + operand == 0) {
			quit = true;
			}*/
			break;
		case DIVIDE:
			printf("[*DIV]\t");
			acc /= mem[operand];
			printf("Accumulator = %d\n", acc);
			//sentinel
			/*if (*insPtr + operand == 0) {
			quit = true;
			}*/
			break;
		case MULTIPLY:
			printf("[*MUL]\t");
			acc *= mem[operand];
			printf("Accumulator = %d\n", acc);
			//sentinel
			/*if (*insPtr + operand == 0) {
			quit = true;
			}*/
			break;
		case MOD:
			printf("[*MOD]\t");
			acc %= mem[operand];
			printf("Accumulator = %d\n", acc);
			//sentinel
			/*if (*insPtr + operand == 0) {
			quit = true;
			}*/
			break;
		case BRANCH:
			skip = -(int)(insPtr - &mem[0]) / 2 + (operand - 2);
			insPtr += skip;
			printf("[*BRANCH] to mem[%d]\n", skip + 3);
			break;
		case BRANCHNEG:
			if (acc < 0) {
				puts("[*BNEG]: Active");
				skip = -(int)(insPtr - &mem[0]) / 2 + (operand - 2);
				insPtr += skip;
				printf("[*BRANCH] to mem[%d]\n", skip + 3);
			}
			else {
				puts("[*BNEG]: Inactive");
			}
			break;
		case BRANCHZERO:
			if (acc == 0) {
				puts("[*BZERO]: Active");
				skip = -(int)(insPtr - &mem[0]) / 2 + (operand - 2);
				insPtr += skip;
				printf("[*BRANCH] to mem[%d]\n", skip + 3);
			}
			else {
				puts("[*BZERO]: Inactive");
			}
			break;
		case HALT:
			puts("[*HALT]");
			quit = true;
			break;
		default:
			break;
		}//end switch
	}//end for
	 //summary:
	puts("--EXIT--");
	printf("Accumulator = %d\n****************\n", acc);
	puts("\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/");
	//*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
}
void circleMathFx(void) {

	void circleCircumference(double r, const double pi);
	void circleArea(double r, const double pi);
	void sphereVolume(double r, const double pi);

	//read 1,2,3 for option call
	//read double radius
	//array of fx pointers that select functions
	void(*f[3])(double, double) = { circleCircumference, circleArea, sphereVolume };

	size_t choice = 0;
	double radius = 0;
	double pi = 3.141593;

	printf("Call for a (1=circumference), (2=area), (3=volume), [0=exit]: ");
	scanf_s("%d", &choice);
	if (choice != 0) {
		printf("\nEnter radius: ");
		scanf_s("%lf", &radius);
	}

	while (choice != 0) {
		//envoke:
		(*f[choice - 1])(radius, pi);
		//repeat prompt:
		printf("\nCall for a (1=circumference), (2=area), (3=volume), [0=exit]: ");
		scanf_s("%d", &choice);
		if (choice != 0) {
			printf("\nEnter radius: ");
			scanf_s("%lf", &radius);
		}
	}
	puts("");




}
void circleCircumference(double r, const double pi) {
	//fx prints: which calculation, radius entered, result
	printf("\nCircumference of circle with radius of %lf = %lf!\n", r, 2 * pi*r);
}
void circleArea(double r, const double pi) {
	printf("\n\Area of circle with radius of %lf = %lf!\n", r, r*r*pi);
}
void sphereVolume(double r, const double pi) {
	printf("\n\Volume of a sphere with radius of %lf = %lf!\n", r, 4 / 3 * pi*r*r*r);
}
void mathItUp(void) {

	void addIt(double a, double b);
	void subtractIt(double a, double b);
	void multiplyIt(double a, double b);
	void divideIt(double a, double b);

	double A = 0;
	double B = 0;
	int choice = 0;

	void(*f[4])(double, double) = { addIt,subtractIt,multiplyIt,divideIt };

	printf("Call for (1=addition), (2=subtraction), (3=multiplication), (4=division), [0=quit]: ");
	scanf_s("%d", &choice);
	if (choice != 0) {
		printf("\nEnter value A: ");
		scanf_s("%lf", &A);
		printf("Enter value B: ");
		scanf_s("%lf", &B);
	}

	while (choice != 0) {
		//envoke:
		(*f[choice - 1])(A, B);
		//repeat prompt:
		printf("Call for (1=addition), (2=subtraction), (3=multiplication), (4=division), [0=quit]: ");
		scanf_s("%d", &choice);
		if (choice != 0) {
			printf("\nEnter value A: ");
			scanf_s("%lf", &A);
			printf("Enter value B: ");
			scanf_s("%lf", &B);
		}//end if
	}//end while
	puts("//////////////////////");
}//end mathItUp
void addIt(double a, double b) {
	printf("\n%lf + %lf = %lf\n\n", a, b, a + b);
}
void subtractIt(double a, double b) {
	printf("\n%lf - %lf = %lf\n\n", a, b, a - b);
}
void multiplyIt(double a, double b) {
	printf("\n%lf * %lf = %lf\n\n", a, b, a * b);
}
void divideIt(double a, double b) {
	printf("\n%lf / %lf = %lf\n\n", a, b, a / b);
}
// ch8
void stringPractice(void) {
	char c = 'c';
	//what ACTUALLY IS 'c': c ASSIGNMENT operator (=)
	int x = 1;
	int y = 2;
	int z = 3;
	double d = 1;
	double e = 2;
	double f = 3;
	char s1[100] = { "cathat" };
	char s2[100] = { "hat" };
	char *s5 = { "HOOOWWDDYYY" };
	//printf("\t!!%p!!\t!!%s!!\t",s5,s5);
	char* ptr = &s1;

	printf("%c\n", c = toupper(c));
	printf("%s%s%s\n", "The var c ", iscntrl(c) ? "is" : "is not", " a cntrl char.");
	//fgets(s1,7,stdin);
	puts(s1);
	printf("%p\n", ptr);
	ptr = strchr(s1, 'c');
	if (ptr == NULL) {
		puts("NULL!");
		printf("%p\n", ptr);
	}
	else {
		puts("NOT NULL!");
		printf("%p\n", ptr);
	}
	putchar(c);
	printf("%s%s%s\n", "\nVariable 'c' ", isalpha(c) ? "is a" : "is not a", " letter!");
	c = getchar();
	printf("%c", c);
	ptr = strstr(s1, s2);
	puts("=-=-=-=-=-=-");
	puts(ptr);
	puts(&s1);
	c = 'X';
	printf("%s%s%s\n", "C ", isprint(c) ? "is a" : "is not a", " printable char.");
	//
	char *newStr = "1.27 10.3 9.432";
	char *cPtr = &newStr;
	d = strtod(newStr, cPtr);
	e = strtod(newStr, cPtr);
	f = strtod(newStr, cPtr);
	printf("\n%lf\t%lf\t%lf\n", d, e, f);
	//puts(strcpy(s1,s2));
	ptr = strpbrk(s1, s2);
	printf("\n**%c**\n", *ptr);
	printf("\n%s%s%s\n", "s1 and s2 ", strcmp(s1, s2) == 0 ? "are" : "are not", " the same!");
	ptr = strchr(s1, c);
	puts(s1);
	printf(s1, "int:%7d  int:%7d  int:%7d", x, y, z);
	puts(s1);
	strncat(s1, s2, 10);
	puts(s1);
	printf("\n%d\n", strlen(s1));
	char s3[] = { "hey, there, how, are, ya?" };
	for (int i = 0; i < strlen(s3); ++i) {
		puts("");
		putchar(s3[i]);
	}		puts("\n");

	puts("+_+_+_+_+_+_+_+_+_+_");
	char *tokPtr = strtok(s3, ",");
	for (int i = 0; i < 26; ++i) {
		if (s3[i] == NULL) {
			printf("\n*\\0*");
		}
		else {
			puts("");
			putchar(s3[i]);
		}
	}		puts("\n");

	puts("+_+_+_+_+_+_+_+_+_+_");
	printf("\n%s\n", tokPtr);
	tokPtr = strtok(NULL, ", ");
	for (int i = 0; i < 26; ++i) {
		if (s3[i] == NULL) {
			printf("\n*\\0*");
		}
		else {
			puts("");
			putchar(s3[i]);
		}
	}		puts("\n");
	printf("\n%s\n", tokPtr);
	tokPtr = strtok(NULL, ", ");
	for (int i = 0; i < 26; ++i) {
		if (s3[i] == NULL) {
			printf("\n*\\0*");
		}
		else {
			puts("");
			putchar(s3[i]);
		}
	}		puts("\n");
	printf("\n%s\n", tokPtr);
	tokPtr = strtok(NULL, ", ");
	for (int i = 0; i < 26; ++i) {
		if (s3[i] == NULL) {
			printf("\n*\\0*");
		}
		else {
			puts("");
			putchar(s3[i]);
		}
	}		puts("\n");
	printf("\n%s\n", tokPtr);
	/*tokPtr = strtok(NULL, ", ");
	printf("\n%s\n", tokPtr);*/
	puts(tokPtr);
	char string[50] = { "jack !  @ #$%      " };
	string[30] = 'Y';
	for (int i = 0; i < 49; ++i) {
		if (string[i] == NULL) {
			printf("\nstring[%d]: NULL\n", i);
		}
		else {
			printf("\nstring[%d]: %c\n", i, string[i]);
		}
	}
	puts("");
}
void charTest(void) {
	//read char/tests with every fx in char handling lib.  print every return value.
	char c = getchar();
	printf("\n%s%s%s\n", "Var 'c' ", isblank(c) ? "is a" : "is not a", " blank space.");
	printf("\n%s%s%s\n", "Var 'c' ", isdigit(c) ? "is a" : "is not a", " digit.");
	printf("\n%s%s%s\n", "Var 'c' ", isalpha(c) ? "is a" : "is not a", " letter.");
	printf("\n%s%s%s\n", "Var 'c' ", isalnum(c) ? "is a" : "is not a", " letter/number.");
	printf("\n%s%s%s\n", "Var 'c' ", isxdigit(c) ? "is a" : "is not a", " hex value.");
	printf("\n%s%s%s\n", "Var 'c' ", islower(c) ? "is a" : "is not a", " lowercase value.");
	printf("\n%s%s%s\n", "Var 'c' ", isupper(c) ? "is a" : "is not an", " uppercase value.");
	printf("\n%s%s%s\n", "Var 'c' ", isspace(c) ? "is a" : "is not a", " space.");
	printf("\n%s%s%s\n", "Var 'c' ", iscntrl(c) ? "is a" : "is not a", " cntrl char.");
	printf("\n%s%s%s\n", "Var 'c' ", ispunct(c) ? "is a" : "is not a", " punctuation char.");
	printf("\n%s%s%s\n", "Var 'c' ", isprint(c) ? "is a" : "is not a", " printable.");
	printf("\n%s%s%s\n", "Var 'c' ", isgraph(c) ? "is a" : "is not a", " graphable.");
}
void toLowerAndUpper(void) {
	//upper/lower
	char s[100];
	puts("Input any string (upto 99 char):");
	fgets(s, 99, stdin);
	int i = 0;
	puts("\nIn upper:");
	while (s[i] != '\0') {
		printf("%c", toupper(s[i]));
		i++;
	}
	i = 0;
	puts("\nIn lower:");
	while (s[i] != NULL) {
		printf("%c", tolower(s[i]));
		i++;
	}
}
void sumOfStrings(void) {
	//sum the strings:
	char *s1 = "2";
	char *ptr1 = NULL;
	char *s2 = "3";
	char *ptr2 = NULL;
	char *s3 = "4";
	char *ptr3 = NULL;
	char *s4 = "5";
	char *ptr4 = NULL;
	char *s1n = "2";
	char *ptr1n = NULL;
	char *s2n = "3";
	char *ptr2n = NULL;
	char *s3n = "4";
	char *ptr3n = NULL;
	char *s4n = "5";
	char *ptr4n = NULL;
	//int sum
	int sum = strtol(s1, ptr1, 10) + strtol(s2, ptr2, 10) + strtol(s3, ptr3, 10) + strtol(s4, ptr4, 10);
	printf("\n%d\n", sum);
	//float sum
	double dSum = strtod(s1, ptr1, 10) + strtod(s2, ptr2, 10) + strtod(s3, ptr3, 10) + strtod(s4, ptr4, 10);
	printf("\n%lf\n", dSum);
}
void compareStrings(void) {
	//sting matchup
	char *s1 = "There";
	char *s2 = "There";
	int ans = strcmp(s1, s2);
	if (ans == 0) {
		printf("[%s] and [%s] are the same.", s1, s2);
	}
	else if (ans < 1) {
		printf("[%s] is shorter than [%s].", s1, s2);
	}
	else {
		printf("[%s] is longer than [%s].", s1, s2);
	}
	//sting 'n' matchup
	char *s3 = "There is something";
	char *s4 = "There is something here";
	int value = 0;
	puts("\nEnter number of chars to compare:");
	scanf_s("%d", &value);
	int ans2 = strncmp(s3, s4, value);
	if (ans2 == 0) {
		printf("[%s] and [%s] are the same upto [%d] characters.", s3, s4, value);
	}
	else if (ans2 < 1) {
		printf("[%s] is shorter than [%s] at or after [%d] characters.", s3, s4, value);
	}
	else {
		printf("[%s] is longer than [%s] at or after [%d] characters.", s3, s4, value);
	}
	puts("\n");
}
void randomSentence(void) {
	//need random num to select index of different parts of speech.
	char *art[5] = { "the", "a", "one", "some", "any" };
	char *noun[5] = { "boy", "girl", "dog", "town", "car" };
	char *verb[5] = { "drove", "jumped", "ran", "walked", "skipped" };
	char *prep[5] = { "to", "from", "over", "under", "on" };
	char *sentence[40];
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	char *capPtr;
	//generate 20 sentences: (a-n-v-p-a-n)
	for (int i = 0; i < 19; ++i) {
		a = rand() % 5;
		b = rand() % 5;
		c = rand() % 5;
		d = rand() % 5;
		e = rand() % 5;
		f = rand() % 5;
		//concat part of speech at index[a/b/c/d/e/f] to sentence.
		strcpy(sentence, art[a]);
		strcat(sentence, " ");
		strcat(sentence, noun[b]);
		strcat(sentence, " ");
		strcat(sentence, verb[c]);
		strcat(sentence, " ");
		strcat(sentence, prep[d]);
		strcat(sentence, " ");
		strcat(sentence, art[e]);
		strcat(sentence, " ");
		strcat(sentence, noun[f]);
		strcat(sentence, ".");
		//upper first letter
		capPtr = &sentence;
		*capPtr = toupper(*capPtr);
		//print:
		printf("%s\n", sentence);
	}
}
void tokenizePhone(void) {
	//(555) 555-5555
	char *grab[16];
	fgets(grab, 15, stdin);
	puts(grab);
	char *area = strtok(grab, "()");
	char *three = strtok(NULL, " -");
	char *four = strtok(NULL, "");
	//printf("\n%s\n%s\n%s\n",area,three,four);
	strcat(three, four);
	puts(area);
	char *aPtr = NULL;
	int aCode = strtol(area, aPtr, 10);
	char *numPtr = NULL;
	long pNum = strtod(three, numPtr, 10);
	printf("END RESULT: %d %ld", aCode, pNum);
}
void tokenReverseString(void) {
	char *sen[40];
	fgets(sen, 39, stdin);
	char *a;
	char *b;
	char *c;
	char *d;
	char *e;
	char *f;
	char *g;
	a = strtok(sen, " ");
	b = strtok(NULL, " ");
	c = strtok(NULL, " ");
	d = strtok(NULL, " ");
	e = strtok(NULL, " ");
	f = strtok(NULL, " ");
	g = strtok(NULL, "");
	puts("");

	if (g != NULL) {
		printf("%s", g);
	}
	if (f != NULL) {
		printf("%s ", f);
	}
	if (e != NULL) {
		printf("%s ", e);
	}
	if (d != NULL) {
		printf("%s ", d);
	}
	if (c != NULL) {
		printf("%s ", c);
	}
	if (b != NULL) {
		printf("%s ", b);
	}
	if (a != NULL) {
		printf("%s ", a);
	}
}
void numWordsPerString(void) {
	//count the words
	char *s1[50];
	fgets(s1, 49, stdin);
	char *a = strtok(s1, " ");
	char *b = strtok(NULL, " ");
	char *c = strtok(NULL, " ");
	char *d = strtok(NULL, " ");
	char *e = strtok(NULL, " ");
	char *f = strtok(NULL, " ");
	char *g = strtok(NULL, " ");
	char *h = strtok(NULL, " ");
	char *i = strtok(NULL, " ");
	char *j = strtok(NULL, "");
	int tally = 0;
	if (j != NULL) {
		tally = 10;
	}
	else if (i != NULL) {
		tally = 9;
	}
	else if (h != NULL) {
		tally = 8;
	}
	else if (g != NULL) {
		tally = 7;
	}
	else if (f != NULL) {
		tally = 6;
	}
	else if (e != NULL) {
		tally = 5;
	}
	else if (d != NULL) {
		tally = 4;
	}
	else if (c != NULL) {
		tally = 3;
	}
	else if (b != NULL) {
		tally = 2;
	}
	else if (a != NULL) {
		tally = 1;
	}
	printf("\nTally: %d\n", tally);
}
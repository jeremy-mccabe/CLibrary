#pragma once

#include <stdbool.h>

#define FACES 13

// function declarations
void sum(void);
void quickIfs(void);
// ch2
void twoThree(void);
void twoFour(void);
void twoSixteen(void);
void weirdMemoryPrinting(void);
void twoNineteen(void);
void circle(void);
void splitDigits(void);
void bmiCalc(void);
void carPool(void);
// ch3
void tankful(void);
void creditLimit(void);
void sales(void);
void interest(void);
void employeeSalary(void);
void largestNumbers(void);
void aGrid(void);
void factorial(void);
void heartRate(void);
void encryption(void);
// ch4
void powInterest(void);
void averageGrade(void);
void factorial2(void);
void recession(void);
void histogram(void);
void calculatingSales(void);
void conversionTable(void);
void valueOfPi(void);
void pythagoreanTriples(void);
void weeklyPay(void);
void romanNumerals(void);
void daysOfXmas(void);
void worldPopGrowth(void);
// ch5
void sixFaceRand(void);
int rollDice(void);
void craps(void);
int integerPower(int num, int power);
int multiple(int one, int two);
int even(int num);
void squareOfAst(int num);
__int64 timeInSec(int a, int b, int c, int a2, int b2, int c2);
int celsius(int f);
int fahrenheit(int c);
void printTempTable(void);
float tinyFloat(float a, float b, float c);
void perfect(int number);
void prime(int num);
int reverseDigits(int num);
int gcd(int a, int b);
int qualityPoints(void);
int flip(void);
void coinToss(void);
void guessIt(void);
int power(int base, int exponent);
unsigned long long fibonacci(unsigned int n);
void tower(int n, int start, int hold, int end);
int gcdRecursive(int a, int b);
double distance(double x1, double y1, double x2, double y2);
void schoolTimesTable(void);
// ch6
void nastyLunch(void);
void astBar(void);
void bubbleSorted(void);
void employeeRangeArray(void);
void efficientSinkSort(void);
void diceTally(void);
void modifiedCraps(void);
void planeSeating(void);
void salesTable(void);
void turtleGraphics(void);
void knightsTour(void);
void nonDuplicate(void);
void primeSubscript(void);
int testPalindrome(char name[], int low, int high, bool even);
int linearSearch(char b[], int size, char key);
void printArray(const int a[], int size);
// ch7
void pointerExamples(void);
void deal52(void);
void shuffle(unsigned int wDeck[][FACES]);
void deal(unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[]);
void dealPoker(unsigned int wDeck[][FACES], const char *wFace[],
	const char *wSuit[]); // dealing doesn't modify the arrays
void waitFor(unsigned int secs);
void tortoiseAndHare(void);
void mazeTraverse(int rowPos, int colPos);
void simpletron(void);
void circleMathFx(void);
void mathItUp(void);
// ch8
void stringPractice(void);
void charTest(void);
void toLowerAndUpper(void);
void sumOfStrings(void);
void compareStrings(void);
void randomSentence(void);
void tokenizePhone(void);
void tokenReverseString(void);
void numWordsPerString(void);
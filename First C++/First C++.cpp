#include <iostream>
#include <array>
#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include <stack>
#include <algorithm>
#include "Circle.h"
using namespace std;

// Structure declaration
struct Rectangle1
{
	int length;
	int breadth;
};
struct Square
{
	int length;
	int breadth;
	char x;
} square1, square2;

Square s1, s2, s3;

// Functions
/*
 * 1. Pass by value
 * 2. Pass by address
 * 3. Pass by reference
*/

// Function declaration
int add(int a, int b)
{
	int c = a + b;
	return (c);
}


// pass by value
void valueSwap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
// pass by address
void addressSwap(int *x, int *y)
{
	// * to deference
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
// pass by reference
void referenceSwap(int &x, int &y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
// Array as parameter
// Array can only be passed by address
// can use * instead of []
void fun(int A[], int n)
{
	A[0] = 15;
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << endl;
	}
}
int * fun2(int size)
{
	int* p;
	p = new int[size];

	for (int i = 0; i < size ;i ++)
	{
		p[i] = i + 1;
	}
	return p;
}
// using value
void fun3(Rectangle1 r)
{
	r.length = 20;
	cout << "Length: " << r.length << endl << "Breadth: " << r.breadth << endl;
}
// using address
void fun4 (Rectangle1 *r)
{
	r ->length = 20;
	cout << "Length: " << r->length << endl << "Breadth: " << r->breadth << endl;
}
// create object of type rectangle using pointer in heap, returning address of the structure
Rectangle1 * fun5()
{
	Rectangle1* p;
	p = new  Rectangle1;
	p->length = 5;
	p->breadth =5 ;

	return p;
}
// structure as parameter
// call by value
// will not modify the value
int valueArea(Square r1)
{
	return r1.length * r1.breadth;
}
// call by parameter
// modify the value
int referenceArea(Square &r1)
{
	return r1.length * r1.breadth;
}
void initialise(Square *s, int l, int b )
{
	s->length = l;
	s->breadth = b;
}
int squareArea(Square s)
{
	return s.length * s.breadth;
}
// call by address
void changeLength(Square *p, int l)
{
	p->length = l;
}
int main()
{
	// Topic 1: Arrays
	int A[5];
	A[0] = 27;
	A[1] = 1;
	A[2] = 2;
	A[3] = 3;
	A[4] = 20;
	int B[]{ 2,4,5,6,7 };
	array<int, 10> C{ 2,2,3,4,5 };
	// foreach loop
	for (int i : B)
	{
		cout << i << "\n";
	}
	// for loop 
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", B[i]);
	}
	cout << endl;
	cout << sizeof(A) << endl;
	cout << A[1] << endl;
	printf("%d\n", A[2]);
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << C[i] << endl;
	}
	for (int x : A)
	{
		cout << x << endl;
	}

	// getting user input
	int n;
	cout << "Enter size: ";
	cin >> n;

	// structures
	cout << "Structures" << endl;
	struct Rectangle {
		int length;
		int breadth;
	};
	Rectangle r1;
	r1.length = 10;
	r1.breadth = 2;
	Rectangle r2 = { 10,5 };
	printf("Area of rectangle is %d", r2.length * r2.breadth);
	cout << endl;
	cout << "Area of rectangle is: " << r1.length * r1.breadth;
	cout << endl;

	struct Student
	{
		int roll; // 2 bytes
		char name[25]; // 25 bytes
		char dept[10]; // 10 bytes
		char address[50]; // 50 bytes
	};
	Student s = {1, {2}, {2}, {3}};

	struct Card
	{
		int face; // 2 bytes
		int shape; // 2 bytes
		int color; // 2 bytes
	};

	Card c;
	c.face = 1;
	c.shape = 0;
	c.color = 0;
	// Card c = {1,0,0}

	// Array of structures;
	Card deck[52] = { {1,0,0}, {2,0,0}, {3,0,0} };
	printf("%d", deck[0].face);
	cout << endl;
	printf("%d", deck[0].shape);
	cout << endl;

	Square s0 = { 1,2 };
	printf("%lu", sizeof(s0));
	cout << endl;

	s0.length = 10;
	s0.breadth = 20;
	cout << s0.length << endl;
	cout << s0.breadth << endl;

	// pointers (Accessing main memory) (Memory consists on code section, stack, heap) (Accessing the resources outside the program, eg: Heap, Resources, Parameter Parsing)
	cout << "Pointers" << endl;

	// p pointing to address of a, p -> a

	//variable
	int a = 10;

	// pointer variable
	int* p;

	// initialization (address of a)
	p = &a;

	printf("%d", a);
	cout << endl;
	// *p to deference the pointer, if only p it will be the address
	printf("%d", *p);
	cout << endl;
	// printing the addresses
	printf("using pointer %d %d", p, &a);
	cout << endl;

	int* p1;
	// allocate 5 int in heap (creating array in heap)
	p1 = new int[5];
	p1[0] = 5; p1[1] = 2; p1[2] = 3; p1[3] = 5; p1[4] = 3;

	for (int i = 0; i < 5; i++)
	{
		cout << p1[i] << endl;
	}
	cout << p1 << endl;

	// deleting array after using (must) when memory is not required is good to delete them
	delete[] p1;

	int AB[5] = { 2,4,5,6,8 };
	// p2 and p3 is the same;
	int* p2;
	p2 = &AB[0];
	int* p3;
	p3 = AB;

	for (int i = 0; i < 5; i++)
	{
		cout << p3[i] << endl;
	}

	cout << endl;


	int* p4;
	char* p5;
	float* p6;
	double* p7;
	struct Rombus* p8;

	cout << sizeof(p4) << endl;
	cout << sizeof(p5) << endl;
	cout << sizeof(p6) << endl;
	cout << sizeof(p7) << endl;
	cout << sizeof(p8) << endl;

	cout << endl;

	// Reference (alias given to a variable)
	// useful in parameter parsing

	int int1 = 10;
	// declared and initialized reference
	int& r = int1;
	// changing either the actual value or reference value will affect both
	int1 = 25;

	int int2 = 30;
	r = int2;
	cout << int1 << endl << r << endl;

	cout << endl;

	// Pointer to Structure

	Rectangle rectangle1 = { 10,5 };
	Rectangle* p9 = &rectangle1;
	rectangle1.length = 15;
	// assigning value from pointer (2 ways)
	(*p9).length = 5;
	p9->length = 20;

	cout << p9->length << endl;
	cout << p9->breadth << endl;

	// dynamic allocation ( create the object in heap )
	Rectangle1* p10;
	p10 = new Rectangle1;

	// Using the functions
	int numberOne, numberSecond;
	cout << "Enter your first number: ";
	cin >> numberOne;

	cout << "Enter your first number: ";
	cin >> numberSecond;

	int totalNumber = add(numberOne, numberSecond);

	cout << "Total Number: " << totalNumber << endl;

	addressSwap(&numberOne, &numberSecond);

	cout << "First Number: " << numberOne << endl;
	cout << "Second Number: " << numberSecond << endl;

	// Array as parameter
	int AC[] = { 2, 4, 6, 8, 10 };
	int number = 5;
	fun(AC, number);
	
	for (int x: AC)
	{
		cout << x << " ";
	}
	cout << endl;
	int *ptr, sz = 5;

	ptr = fun2(sz);

	for (int i = 0;i < sz; i++)
	{
		cout << ptr[i] << endl;
	}

	Rectangle1 rectangle2 = { 10,5 };
	fun3(rectangle2);
	printf("Length: %d \nBreadth: %d\n", rectangle2.length, rectangle2.breadth);
	fun4(&rectangle2);
	printf("Length: %d \nBreadth: %d\n", rectangle2.length, rectangle2.breadth);

	Rectangle1* ptr2 = fun5();

	cout << "Length: " << ptr2->length << endl << "Breadth: " << ptr2->breadth << endl;

	// Structures and Functions

	Square square1;

	initialise(&square1, 5, 5);
	int areaOfSquare = squareArea(square1);
	changeLength(&square1, 5);
	cout << "Area of square: " << areaOfSquare << endl;

	// Usin a class called Cirle

	// Using the initialise method as the class name
	Circle circle1(10);

	circle1.changeRadius(20);
	cout << "Area of circle: " << circle1.areaCircle() << endl;

	// Monolithic Program
	int length1, breadth1;

	cout << "Enter length and breadth: ";
	cin >> length1 >> breadth1;

	int area1 = length1 * breadth1;
	int permeter1 = 2 * (length1 + breadth1);

	cout << "Area: " << area1 << endl << "Perimeter: " << permeter1 << endl;
















	return 0;
}

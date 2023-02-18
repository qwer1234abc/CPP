#include <iostream>
#include <array>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

// Structure declaration

struct Square
{
	int length;
	int breadth;
	char x;
} square1, square2;

Square s1, s2, s3;



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
	Student s;
	s.roll = 10;

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


	return 0;
}


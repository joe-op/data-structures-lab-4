/* Lab 4
 * Joe Opseth
 * 19 February 2016
 */


#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <random>

using namespace std;

void pause_237(bool have_newline);

/*
Hex takes a pointer variable p and returns the 8 character hexidecimal string
that represents its contents which is an address value.
To print the contents of p, use:
cout << Hex(p);
*/
string Hex(void* p)
{
	stringstream stream;

	stream << hex << setfill('0') << setw(8) << (long)p << ends;

	return stream.str();

}

//Add the definition of function exercise1
void exercise1()
{
	int x, y;
	int *p, *q;
	x = 2;
	y = 8;
	p = &x;
	q = &y;
	cout << "x address: " << Hex(p) << endl
		 << "x value  : " << *p << endl
		 << "y address: " << Hex(q) << endl
		 << "y value  : " << *q << endl
	     << "p address: " << Hex(&p) << endl
	 	 << "q address: " << Hex(&q) << endl;
}

//Add the definition of function exercise2
void exercise2()
{
	int x, y, z;
	int *p, *q, *r;

	x = 18;	y = 19;	z = 21;
	p = &x; q = &y; r = &z;

	cout << " x: " << x << endl
		<< " y: " << y << endl
		<< " z: " << z << endl
		<< " p: " << Hex(p) << endl
		<< " q: " << Hex(q) << endl
		<< " r: " << Hex(r) << endl
		<< "*p: " << *p << endl
		<< "*q: " << *q << endl
		<< "*r: " << *r << endl;

}

//Add the definition of function exercise3
void exercise3()
{
	int x, y, z;
	int *p, *q, *r;
	x = 32; y = 48; z = 1;
	p = &x; q = &y; r = &z;
	cout << " x: " << x << endl
		<< " y: " << y << endl
		<< " z: " << z << endl
		<< " p: " << Hex(p) << endl
		<< " q: " << Hex(q) << endl
		<< " r: " << Hex(r) << endl
		<< "*p: " << *p << endl
		<< "*q: " << *q << endl
		<< "*r: " << *r << endl;
	cout << "....Swapping Pointers...." << endl;
	r = p; p = q; q = r;
	cout << " x: " << x << endl
		<< " y: " << y << endl
		<< " z: " << z << endl
		<< " p: " << Hex(p) << endl
		<< " q: " << Hex(q) << endl
		<< " r: " << Hex(r) << endl
		<< "*p: " << *p << endl
		<< "*q: " << *q << endl
		<< "*r: " << *r << endl;
}

//Add the definition of function exercise4
void exercise4()
{
	int a[5] = { 1, 4, 7, 10, 13 };
	int i;
	int *p;

	for (i = 0; i < 5; i++) {
		// a + i indicates memory address a plus i steps
		cout << i << " " << Hex(a + i) << " " << a[i] << endl;
	}
	cout << endl;

	i = 0;
	p = a;
	while (p < (a + 5)) {
		cout << i << " " << Hex(p) << " " << *p << endl;
		i++;
		p++;
	}
	
}

//Add the definition of function exercise4
void exercise5()
{
	//TODO
}

void exercise6()
{
	//TODO
}

int main()
{
	cout << "---Call exercise1---" << endl;
	exercise1();


	cout << "---Call exercise2---" << endl;
	exercise2();


	cout << "---Call exercise3---" << endl;
	exercise3();


	cout << "---Call exercise4---" << endl;
	exercise4();


	cout << "---Call exercise5---" << endl;
	//call function exercise5


	cout << "---Call exercise6---" << endl;
	//call function exercise6


	pause_237(true);
	return 0;
}

void pause_237(bool have_newline)
{
	if (have_newline) {
		// Ignore the newline after the user's previous input.
		cin.ignore(200, '\n');
	}

	// Prompt for the user to press ENTER, then wait for a newline.
	cout << endl << "Press ENTER to continue." << endl;
	cin.ignore(200, '\n');
}


#include <stdio.h>

// The HelloWorld class definition.
class HelloWorld
{
    public:
	HelloWorld() {}  // Constructor
	~HelloWorld() {} // Destructor
	void print()
	{
	    printf("Hello World!\n");
	}
}; // Note that a semicolon is required here.

// The main program.
int main()
{
    HelloWorld a;  // Create a HelloWorld object.
    a.print();     // Send a "print" message to the object.
    return 0;
}

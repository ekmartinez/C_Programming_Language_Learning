// Scoping
//

#include <stdio.h>

void useLocal(void); // function prototype
void useStaticLocal(void); // function prototype
void useGlobal(void); // function prototype

int x = 1; // global variable

int main(void)
{ 
	int x = 5; // local variable to new scope

	printf("local x in outer scope of main is %d\n", x);
	
	{ // start new scope
		int x = 7; // lcoal variable to new scope

		printf("local x in inner scope of main is %d\n", x);
	} // end new scope

	printf("local x in outer scope of main is %d\n", x);

	useLocal(); // useLocal has automatic local x
	useStaticLocal(); //use StaticLocal has static local x
	useGlobal(); // useGlobal uses global x
	useLocal(); // useLocal reinitizalizes automatic local x
	useStaticLocal(); // static local x retains its prior value
	useGlobal(); // global x also retains tis value

	printf("\nlocal x in main is %d\n", x);

}

	// useLocal reinitializes local variable x  during each call
	void useLocal(void)
	{
		int x = 25; // initialized each time useLocal is called

		printf("\nLocal x in useLocal is %d after entering useLocal\n", x);
		++x;
		printf("local x in useLocal is %d before exiting useLocal\n", x);
	}

	//useStaticLocal initializes static local variable x only the first time
	//the functionn is called; value of x is saved between calls to this
	//function
	void useStaticLocal(void)
	{
		// initialized once
		static int x = 50;

		printf("local static x is %d on entering useStaticLocal\n", x);
		++x; 
		printf("global x is %d on exiting useStaticLocal\n", x);
	}

	// function useGlobal modifies global variable x during each call
	void useGlobal(void)
	{
		printf("\nglobal x is %d on entering useGlobal\n", x);
		x *=10;
		printf("global x is %d on exiting useGlobal\n", x);
	}



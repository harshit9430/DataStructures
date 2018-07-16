// Harshit Sharma
// Ways in which a string can be read from user

#include<stdio.h>
#include<string.h>

void main()
{
	char x[10];
	printf("Enter the string of length < 10: \n");

	// method one
	scanf("%s", x);  
	printf("The string is: %s", x);

	// method two
	// gets() reads a line from stdin into the buffer pointed to by s until either a 
	// terminating newline or EOF, which it replaces with a null byte (aq\0aq). No check for buffer overrun is performed.
	
	gets(x);
	printf("The string is: %s", x);

	// method three
	// fgets() reads in at most one less than size characters from stream and stores them into the buffer pointed to by s. 
	// Reading stops after an EOF or a newline. If a newline is read, it is stored into the buffer. 
	// A terminating null byte (aq\0aq) is stored after the last character in the buffer.
	
	fgets(x, 5, stdin);
	printf("The string is: %s", x);

	// method four
	// The [] is the scanset character. [^\n] tells that while the input is not a newline ('\n') take input. 
	// Then with the %*c it reads the newline character from the input buffer (which is not read), and the * indicates that this 
        // read in input is discarded (assignment suppression), as you do not need it, and this newline in the buffer does not create 
        // any problem for next inputs that you might take.

	scanf("%[^\n]%*c", x);	
	printf("The string is: %s", x);
	printf("%ld", strlen(x));

	// Never use gets(). Because it is impossible to tell without knowing the data in advance how many characters gets() 
	// will read, and because gets() will continue to store characters past the end of the buffer, it is extremely dangerous to use. 
	// It has been used to break computer security. Use fgets() instead.
}

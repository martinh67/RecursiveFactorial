/* to be able to use "scanf" instead of "scanf_s" */
#define _CRT_SECURE_NO_WARNINGS

/* standard input library used for scanf and printf functions */
#include <stdio.h>

/* factorial function prototype */
long double factorial(int n);

int main() {

	/* declare variables needed */
	int n, status;

	/* give information about the program */
	printf("You will be asked to enter in a positive integer in order to caluclate the factorial\n");
	printf("\nPlease note that if a float is entered then this will be truncated i.e. 5.8 becomes 5\n\n");

	/* start the do loop */
	do {

		/* asks for a positive integer */
		printf("\nPlease enter a positive integer: ");
		status = scanf("%d", &n);

		/* checks incase a string or negative */
		if (status == 0 || n < 0)
		{
			/* give information regarding invalid input */
			printf("\nInvalid input\n");
			/* clear the data buffer */
			while (getchar() != '\n');
		}

		/* give information regarding successful input */
		else {
			printf("\n\nFactorial of %d is %.0Lf\n", n, factorial(n));
		}
	} while (status == 0 || n < 0);

	return 0;
}

/* function to calculate the factorial */
long double factorial(int n) {
	if (n > 1) {
		return n * factorial(n - 1);
	}

	else {
		return 1;
	}

}


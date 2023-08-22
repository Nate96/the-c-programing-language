/* Write a program that prints its input one word perline */

#include <stdio.h>

#define IN   1  /* inside a word */
#define OUT  0  /* outside a word */

/* count lines, words, and characters in input */
int main() {
	int c, nl, nw, nc, state;
	state = OUT;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			putchar('\n');
		}

		if (state == IN) 
			putchar(c);
	}
	
	printf("%d %d %d\n", nl, nw, nc);
	return 0;
}

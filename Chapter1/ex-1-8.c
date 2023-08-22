/*
 * Write a program to copy its input to its output, replacing each string of one or 
 * more blanks by a single blank.
 */

# include <stdio.h>

int main() {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			while ((c = getchar()) != EOF && c == ' ');
			putchar(' ');
			if (c == EOF) break;
		}
		putchar(c);
	}
	return 0;
}


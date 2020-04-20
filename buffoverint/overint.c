#include <stdio.h>
#include <stdlib.h>

void win() {
	FILE *fp;
	char c;
	fp = fopen("flag.txt", "r");
	if (fp) {
		while ((c=getc(fp)) != EOF) {
			putchar(c);
		}
	}
}

int main() {
	int get_flag = 0xEC22BABE;
	char buff[24];

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	printf("Enter: ");
	gets(buff);
	if (get_flag == 0xEC22EA27) {
		win();
	}
	printf("Execute done!\n");
	return 0;
}

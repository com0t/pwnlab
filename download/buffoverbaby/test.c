#include <stdio.h>
#include <stdlib.h>

#define MAX 64
#define BUFF 36

void win() {
    FILE * fp;
    char c;
    printf("**********************\n");
    printf("*         Win        *\n");
    printf("**********************\n");
    fp = fopen("flag.txt", "r");
    if (fp) {
	while ((c = getc(fp)) != EOF) {
		putchar(c);
	}
    }
}

int main() {
    char s[BUFF];
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    printf("Enter string: ");
    fflush(stdout);
    fflush(stdin);
    gets(s);
    printf("\nThis is flag{dont_trust_me}\n");
    return 0;
}

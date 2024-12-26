#include <stdio.h>
#include <string.h>

int main() {
	printf("No space when entering a string, will cause an error.\n\n");
	
	// getting string length
	char x[100];
	printf("Enter something --> ");
	scanf("%99s", x);
	// strlen is short for 'string length'
	int xLength = strlen(x);
	printf("The length of the string is %d", xLength);
	printf("\n\n");
	
	// comparing string
	char a[100], b[100];
	printf("Enter string a --> ");
	scanf("%99s", a);
	printf("Enter string b --> ");
	scanf("%99s", b);
	// strcmp is short for 'string comparison'
	int c = strcmp(a, b);
	if(c == 0) {
		printf("The two string are the same.\n\n");
	} else {
		printf("The two string are not the same.\n\n");
	}
	
	// string concatenation (appending strings)
	char h[100], g[100];
	printf("Enter string h --> ");
	scanf("%99s", h);
	printf("Enter string g --> ");
	scanf("%99s", g);
	// Concatenate strings h and g and display the result
    strcat(h, g); // Appends string g to string h
    printf("The connected word is:\n%s", h); // Print the concatenated string
	
	getchar();
	return 0;
}
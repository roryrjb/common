#include "string_util.h"

char *escape_string(char *input) {
	char ch;
	int i = 0;
	int j = 0;
	char *output = calloc(sizeof(char), strlen(input) * 2);

	while ((ch = input[i]) != '\0') {
		switch (ch) {
		case ' ':
		case '\t':
		case '\'':
		case '(':
		case ')':
			output[j++] = '\\';
			output[j++] = ch;
			i++;
			break;
		default:
			output[j++] = input[i++];
		}
	}

	return output;
}
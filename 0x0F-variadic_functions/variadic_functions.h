#ifndef HOLBERTON_H
#define HOLBERTON_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
struct format
{
	char c;
	int num;
	float numDec;
	char *s;
};
#endif

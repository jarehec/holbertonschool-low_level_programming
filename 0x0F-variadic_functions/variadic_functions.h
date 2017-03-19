#ifndef HOLBERTON_H
#define HOLBERTON_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
* struct f_type - list of types
* @c: char
* @i: int
* @f: float
* @s: string
*/
struct f_type
{
	char c;
	int i;
	float f;
	char *s;
};
#endif

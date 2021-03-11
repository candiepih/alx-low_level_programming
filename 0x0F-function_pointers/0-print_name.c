/**
 * print_name - prints string provided ie. @name
 * @name: string to print
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}

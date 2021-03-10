/**
 * print_name - prints string provided ie. @name
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

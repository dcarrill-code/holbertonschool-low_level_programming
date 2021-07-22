/**
 * print_name - A pointer function that prints names
 * @name: the name to print
 * @f: the adress of the function that prints
 */

void print_name(char *name, void (*f)(char *))
{

	f(name);

}

/**
 * _pow_recursion - gets the power of a number
 * @x: number to raise to certain power
 * @y: number to raise @x to the power
 * Return: (-1) if @y is lower than 0 or (1) if @y
 * is 0 or the power result of the number(@x)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

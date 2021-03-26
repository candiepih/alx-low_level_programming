/**
 * flip_bits - checks number of bits you would need to flip to
 * get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits needed to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
  unsigned long int x;
  unsigned long int count = 0;
  
  x = n ^ m;
  while (x > 0)
  {
    count++;
    x &= (x - 1);
  }
  return (count);
}

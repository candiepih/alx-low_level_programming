/**
 * print_all - prints arguments provided depending on format
 * @format: constant pointer to a string
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
  int i = 0;
  va_list list;
  char *s;

  va_start(list, format);
  while (format && format[i])
  {
    switch (format[i++])
    {
      case 'c':
        printf("%c", va_arg(list, int));
        break;
      case 'i':
        printf("%d", va_arg(list, int));
        break;
      case 'f':
        printf("%f", (float)va_arg(list, double));
        break;
      case 's':
        s = va_arg(list, char *);
        printf("%s", (s ? s : "(nil)"));
        break;
      default:
        continue;
    }
    if (format[i])
      printf(", ");
  }
  printf("\n");
  va_end(list);
}

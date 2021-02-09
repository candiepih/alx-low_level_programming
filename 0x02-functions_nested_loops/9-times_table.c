#include "holberton.h"

/**
 * jack_bauer
 * Description: print multiplication table
 */
void times_table(void) {
    int i;
    int j;

    for (i = 0; i < 10; i++){
        _putchar(((i * j) % 10) + '0');
        for (j = 1; j < 10; j++){
            _putchar(',');
            _putchar(' ');
            if (i != 0){
                if (((j * i) / 10) != 0){
                    _putchar((j * i) / 10 + '0');
                }else {
                   _putchar(' ');
                }
            }
            if (((j * i) % 10) == 0 && ((j * i) / 10) == 0)
                _putchar(' ');
            _putchar((j * i) % 10 + '0');
        }
        
        _putchar('\n');
    }
    return;
}

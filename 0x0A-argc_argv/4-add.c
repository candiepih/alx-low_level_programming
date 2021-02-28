#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int _isDigitOnly(char *s)
{
  int i;

  for (i = 0; s[i] != '\0'; i++){
    if(isalpha(s[i])){
      return 1;
    }
  }
  return 0;
}

int main(int argc, char *argv[])
{
    int sum, i = 1;
        if (argc > 1)
        {
          while (i < argc){
            if(_isDigitOnly(argv[i]) == 0){
              sum += atoi(argv[i]);
              i++;
            }else{
              printf("Error\n");
              return 1;
            }
          }
          printf("%d\n", sum);
        }
        else
        {
              printf("0\n");
                return (1);
        }
        return 0;
}

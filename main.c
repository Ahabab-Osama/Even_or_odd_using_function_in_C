#include <stdio.h>
#include <stdlib.h>

int check(int number)
{
  return (number%2==0);
}

int main()
{
    int number;
    printf("Enter the number you wanna check: ");
    scanf("%d", &number);

    if(check(number))
    {
      printf("Entered number is even.\n");
    }else{
      printf("Entered number is odd.\n");
    }



    return 0;
}

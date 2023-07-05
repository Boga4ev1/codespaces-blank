#include <stdio.h>

  int countSequences(int n)
     {
        int mod = 12345;
        int a = 0, b = 1, c = 1;

       if (n <= 0)
           return 0;
       if (n == 1)
           return 2;

     for (int i = 2; i <= n; i++)
       {
        int temp = (a + b + c) % mod;
        a = b;
        b = c;
        c = temp;
       }

    return c;
     }

 int main()
   {
    int n;
    printf("Введіть довжину послідовності: ");
    scanf("%d", &n);

    int result = countSequences(n);
    printf("Кількість шуканих послідовностей: %d\n", result);

    return 0;
   }

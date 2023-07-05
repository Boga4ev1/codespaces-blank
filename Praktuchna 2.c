#include <stdio.h>


int gcd(int a, int b) 
     {

       if (b == 0)
           return a;
       else
         return gcd(b, a % b);
     }


     int lcm(int a, int b)
       {
          return (a * b) / gcd(a, b);
       }

            int main()
{
            int n;
            printf("Введіть кількість чисел : ");
            scanf("%d", &n);
    
         int numbers[n];
        printf("Введіть числа, розділені пробілом: ");
        for (int i = 0; i < n; i++)
         {
        scanf("%d", &numbers[i]);
         }
    
           int result = numbers[0];
          for (int i = 1; i < n; i++)
           {
           result = lcm(result, numbers[i]);
           }
     
    printf("Найменше спільне кратне: %d\n", result);
    
    return 0;
}

#include <stdio.h>

   int countNumbers(int r)  
  {
          if (r <= 0) 
          {
           return 0;
          }

            int count = 0;
              int digit1 = 5;
               int digit2 = 9;
                int digit3 = 5;

    
              count += 2; 

  
         for (int i = 4; i <= r; i++)
         {
        
             count += 8;

        
            digit1 = digit2;
            digit2 = digit3;
            digit3 = 5;
         } 

    return count;
}

int main()
{
    int r;
    printf("Введіть кількість розрядів (р ≤ 30): ");
    scanf("%d", &r);

    int result = countNumbers(r);
    printf("Кількість чисел з %d розрядами: %d\n", r, result);

    return 0;
}

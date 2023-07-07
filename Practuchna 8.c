#include <stdio.h>
#include <string.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n-1);
}

   int countAnagrams(char* word)
      {
       int length = strlen(word);
       int count = factorial(length);
       return count;
      }


 int main()
 {
    char word[15];
    
       printf("Введіть слово: ");
        scanf("%s", word);

    int anagramCount = countAnagrams(word);
       printf("Кількість анаграм: %d\n", anagramCount);

    return 0;
}

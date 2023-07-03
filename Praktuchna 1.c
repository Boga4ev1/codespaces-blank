#include <stdio.h>

int main() {
    int t1, t2, t3;
    printf("Введіть значення t1, t2 та t3: ");
    scanf("%d %d %d", &t1, &t2, &t3);
    
    float all_time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3; // Загальний час у форматі десяткового дробу
    float eating_time = 1 / all_time; // Час, за який гості з'їдять пиріг
    
    printf("Час, за який гості з'їдять пиріг: %.2f\n", eating_time);
    
    return 0;
}

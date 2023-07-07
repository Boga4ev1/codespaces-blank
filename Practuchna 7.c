#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, r1, x2, y2, r2;
     
    printf("Введіть координати та радіус першого кола (x1 y1 r1): ");
          scanf("%lf %lf %lf", &x1, &y1, &r1);
    printf("Введіть координати та радіус другого кола (x2 y2 r2): ");
          scanf("%lf %lf %lf", &x2, &y2, &r2);

   
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

   
    if (distance > r1 + r2)
    {
        printf("Кола не перетинаються. Кількість точок перетину: 0\n");
    }
    else if (distance == r1 + r2)
    {
        printf("Кола торкаються одна одну. Кількість точок перетину: 1\n");
    } 
    else
    {
        
        double distance_from_radii = fabs(r2 - r1);

        if (distance_from_radii < distance && distance < r1 + r2)
        {
            printf("Кола перетинаються. Кількість точок перетину: 2\n");
        }
        else if (distance == 0 && r1 == r2)
        {
            printf("Кола збігаються одна з одною. Кількість точок перетину: -1 (безкінечно багато)\n");
        }
        else
        {
            printf("Кола не перетинаються. Кількість точок перетину: 0\n");
        }
    }

    return 0;
}

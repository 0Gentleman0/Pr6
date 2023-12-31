#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2; //Вводимо змінні для початку і кінця вектора
    double length; //Вводимо змінну для збереження довжини вектора

    printf("Введіть координати початку вектора (x1, y1): ");
    scanf("%lf %lf", &x1, &y1); //Координати початку вектора

    printf("Введіть координати кінця вектора (x2, y2): ");
    scanf("%lf %lf", &x2, &y2); //Координати кінця вектора

    
    length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); //Формула для обчислення довжини вектора

    printf("Довжина вектора: %.6lf\n", length); //Виведення довжини вектора з точністю до шести знаків після коми

    return 0;
}

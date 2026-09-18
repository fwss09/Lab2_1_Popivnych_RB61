// імпортування бібліотек
#include <stdio.h>
#include <math.h>

int main() {
    // оголошення змінних
    double X, res;

    // введення X
    printf("Enter x: ");
    scanf("%lf", &X);

    // обчислення значення функції залежно від діапазону в який потрапляє Х
    if(0 <= X && X < 4) {
        res = (2*X-1)/(3*X+1);
    } else if(4 <= X && X < 12) {
        res = 5*X+10;
    } else if( 15 <= X && X < 55) {
        res = (2*X/sqrt(-X+2*pow(X, 2)))-3*pow(X, 2);
    } else {
        res = 2-(X/10);
    }

    // вивід результату
    printf("res: %f", res);
    return 0;
}
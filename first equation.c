#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
//10th option

int main() {
    float alpha;
    scanf("%f", &alpha);
    // printf("%.25f\n", M_PI);

    //first equation
    float zet;
    double a1 = sin((M_PI / 2) + (3 * alpha));
    double a2 = sin((3 * alpha) - M_PI);
    zet = a1 / (1 - a2);

    //second equation
    //float zet1;
    float b1 = tan(((5 / 4) * M_PI) + ((3 / 2) * alpha));

    printf("answer for first equation: %f \n", zet);
    printf("answer fo second equation: %f", 1 / b1);

    return 0;
}

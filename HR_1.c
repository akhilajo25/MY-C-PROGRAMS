#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<math.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double mealCost;
    int tipPercent;
    int taxPercent;
    float totalCost;
    double tip;
    double tax;
    int totalMealCost;
    scanf("%lf",&mealCost);
    scanf("%d",&tipPercent);
    scanf("%d",&taxPercent);
    tip=(mealCost*((double)tipPercent / 100)); // 1.7425
   //printf("%.1lf",tip);

    tax=(mealCost*((double)taxPercent/100));
    totalCost=mealCost+tip+tax;
    //totalMealCost=(int) round(totalCost);
    printf("The total meal cost is %.0f dollars.",totalCost);
    return 0;
}

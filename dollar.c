/**
 * Name: Vivian Nguyen
 *
 * This program allows the user to input an amount of currency in US dollars
 * and converts it to British Pounds and Japanese JPY. 10% will be taken as
 * an exchange fee. For the remaining amount, half is changed to British Pounds
 * and the other half to JPY.
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {

    double usDollars;
    double poundsPerDollar = 0.60;
    double jpyPerDollar = 76.80;

    printf("Please input the total amount of US Dollars: ");
    scanf("%lf", &usDollars);

    usDollars = usDollars - (usDollars * 0.1);
    //changes usDollars to remaining amount after a 10% exchange fee

    double dollarsInPounds;
    double dollarsInJpy;

    dollarsInPounds = (usDollars / 2) * poundsPerDollar;
    dollarsInJpy = (usDollars / 2) * jpyPerDollar;
    //half of the remaining money is converted to pounds, and half is converted to jpy

    printf("10%% or %.2lf was taken as an exchange fee.\n", usDollars);
    printf("You get %.2lf British Pounds and %.2lf Japanese JPY.", dollarsInPounds, dollarsInJpy);

}

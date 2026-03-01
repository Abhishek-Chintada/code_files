#include <stdio.h>
#include <math.h>

// This function performs the necessary calculations using the Euler method.

void euler_method_calculation(double *arr_time,double *arr_population,double dt, int size)
{
    for(int i=1;i<size;i++)
    {
        double t = arr_time[i-1];
        double p = arr_population[i-1];
        double dpdt = 0.7*p*(1 - (p/750)) - 20;  // This line's RHS may be changed to modify the differential equation.
        arr_population[i] = p + dpdt * dt;
        arr_time[i] = t + dt;
    }
}
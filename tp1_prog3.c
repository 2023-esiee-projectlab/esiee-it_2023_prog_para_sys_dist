#include <stdio.h>
#include <math.h>
#include <omp.h>

static long num_steps = 100000;
double step;
int main(){
    int i; double x, pi, sum = 0.0;
    step = 1.0 / (double) num_steps;
    for(i=0; i<num_steps; i++){
        x = (i+0.5) * step;
        sum = sum + 4.0 / (1.0 + x * x);
    }
    pi = step * sum;
    //-
    printf("[PI:(%f)]\n", pi);
}
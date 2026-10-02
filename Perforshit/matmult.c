#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
// runtime about 1100 seconds
#define n 1000
double A[n][n];
double B[n][n];
double C[n][n];

float diff(struct timeval *start, struct timeval *end) {
    return (end->tv_sec-start->tv_sec)+1e-6*(end->tv_usec-start->tv_usec);
}

int main(void) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            A[i][j] = (double)rand()/RAND_MAX;
            B[i][j] = (double)rand()/RAND_MAX;
            C[i][j] = 0;
        }
    }
    struct timeval start, end;
    gettimeofday(&start, NULL);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    gettimeofday(&end, NULL);
    printf("%0.6f\n", diff(&start, &end));
    return 0;
}
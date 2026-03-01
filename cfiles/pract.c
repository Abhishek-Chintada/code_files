#include <stdio.h>

int main(void) {
    int longest = 0;
    int ncinl = 0;
    int c;
    while((c=getchar()) != EOF) {
        ++ncinl;
        c = getchar();
        if(c == '\n') {
            longest = ncinl;
            ncinl = 0;
        }
    }
    printf("%d\n", longest);
}
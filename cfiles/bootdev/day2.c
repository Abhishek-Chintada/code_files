#include <stdio.h>
#define MAX 1000
// write a code to read input lines and store the length and the line itself if it is longest.
int get_line(char line[], int maxline) {
    int c, i;
    for(i = 0;i < maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
        line[i] = c;
        if (c == '\n') {
            line[i] = c;
            ++i;
        }
        line[i] = '\0';
    }
    return i;
}

void copy(char to[], char from[]) {
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}

int main() {
    int len, max;
    char line[MAX];
    char longest[MAX];
    max = 0;
    while((len = get_line(line, MAX)) > 0) {
        if (len>max) {
            max = len;
            copy(longest, line);
        }
    }
            if(max > 0) {
            printf("%s", longest);
        }
            return 0;
}
#include <stdio.h>

char *day_name(int n){
    char *name[] = {
        "Illegal day",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"
    };
    return ((n < 1 || n > 7) ? name[0] : name[n]);
}

int main() {
    int i;
    scanf("%d",&i);
    printf("Day No:%2d-->%s\n",i,day_name(i));
    
    return 0;
}


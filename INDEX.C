#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n >= 0 && n <= 4) printf("Class A\n");
    else if(n >= 5 && n <= 9) printf("Class B\n");
    else printf("Invalid\n");
    return 0;
}

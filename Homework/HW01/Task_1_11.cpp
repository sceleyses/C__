#include <stdio.h>

int main() {

    char name1[20], name2[20];
    printf ( "Enter first word: ");
    scanf ( "%s", name1);
    printf("Enter second word: ");
    scanf ( "%s", name2);
    printf("!!! %s , %s !!!\n", name1, name2);

    return 0;
}
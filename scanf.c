#include <stdio.h>
#define LIMIT 100
int main() {
    char name[LIMIT];
    int age;
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("My name is %s and am %d years old.\n",name,age);

    return 0;
}

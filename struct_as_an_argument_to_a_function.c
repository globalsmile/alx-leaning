
#include <stdio.h>
#include <string.h>
#define LIMIT 100
struct emails {
    char email_1[LIMIT];
    char email_2[LIMIT];
};
 struct person {
        char name[LIMIT];
        int age;
        char address[LIMIT];
        char phone_number[LIMIT];
        struct emails email[LIMIT];
};
int userDetails(struct person first_person);
int userDetails(struct person first_person){
   strcpy(first_person.name, "globalsmile");
   first_person.age = 24;
   strcpy(first_person.address, "9 Abadina College UI");
   strcpy(first_person.phone_number, "+2349012345678");
   printf("NAME: %s\nAGE: %d\nADDRESS: %s\nPHONE-NUMBER: %s\n\n", first_person.name, first_person.age, first_person.address, first_person.phone_number);
   return 0;
}
int main() {
    struct person first_person;
    userDetails(first_person);

    return 0;
}

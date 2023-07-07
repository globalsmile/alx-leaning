#include <stdio.h>
#include <string.h>
#define LIMIT 30
 struct person {
        char name[LIMIT];
        int age;
        char address[LIMIT];
        char phone_number[LIMIT];
};
int main() {
   struct person first_person_instance[LIMIT];
   int i;
   for (i = 0; i < LIMIT;i++){
       strcpy(first_person_instance[i].name, "global smile");
       strcpy(first_person_instance[i].address, "9 Abadina College UI");
       strcpy(first_person_instance[i].phone_number,"+2349012345678");
       first_person_instance[i].age = 90;
       printf("NAME: %s\nAGE: %d\nADDRESS: %s\nPHONE-NUMBER: %s\n\n",
       first_person_instance[i].name,
       first_person_instance[i].age,
       first_person_instance[i].address,
       first_person_instance[i].phone_number);
   }

    return 0;
}

#include <stdio.h>
#include <string.h>
#define LIMIT 25
 struct person {
        char name[LIMIT];
        int age;
        char address[LIMIT];
        char phone_number[LIMIT];
};
int main() {
   struct person first_person_instance;
   strcpy(first_person_instance.name, "global smile");
   strcpy(first_person_instance.address, "9 Abadina College UI");
   strcpy(first_person_instance.phone_number,"+2349012345678");
   first_person_instance.age = 90;
   printf("NAME: %s\nAGE: %d\nADDRESS: %s\nPHONE-NUMBER: %s\n",
       first_person_instance.name,
       first_person_instance.age,
       first_person_instance.address,
       first_person_instance.phone_number);

   

    return 0;
}

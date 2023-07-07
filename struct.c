#include <stdio.h>
#include <string.h>
 struct person {
        char name[10];
        int age;
        char address[20];
        char phone_number[15];
};
int main() {
   struct person first_person_instance;
   for (int i= 0; i < 10; i++ ){
       first_person_instance.name[i] = 'A' + i;
   }
   first_person_instance.name[10] = '\0';
   strcpy(first_person_instance.address, "9 Abadina College UI");
   strcpy(first_person_instance.phone_number,"+2349012345678");
   first_person_instance.phone_number[15] = '\0';
   first_person_instance.age = 90;
   printf("NAME: %s\nAGE: %d\nADDRESS: %s\nPHONE-NUMBER: %s\n",
       first_person_instance.name,
       first_person_instance.age,
       first_person_instance.address,
       first_person_instance.phone_number);

   

    return 0;
}


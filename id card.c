#include <stdio.h>
#include <string.h>

struct id_card {
    char name[10];
    long int enroll;
    char class[10];
    long int number;
    char address[100];
    char clg_name[100];
};

int main()
{    
    printf("Student's ID Card\n\n");
    struct id_card mohit;
    strcpy(mohit.name, "Mohit");
    mohit.enroll = 236400316186;
    strcpy(mohit.class, "IT33");
    strcpy(mohit.clg_name, "R.C.Technical Institute");
    mohit.number = 9687637410;
    strcpy(mohit.address, "4/301 Abhilasha Residency, Nikol,Ahmedabad");
    printf("Name: %s\n", mohit.name);
    printf("Enrollment: %ld\n", mohit.enroll);   
    printf("Class: %s\n", mohit.class);
    printf("College Name: %s\n", mohit.clg_name);
    printf("Phone Number: %ld\n", mohit.number); 
    printf("Address: %s\n", mohit.address);
}
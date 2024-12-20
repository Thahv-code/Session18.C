#include <stdio.h>

int main() {
    struct Student{
        char name[50];
        int age;
        char phoneNumber[20];
    };
    struct Student user01 ={"Nguyen Vu Thanh", 18,"012345678"};
    printf("Name : %s\n",user01.name);
    printf("Age : %d\n",user01.age);
    printf("PhoneNumber : %s\n",user01.phoneNumber);
    return 0;
}

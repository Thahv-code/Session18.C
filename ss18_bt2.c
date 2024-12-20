#include <stdio.h>
#include "string.h"

int main() {
    struct Student{
        char name[50];
        int age;
        char phoneNumber[20];
    };
    struct Student user01;
    printf("Moi ban nhap ten : ");
    fgets(user01.name, 50, stdin);
    user01.name[strcspn(user01.name, "\n")] = '\0';
    printf("Moi ban nhap tuoi : ");
    scanf("%d",&user01.age);
    fflush(stdin);
    printf("Moi ban nhap sdt : ");
    fgets(user01.phoneNumber, 50, stdin);
    user01.name[strcspn(user01.name, "\n")] = '\0';
    printf("Ten cua ban : %s\n",user01.name);
    printf("Tuoi cua ban : %d\n",user01.age);
    printf("So dien thoai cua ban : %s\n",user01.phoneNumber);
    return 0;
}

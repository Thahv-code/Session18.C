#include <stdio.h>
#include <string.h>
int main() {
    struct Student{
        char name[50];
        int age;
        char phoneNumber[20];
    };
    struct Student user[5];
    for(int i = 0;i<5;i++){
        printf("Moi ban nhap thong tin sinh vien thu %d: \n",i+1);
        printf("Moi ban nhap ten : ");
        fgets(user[i].name, 50, stdin);
        user[i].name[strcspn(user[i].name,"\n")]='\0';
        printf("Moi ban nhap tuoi : ");
        scanf("%d",&user[i].age);
        fflush(stdin);
        printf("Moi ban nhap sdt : ");
        fgets(user[i].phoneNumber, 50, stdin);
        user[i].phoneNumber[strcspn(user[i].phoneNumber,"\n")]='\0';
    }
    for(int i = 0;i<5;i++){
        printf("Ten cua ban%d : %s\n",i+1,user[i].name);
        printf("Tuoi cua ban%d : %d\n",i+1,user[i].age);
        printf("So dien thoai cua ban%d : %s\n",i+1,user[i].phoneNumber);
        printf("\n");
    }
    return 0;
}

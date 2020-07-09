#include <stdio.h>
#include <stdlib.h>
void AddContact();
void viewContact();
void help();
char fname[10];
char lname[10];
char phone_number[10];


int main()
{
    int choice;
    printf("\n\n\t-------------------Contact Management System-------------------------")
    printf("\n\t[1] Add Contact");
    printf("\n\t[2] View Contact");
    printf("\n\t[3] Help");
    printf("\n\t[4] Exit");
    printf("\n\tEnter your choice");
    scanf("%d"&choice);
    switch choice ()
    {
    case 1:
        AddContact();
        break;
    case 2:
        viewContact();
        break;
    case 3:
        help();
        break;
    case 4:
        exit(1);
        break;
    default:
       printf("Enter correct choice!")
       main();
    }
}
void AddContact()
{
    System("cls");
    printf("\tEnter First name:");
    scanf("%s",fname);
    printf("\tEnter Last name:");
    scanf("%s",lname);
    printf("\tEnter phone number:");
    scanf("%S",phone_number);
    if(strlen(phone_number)== 10)
    {
        FILE*fp;
        fp=fopen("contact.txt","w");
        fputs(fname,fp);
        fputs(lname,fp);
        fputs(phone_number,fp);
        printf("\n\tContact Added Succesfully");
        fclose(fp);
    }
    else
    {
        printf("\n\tEnter ten digit Phone Number only!");
    }
    main();
}
void viewContact()
{
    System("cls");
    char rfname[10];
    char rlname[20];
    char rphone_number[20];
    FILE*fp;
    fp=fopen("contact.txt","r");
    fgets(rfname,9,fp);
    fgets(rfname,9,fp);
    fgets(rphone_number,11,fp);
    printf("\n\t--------------List Contact------------");
    printf ("\n\tFirst Name:%s",rfname);
    printf("\n\tLast Name:%s",rlname);
    printf("\n\tPhone Number:%s",rphone_number);
    main();
}
void help()
 {
     printf("\n\tThis is Contact Management System");
     main();
 }

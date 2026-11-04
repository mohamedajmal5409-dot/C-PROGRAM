#include <stdio.h>
struct student {
    int roll;
    char name[30];
    char dept[20];
    int marks;
};
int main()
{
    struct student s[10];
    int i;
    for(i=0;i<10;i++)
{
    printf("enter student details:");
    
    printf("roll number:");
    scanf("%d",&s[i].roll);
    printf("name:");
    scanf("%s",s[i].name);
    printf("dept:");
    scanf("%s,s[i].dept");
    printf("marks:");
    scanf("%d",&s[i].marks);
}
printf("\nstudent records\n");
for (i=0;i,10;i++)
{
    printf("roll number:%d",s[i].roll);
    printf("name:%s",s[i].name);
    printf("dept:%s",s[i].dept);
    printf("marks:%d",s[i].marks);
}
return 0;
}

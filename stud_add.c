#include"student.h"
void stud_add(SLL **ptr)
{
        SLL *new;
        static int autorollno=1;
        new=malloc(sizeof(SLL));
        printf("Enter the Name and Percentage\n");
        scanf("%s%f",new->name,&new->percentage);
        new->rollno=autorollno++;
        new->next=*ptr;
        *ptr=new;
}
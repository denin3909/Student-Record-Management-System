#include"student.h"

void stud_save(SLL *ptr)
{
        if(ptr==0)
        {
                printf("No student records found\n");
                return ;
        }
        FILE *fp;
        fp=fopen("data.txt","w");
        while(ptr)
        {
                fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
                ptr=ptr->next;
        }
        fclose(fp);
}

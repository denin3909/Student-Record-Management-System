#include"student.h"

void delete_all(SLL **ptr)
{
        if(*ptr==0)
        {
                printf("No student records found\n");
                return ;
        }
        SLL *del;
        del=*ptr;
        while(del)
        {
                *ptr=del->next;
                free(del);
                sleep(1);
                del=*ptr;
        }
}

void delete_record(SLL **ptr)
{
    if(*ptr==0)
    {
        printf("no student records available\n");
        return ;
    }
    char op;
    SLL *del=*ptr,*prev;
    printf("enter your choice\n");
    printf("N/n : Delete using name\nR/r : Delete using rollno\n");
    scanf(" %c",&op);
        if(op>='a' && op<='z')
        op=op-32;
    switch(op)
    {
        case 'N':; char name[20];
        printf("enter name to delete\n");
        scanf("%s",name);
        while(del)
        {
            if(strcmp(del->name,name)==0)
            {
                if(*ptr==del)
                *ptr=del->next;
                else
                prev->next=del->next;
                free(del);
                return;
            }
            prev=del;
            del=del->next;
            
        }
        printf("name not found\n");break;
        
        case 'R':;
        int rollno;
        printf("enter rollno to delete\n");
        scanf("%d",&rollno);
        while(del)
        {
            if(del->rollno==rollno)
            {
                if(*ptr==del)
                *ptr=del->next;
                else
                prev->next=del->next;
                free(del);
                return;
            }
            prev=del;
            del=del->next;
            
        }
        printf("rollno not found\n");break;
        
    }   

}

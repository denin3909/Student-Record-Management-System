#include"student.h"

int countNode(SLL *ptr)
{
        int c=0;
        while(ptr)
        {
                c++;
                ptr=ptr->next;
        }
        return c;
}


void modify_record(SLL *ptr)
{
    if(ptr==0)
    {
        printf("No student records available\n");
        return ;
    }
    char op;
    printf("Enter which record to search for modification\n");
    printf("\n");
    printf("R/r : Search by roll number\nN/n : Search by name\nP/p : Search by percentage\n");
    scanf(" %c",&op);
    if(op>='a' && op<='z')
    op=op-32;
    switch(op)
    {
        case 'R':; int num;
        char new_name[20];
        float new_percentage;
        printf("Enter the rollno to search\n");
        scanf("%d",&num);
        while(ptr)
        {
            if(ptr->rollno==num)
            {
                printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
                printf("Enter the new name and new percentage\n");
                scanf("%s%f",new_name,&new_percentage);
                strcpy(ptr->name,new_name);
                ptr->percentage=new_percentage;
                break;
            }
            ptr=ptr->next;
        }
        printf("Rollno not found\n");
        
        case 'N':; int s_rollno,count=0;
        char s_name[20],new1_name[20];
        float new1_percentage;
        SLL *temp=ptr;
        
        printf("enter the name to search\n");
        scanf("%s",s_name);
        
        while(temp)
        {
            if(strcmp(temp->name,s_name)==0)
            {
                printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
                count++;
            }
            temp=temp->next;
        }
            if(count==0)
            {
                printf("Name not found\n");
                break;
            }
            if(count==1)
            {
                printf("enter the new name and new percentage to modify\n");
                scanf("%s%f",new1_name,&new1_percentage);
                temp=ptr;
                while(temp)
                {
                if(strcmp(temp->name,s_name)==0)
                {
                    strcpy(temp->name,new1_name);
                    temp->percentage=new1_percentage;
                }
                temp=temp->next;
                }
            }
            
            if(count>1)
            {
                printf("Multiple records found, Enter the rollno to modify\n");
                scanf("%d",&s_rollno);
                
                temp=ptr;
                while(temp)
                {
                    if(strcmp(temp->name,s_name)==0 &&temp->rollno==s_rollno)
                    {
                        printf("enter the new name and new percentage\n");
                        scanf("%s%f",new1_name,&new1_percentage);
                        strcpy(temp->name,new1_name);
                        temp->percentage=new1_percentage;
                    }
                    temp=temp->next;
                }
            }
            
        case'P':;int s1_rollno,count1=0;
        char new2_name[20];
        float new2_percentage,s_percentage;
        SLL *temp1=ptr;
        
        printf("enter the percentage to search\n");
        scanf("%f",&s_percentage);
        
        while(temp1)
        {
            if(temp1->percentage==s_percentage)
            {
                printf("%d %s %f\n",temp1->rollno,temp1->name,temp1->percentage);
                count1++;
            }
            temp1=temp1->next;
        }
            if(count1==0)
            {
                printf("Name not found\n");
                break;
            }
            if(count1==1)
            {
                printf("enter the new name and new percentage to modify\n");
                scanf("%s%f",new2_name,&new2_percentage);
                temp1=ptr;
                while(temp1)
                {
                if(temp1->percentage==s_percentage)
                {
                    strcpy(temp1->name,new2_name);
                    temp1->percentage=new2_percentage;
                }
                temp1=temp1->next;
                }
            }
            
            if(count1>1)
            {
                printf("Multiple records found, Enter the rollno to modify\n");
                scanf("%d",&s1_rollno);
                
                temp1=ptr;
                while(temp1)
                {
                    if(temp1->percentage==s_percentage &&temp1->rollno==s1_rollno)
                    {
                        printf("enter the new name and new percentage\n");
                        scanf("%s%f",new2_name,&new2_percentage);
                        strcpy(temp1->name,new2_name);
                        temp1->percentage=new2_percentage;
                    }
                    temp1=temp1->next;
                }
            }
    }
    
}


void sort_list(SLL *ptr)
{
        if(ptr==0)
        {
                printf("No student records found\n");
                return ;
        }
        SLL *p1=ptr,*p2,t;
        int c;
        c=countNode(ptr);
        int i,j;
        char op;
        printf("Enter your choice\n");
        printf("N/n: Sort with name\nP/p: Sort with percentage\n");
        scanf(" %c",&op);
        if(op>='a' && op<='z')
        op=op-32;
        switch(op)
        {
            case 'N': for(i=0;i<c-1;i++)
        {
                p2=p1->next;
                for(j=0;j<c-1-i;j++)
                {
                        if(strcmp(p1->name,p2->name)>0)
                        {
                                t.rollno=p1->rollno;
                                strcpy(t.name,p1->name);
                                t.percentage=p1->percentage;
                                
                                p1->rollno=p2->rollno;
                                strcpy(p1->name,p2->name);
                                p1->percentage=p2->percentage;

                                p2->rollno=t.rollno;
                                strcpy(p2->name,t.name);
                                p2->percentage=t.percentage;
                        }
                        p2=p2->next;
                }
                p1=p1->next;
        }break;
        
        case 'P':for(i=0;i<c-1;i++)
        {
                p2=p1->next;
                for(j=0;j<c-1-i;j++)
                {
                        if(p1->percentage>p2->percentage)
                        {
                                t.rollno=p1->rollno;
                                strcpy(t.name,p1->name);
                                t.percentage=p1->percentage;
                                
                                p1->rollno=p2->rollno;
                                strcpy(p1->name,p2->name);
                                p1->percentage=p2->percentage;

                                p2->rollno=t.rollno;
                                strcpy(p2->name,t.name);
                                p2->percentage=t.percentage;
                        }
                        p2=p2->next;
                }
                p1=p1->next;
        }break;
        }
        
}


void reverse_list(SLL **ptr)
{
    if(*ptr==0)
    {
        printf("no student records available\n");
        return ;
    }
    int i,c=countNode(*ptr);
    SLL **a=malloc(sizeof(SLL *)*c);
    if(c>1)
    {
        SLL *t=*ptr;
        for(i=0;i<c;i++)
        {
            a[i]=t;
            t=t->next;
        }
        for(i=c-1;i>0;i--)
        a[i]->next=a[i-1];
        
        a[0]->next=0;
        *ptr=a[c-1];
    }
}
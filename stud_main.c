#include"student.h"
int main()
{
        SLL *headptr=0;
        char op;
        int c;
        while(1)
        {
        printf("Enter your choice\n");
        printf("\n");
        printf("A/a : Add new record\nS/s : Show the list\nD/d : Delete a record\nV/v : Save records\nL/l : Delete all records\nT/t : Sort the list\nR/r : Reverse the list\nM/m : Modify a record\nE/e : Exit\n");
        
        scanf(" %c",&op);
        if(op>='a'&& op<='z')
        op=op-32;
        switch(op)
        {
                case 'A': stud_add(&headptr);break;
                case 'S': stud_show(headptr);break;
                case 'C': c=countNode(headptr);
                          printf("count=%d\n",c);break;
                case 'V': stud_save(headptr);break;
                case 'L': delete_all(&headptr);break;
                case 'T': sort_list(headptr);break;
                case 'D': delete_record(&headptr);break;
                case 'R': reverse_list(&headptr);break;
                case 'M': modify_record(headptr);break;
                case 'E': printf("Enter the option\n");
                          printf("S/s : Save and exit\nE/e : Exit without saving\n");
                          scanf(" %c",&op);
                          if(op>='a'&& op<='z')
                          op=op-32;
                          if(op=='S')
                          {
                            stud_save(headptr);
                            exit(0);
                          }
                          else if(op=='E')
                          exit(0);
                          else
                            printf("Invalid option\n");break;
                            
                default: printf("Invalid option\n");



        }
        }

}

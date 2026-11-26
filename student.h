#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
typedef struct stu
{
        int rollno;
        char name[20];
        float percentage;
        struct stu *next;
}SLL;
void stud_add(SLL **);
void stud_show(SLL *);
int countNode(SLL *);
void stud_save(SLL *);
void delete_all(SLL**);
void sort_list(SLL *);
void delete_record(SLL **);
void reverse_list(SLL **);
void modify_record(SLL*);
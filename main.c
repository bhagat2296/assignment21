#include <stdio.h>
#include <stdlib.h>

/*struct employee
{
    int id,salary;
    char name[25];
};

int main()                                                  //Question 1
{

    return 0;
}*/



/*struct employee
{
    int id;
    char name[25];
    int salary;
};

int main()                                                  //Question 2
{
 struct employee b;
 printf("enter employee id\n");
 scanf("%d",&b.id);
 printf("enter employee name\n");
 fflush(stdin);
 gets(b.name);
 printf("enter salary of the employee\n");
 scanf("%d",&b.salary);
    return 0;
}*/

/*struct employee
{
    int id;
    char name[25];
    int salary;
};

int main()                                                  //Question 3
{
 struct employee b;
 printf("enter employee id\n");
 scanf("%d",&b.id);
 printf("enter employee name\n");
 fflush(stdin);
 gets(b.name);
 printf("enter salary of the employee\n");
 scanf("%d",&b.salary);
 display(b);
    return 0;
}

void display(struct employee b)
{
    printf("employee id is:%d\n",b.id);
    printf("employee name is: ");
    puts(b.name);
    printf("employee salary is:%d",b.salary);
}*/





/*struct employee
{
    int id;
    char name[25];
    int salary;
};

int main()                                                  //Question 4
{
 struct employee b[10];
 printf("enter 10 employee data\n");
 for(int i=0;i<3;i++)
 {
 printf("\n");
 printf("enter employee id:");
 scanf("%d",&b[i].id);
 printf("enter employee name:");
 fflush(stdin);
 gets(b[i].name);
 printf("enter salary of the employee:");
 scanf("%d",&b[i].salary);
 }
 highest_salary(b);
    return 0;
}

void highest_salary(struct employee b[])
{
   struct employee temp;
    for(int i=0;i<3;i++)
    {
        if(b[0].salary<b[i+1].salary)
        {
            temp=b[i+1];
            b[i+1]=b[0];
            b[0]=temp;
        }
    }
    printf("highest paid employee id is:%d\n name is=%s\n salary is:%d\n",b[0].id,b[0].name,b[0].salary);
}*/






/*struct employee
{
    int id;
    char name[25];
    int salary;
};

int main()                                                  //Question 5
{
 struct employee b[10];
 printf("enter 10 employee data\n");
 for(int i=0;i<10;i++)
 {
 printf("\n");
 printf("enter employee id:");
 scanf("%d",&b[i].id);
 printf("enter employee name:");
 fflush(stdin);
 gets(b[i].name);
 printf("enter salary of the employee:");
 scanf("%d",&b[i].salary);
 }
 sort_salary(b);
    return 0;
}

void sort_salary(struct employee b[])
{
    struct employee temp;

    for(int i=0;i<10;i++)
        for(int j=i+1;j<10;j++)
    {
        if(b[i].salary>b[j].salary)
        {
          temp=b[i];
          b[i]=b[j];
          b[j]=temp;

        }
    }
    for(int i=0;i<10;i++)
    printf("id=%d\n name=%s\n salary=%d\n",b[i].id,b[i].name,b[i].salary);
}*/



/*struct employee
{
    int id;
    char name[25];
    int salary;
};

int main()                                                  //Question 6
{
 struct employee b[10];
 printf("enter 10 employee data\n");
 for(int i=0;i<10;i++)
 {
 printf("\n");
 printf("enter employee id:");
 scanf("%d",&b[i].id);
 printf("enter employee name:");
 fflush(stdin);
 gets(b[i].name);
 printf("enter salary of the employee:");
 scanf("%d",&b[i].salary);
 }
 sort_name(b);
    return 0;

}

void sort_name(struct employee b[])
{
    struct employee temp;
    for(int i=0;i<10;i++)
        for(int j=i+1;j<10;j++)
    {
        if(strcmp(b[i].name,b[j].name)>0)
        {
          temp=b[i];
          b[i]=b[j];
          b[j]=temp;

        }
    }
    for(int i=0;i<10;i++)
    printf("id=%d\n name=%s\n salary=%d\n",b[i].id,b[i].name,b[i].salary);
}*/


/*struct time                                                   //Question 7
{
    int hour,minute,second;

};

int main()
{
    struct time t,t1;
    printf("enter start time in format:-HH:MM:SS\n");
    scanf("%d%d%d",&t.hour,&t.minute,&t.second);

    printf("enter end time in format:-HH:MM:SS\n");
    scanf("%d%d%d",&t1.hour,&t1.minute,&t1.second);

    time_difference(t,t1);

}
void time_difference(struct time t,struct time t1)
{
    struct time temp;
    temp.hour=t1.hour-t.hour;
    if(t1.minute>t.minute)
    temp.minute=t1.minute-t.minute;
    else
    {
    temp.minute=(t1.minute+60)-t.minute;
    temp.hour--;
    }


    if(t1.second>t.second)
    temp.second=t1.second-t.second;
    else
    {
    temp.second=(t1.second+60)-t.second;
    temp.minute--;
    }

    printf("Time difference is hh:mm:ss format:-  %d:%d:%d\n",temp.hour,temp.minute,temp.second);
}*/



/*struct student                                          //Question 8
{
    int id;
    char name[20];
    int roll;
};

int main()
{
    struct student s[10];
    printf("enter student details\n");

    for(int i=0;i<3;i++)
    {
        printf("enter student id:");
        scanf("%d",&s[i].id);
        printf("enter student name:");
        fflush(stdin);
        gets(s[i].name);
        printf("enter student roll number:");
        scanf("%d",&s[i].roll);
        printf("\n");
    }

    display_student(s);
}

void display_student(struct student s[])
{
    printf("student details:\n\n");
    for(int i=0;i<3;i++)
    {
        printf("student id is:%d\n student name is:%s\n student roll numbr is:%d\n",s[i].id,s[i].name,s[i].roll);
        printf("\n");
    }
}*/



/*struct student                                          //Question 9
{
    int id;
    char name[20];
    int roll;
};

int main()
{
    int n;
    printf("enter number that you want to enter \n");
    scanf("%d",&n);
    struct student s[n];
    printf("enter student details\n");

    for(int i=0;i<n;i++)
    {
        printf("enter student id:");
        scanf("%d",&s[i].id);
        printf("enter student name:");
        fflush(stdin);
        gets(s[i].name);
        printf("enter student roll number:");
        scanf("%d",&s[i].roll);
        printf("\n");
    }

    display_student(s,n);
}

void display_student(struct student s[], int n)
{
    printf("%d students details:\n\n",n);
    for(int i=0;i<n;i++)
    {
        printf("student id is:%d\n student name is:%s\n student roll numbr is:%d\n",s[i].id,s[i].name,s[i].roll);
        printf("\n");
    }
}*/



/*struct marks                                                      //Question 10
{
    int roll_no;
    char name[20];
    int chem_marks;
    int maths_marks;
    int phy_marks;
    int tot_marks;
    int per_marks;
};

int main()
{
    int n=1;
    struct marks s[5];
    printf("enter student marks detail\n");
    for(int i=0;i<5;i++)
    {
        printf("enter %d student roll number:",n);
        scanf("%d",&s[i].roll_no);
        printf("enter %d student name:",n);
        fflush(stdin);
        gets(s[i].name);
        printf("enter %d student's chemistry marks:",n);
        scanf("%d",&s[i].chem_marks);
        printf("enter %d student's maths marks:",n);
        scanf("%d",&s[i].maths_marks);
        printf("enter %d student's physics marks:",n);
        scanf("%d",&s[i].phy_marks);
        n++;
        printf("\n\n");
    }
    percentage(s);
}

void percentage(struct marks s[])
{
int max_marks=300,n=1;

    for(int i=0;i<5;i++)
    {
        s[i].tot_marks=s[i].chem_marks+s[i].maths_marks+s[i].phy_marks;
        s[i].per_marks=(s[i].tot_marks*100)/max_marks;
    }

    for(int i=0;i<5;i++)
    {printf("average of %d student is=%d\n",n,s[i].per_marks);n++;}
}*/

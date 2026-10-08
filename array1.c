#include<stdio.h>

int main()
{
int marks[20]={67,68,98,76,45,34,98,78,54,73,92,57,64,83,55,67,66,81,77,100};

for(int i=1;i<=20;i++)
	printf("STUDENT ROLL NO %d MARKS OUT OF 100 : %d\n",i,marks[i]);

/* marks[0]=1
marks[1]=2
marks[2]=3
marks[3]=4
marks[4]=5
printf("MARKS OF STUDENT 1 %d\n",marks[0]);
printf("MARKS OF STUDENT 2 %d\n",marks[1]);
printf("MARKS OF STUDENT 3 %d\n",marks[2]);
printf("MARKS OF STUDENT 4 %d\n",marks[3]);
printf("MARKS OF STUDENT 5 %d\n",marks[4]);*/
return 0;
}
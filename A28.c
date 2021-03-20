//Describe the structure student having roll no and marks of three subjects of five students.
//Write a program to print all the information and total marks and percentage of each student.
#include<stdio.h>
struct  student{
	int rollnum;
	int maths;
	int eng;
	int phy;
	float percentage;
};
int main()
{
	struct student s[5];
	int i,j;
	for(i=0;i<5;i++)
	{
		printf("\n enter the rollnum , subject 1 marks , subject 2 marks , subject 3 marks:");
		scanf("%d %d %d %d",&s[i].rollnum,&s[i].maths,&s[i].eng,&s[i].phy);
		
	}
	for(i=0;i<5;i++)
	{
		printf("\nthe rollnum: %d, subject 1 marks: %d , subject 2 marks: %d , subject 3 mark: %d ",s[i].rollnum,s[i].maths,s[i].eng,s[i].phy);
	}
	for(i=0;i<5;i++)
	{
		s[i].percentage = (s[i].maths + s[i].eng + s[i].phy) / 3;
		printf("\n enroll %d : percentage=%f",s[i].rollnum,s[i].percentage);
	}
}
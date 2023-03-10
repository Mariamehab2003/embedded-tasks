#include <stdio.h>
#include <stdlib.h>

typedef struct subjects
{
    int ID;
    int Programming;
    int Data_Structures;
    int Discrete_Math;
    int Algorithms;
}subjects;

int main()
{
    int id,c = 1;
    subjects student[10]={
    {10001,99,71,88,75},
    {10002,60,60,78,100},
    {10003,80,70,84,78},
    {10004,89,50,37,79},
    {10005,56,48,66,60},
    {10006,87,88,90,96},
    {10007,59,100,81,77},
    {10008,63,73,19,55},
    {10009,93,98,88,42},
    {10010,83,77,62,94}};
    while(c){
    printf("Enter the student ID\n");
    scanf("%d",&id);
    for(int i=0; i<10; i++)
    {
        if(id == student[i].ID)
        {
            printf("Programming : %d\n",student[i].Programming);
            printf("Data Structures : %d\n",student[i].Data_Structures);
            printf("Discrete Maths : %d\n",student[i].Discrete_Math);
            printf("Algorithms : %d",student[i].Algorithms);
            return 0;

        }




    }
     printf("wrong ID Try Again\n");
    }
    return 0;
    }

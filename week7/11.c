#include <stdio.h>
#include<string.h>
#include <stdlib.h>
struct employees{
float salary;
 float bonus;
float deduction;

};
struct employees* enter(){
    struct employees *ptr=(struct employees*)malloc(sizeof(struct employees));
printf("enter the salary: \n");
scanf("%f",&ptr->salary);
printf("enter bonus:\n");
scanf("%f",&ptr->bonus);
printf("enter the deducation:\n");
scanf("%f",&ptr->deduction);
return ptr;
}
void print(struct employees *c,char *name ){
printf("the total of %s =%f\n",name,(c->salary)+(c->bonus)-(c->deduction));
}
int main()
{
    struct employees *mohsen,*maged,*mariam;
    printf("mohsen\n");
   mohsen=enter();
   printf("maged\n");
   maged=enter();
   printf("mariam\n");
   mariam=enter();
   print(mohsen,"mohsen");
   printf("______________________________________________________\n");
   print(maged,"maged");
   printf("______________________________________________________\n");
   print(mariam,"mariam");
    return 0;
}

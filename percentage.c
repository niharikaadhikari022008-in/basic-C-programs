#include<stdio.h>

int main() {

int phymarks , chem_marks , maths_marks ;
int total ;
float percentage ;

 printf("enter physics  marks\n ");
 scanf("%d",&phymarks);

 printf("enter chemistry marks \n");
 scanf("%d",&chem_marks);

 printf("enter maths marks\n");
 scanf("%d",&maths_marks);

total = phymarks+chem_marks+maths_marks;
printf("total marks : %d\n",total);

 percentage = (total/300.0)*100;
 printf("your percentage is : %2f\n",percentage);


 if (percentage>0&&percentage<100)
 {
       if (percentage>=90)
       {
       printf(" A+\n");
}
       if (percentage>80&&percentage<90)
       {
       printf("A\n");
       }
       if (percentage>70&&percentage<80)
       {
       printf("B+\n");
       }
       if (percentage>60&&percentage<70)
       {
       printf("B\n");
       }
       if (percentage>50&&percentage<60)
       {
       printf("C+\n");

       }
       if (percentage>40&&percentage<50)
       {
       printf("C\n");
       }
       if (percentage>33){
       printf("YOU ARE PASSED");
       }
       if(percentage<33)
       {
       printf("YOU ARE FAILED");
       }
       }
       return 0;
       }

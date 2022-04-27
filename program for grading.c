//grading system 
/* Grading system -if -else ladder
1.ask the user to enter marks for three subjects
2.calculate the everage marks
3.calculate the grade 70-100:A, 60-69:B, 50-59:C, 40-49:D, 30-39:A, 0-29:F
*/
#include<stdio.h>
int main()
{   
int phyc, chem, bio, average,grade;  
 printf("Enter score (1-100) for phyc,chem ,bio: ");   
scanf("%d,%d,%d",&phyc,&chem,&bio);  
 average=(phyc+chem+bio)/3;  
 // check everage is valid or not  
 // average is valid if it belongs to 0-100  
 if(average<0 || average>100) 
{    
 printf("Invalid Score");    
 // stop execution    
 return 0;  
 }  
//find grade for average   
// for everage >= 70  
 if(average>=70 && average<=100)  
   printf("gradeA");   
// for everage>=60 and <69   
else if(average>=60)   
 printf("gradeB");   
// for everage>=50 and <59  
 else if(average>=50) 
printf("gradeC");  
 // for everage>=40 and <49  
 else if(average>=40)     
printf("gradeD");   
// for average>=30 and <39  
 else if(average>=50)    
 printf("gradeE");   
// for average<30   
else printf("fail");   
return 0;
}
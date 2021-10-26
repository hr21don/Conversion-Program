#include <stdio.h>
#define DAYSINWEEK 7 
int main() {

//Menu 
int choice; 
printf("/n0: Welcome to My Conversion program");
printf("/n1: Metres to Centimetres");
printf("/n2: Centimetres to metres");
printf("/n3: weeks to days");
printf("/n4: days to weeks");
printf("/n5: miles to kilometres");
printf("/n6: kilometres to miles");
printf("/n Enter your choice (1,2,3,4,5,6): ");
scanf("%d" , &choice);
if (choice ==1) //Starting Condition
  {
  float metres, cms;                 // declare variables   
  scanf("%f", &metres);              // input   
  cms = metres * 100;                // conversion   
  printf("%fm = %fcms", metres, cms); // output  
  return 0;
  }
else if (choice ==2)
  {
  float metres, cms;                 // declare variables   
  scanf("%f", &cms);              // input   
  metres = cms / 100;                // conversion   
  printf("%fm = %fcms", metres, cms); // output  
  return 0;
  }
  else if (choice ==3)
  {
  float days, weeks;                 // declare variables   
  scanf("%f", &days);              // input   
  printf("%fweeks = %fdays",days, weeks); // output  
  return 0; 
  }
  else if (choice ==4)
  {
  int days , week , ndays;
    printf("Enter number of days \n");
    scanf("%d", &ndays);             
    week = (ndays % 365) / DAYSINWEEK ;
    days = (ndays % 365) % DAYSINWEEK ;
    printf ("%d is equivalent to %d weeks and %d days",ndays,  week, days);
  }
  else if (choice ==5)
  {
  float miles, kms;                 // declare variables   
  scanf("%f", &miles);              // input   
  kms = miles * 1.60;                // conversion   
  printf("%fmiles = %fkms", miles, kms); // output  
  return 0;
  }
  else if (choice ==6)
  {
  float miles, kms;                 // declare variables   
  scanf("%f", &kms);              // input   
  miles  = kms * 0.62;                // conversion   
  printf("%fmiles = %fkms", miles, kms); // output  
  return 0;  
  }
else 
  {
  printf("\n Invalid choice!");
  }
  return 0; // Program terminated
}
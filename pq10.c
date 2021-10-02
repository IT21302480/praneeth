#include<stdio.h> 

float getDiscountPrice(int noOfGuests, float chargePerGuest); 
float getAmount(int noOfGuests, float chargePerGuest, float discount); 

int main() 
{
  int guests;
  float result,result1; 
  
       printf("Enter no of guests:"); 
       scanf("%d",&guests);
       
       result = getDiscountPrice(guests,1200);
       result1 = getAmount (guests,1200,0.1);
       
       if(guests>200)
       {
       	printf("Price is %.2f",result);
	   }
	   if(guests<=200)
	   {
       	printf("Price is %.2f",result1);
	   }
	   
  return 0;
}

float getDiscountPrice(int noOfGuests, float chargePerGuest)
{
   	float charge;
	
	charge=noOfGuests*1200; 
   	return charge;	
}
float getAmount(int noOfGuests, float chargePerGuest, float discount)
{
	float charge1;
	
	charge1=(noOfGuests*1200)-(noOfGuests*1200*0.1);
	return charge1;
}

#include <stdio.h>   // Here we use Snippets "start" 
#include <conio.h>



int main(){
     printf("XXX \n");
     int *a;
     int b =98;
     a = &b;
     printf("Value of 'B' %d \n",b);
     printf("Value of 'B' %d \n",*a); // Doubt {Clear Bcz * operator Store the value of Addresss}
     printf("Address of B %u \n",&b);
     printf("Address of B %u \n",a);
     printf("Address of A %u \n",&a);
     printf("Value of A %d \n",*a);  //Doubt (Clear)
       printf("Value of A %d \n",*(&a));   //Doubt  (Clear)   
     //printf("Value of 'A': %d",*a);



     


}   

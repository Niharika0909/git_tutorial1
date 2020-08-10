#include <stdio.h>   // Here we use Snippets "start" 
#include <conio.h>
#include <string.h>



int main(){
     printf("XXX \n");
     /*int *a;
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

     */
      /*
     int a[4];
     int i;
     int *b;
     b = &a[0];
    for(i=0;i<4;i++){
      printf("Enter the value of Array %d \n",i+1);
      scanf("%d",b);
      b++;
    }
    for(i=0;i<4;i++){
      printf("Elemrnt : %d is%d \n",i+1,a[i]);
    }
     
    */

    /*
     char v[] = {'a','d','d','e','\0'};
     char c[] = "pranav \n";
     printf("%s",c);   //%s is a format specifier  

    char name[50];
    printf("Enter your fuckink name: \n");
    //scanf("%s \n",&name);
    //printf("%s",name);

    gets(name);
    printf("\n");
    puts(name);
    */

    char *h = "Pranav";
    puts(h);
    int len = strlen(h);
    printf("Length %d \n",len);

                                                   //when we use char *ptr = "pranav"  ---- they can also reinitialize
                                                  // when we use char ptr[] = "pranav"  ---- they can't initialize

    


    // check strcmp()

    


    return 0;


     


}   

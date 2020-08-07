#include <stdio.h> 
#include <conio.h>   
int  func(int t,int e);

int func( int t,int e){
    int sum =  t + e;
    printf("under the function \n");
    return sum;
}


int main()
{
    // Displays the string inside quotations
    printf("Hello Pranav!! \n");
    /*scanf("%d",&o);*/ // & is use to address o  and %d is a libary in c language
    int testInteger = 5;
    printf("Number = %d \n", testInteger);
    int i, c;
    printf("Enter the value i \n");
    scanf("%d", &i);
    printf("Value: %d \n", i);
    switch (i)
    {
    case 1:
        printf("XXX");
        break;

    default:
        printf("jbbbbbbbj \n");
        break;
    }


    printf("Enter the value c \n");
    scanf("%d", &c);
    if (c == i)
    {
        printf("This is under if statement \n");

    }
    else
    {
        printf("This is under else statement \n");
    }
    float ip ;
    ip=87;
    printf("%f \n",ip);
    printf("\n \n \n");
    int iu;
    for (iu = 0; iu < 5; iu++)
    {
        printf("%d \n",iu);
    }
    //---------------------------------------------------------------------------------------------------
    
     int er = func(54,10);
     printf("%d \n",er);



    return 0;
}



#include <stdio.h>
void main()
 {
    printf("----------ABDULLAH SIDDIQUI ----------\n");
    printf("----------2300320130004----------\n");
    printf("------PROGRAM FOR LINEAR SEARCH-----\n");
    int ar[100];
    int i,j,num,flag=0, ser;
    printf("Enter the no.of elements of the array =");
    scanf("%d",&num);
    printf(" ENTER THE ELEMENTS OF THE ARRAY\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf(" ENTERED ARRAY IS");
    for(i=0;i<num;i++)
    {
        printf("%d ",ar[i]);
    }
    printf(" ENTER THE ELEMENT TO SEARCH : ");
    scanf("%d",&ser);
    for(i=0;i<num;i++)
    {
        if(ar[i]==ser)
        {
            printf("ELEMENT FOUND AT %d POSITION .",(i+1));
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("ELEMENT NOT FOUND ! ");
    }

    printf("helo world");
 }
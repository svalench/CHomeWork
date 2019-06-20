#include <stdio.h>
#include <stdlib.h>

int main()
{
    const N=23000;
    int num,clavisha;
    int PrCh,n=100,arr1[N],arr2[N],arr3[N],i1,i2=2,i3;
    int clav2,array[N],x2,i21;
    printf("Control work 2. \n");
    printf(" TASK 1 - Work With 3 array \n TASK 2 - simetric array \n TASK 3 - sort arrays \n TASK 4 - work with math operation \n\n\n");
    while(clavisha!=27)
        {
    printf("\n Number of tasks:");
    scanf("%d",&num);
    printf("Task %d!!!!\n-----------------\n ",num);
    switch (num)
    {
        case 1:
            arr2[0]=2;
            arr2[1]=3;
            for(i1=4;i2<=n;i1++)
            {
                if(i1%2!=0 && i1%3!=0 && i1%5!=0){
                    arr2[i2]=i1;
                    i2++;
                }
            }
            printf("\nARRAY1  ARRAY2   ARRAY3    \n");
            for(i1=0;i1<=n;i1++)
            {
                arr1[i1]=i1;
                arr3[i1]=arr2[i1]-arr1[i1];
                printf("\  %d       %d         %d    \n",arr1[i1],arr2[i1],arr3[i1]);
            }

        break;
        case 2:
            x2=0;
            clav2=0;
            while(clav2!=27)
            {
                    printf("\n Inter number (intager) array[%d] = ",x2);
                    scanf("%d",&array[x2]);
                    printf("\nFor EXIT into add array press ESC! For repeat any key!\n");
                    clav2 = getch();
                    x2++;
            }
            printf("\n\n col - %d\n\n",x2);
            if((x2-1)%2==0)
            {
                for(i21=1;i21<(x2-1)/2;i21++)
                {
                    if(array[(((x2-1)/2)-i21)]!=array[(((x2-1)/2)+i21)])
                    {
                            printf("\n\narray Not simetric!!!\n\n");
                            break;
                    }
                }
                if(x2/2==i21)
                {
                    printf("\n\nArray is simetric!!!\n\n");
                }
                else
                {
                    printf("\n\narray Not simetric!!! FOR %d\n\n",i21);
                }
            }
            else
            {
                    printf("\n\n\n\n\narray Not simetric DDD!!!\n\n\n\n");
            }
        break;
        default:
        printf("Not found task!!!");
    }
    printf("\nFor EXIT press ESC! For repeat any key!");
    clavisha = getch();
        }

    return 0;
}

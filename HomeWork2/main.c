#include <stdio.h>
#include <stdlib.h>

int main()
{
    const N=23000;
    int num,clavisha;
    int PrCh,n=100,arr1[N],arr2[N],arr3[N],i1,i2=3,i3;
    int clav2,array[N],x2,i21,clav3=0;
    int arr31[N],i31,x3,podmena,mark=0;
    int arr41[N],i41,x4,max4=0,min4=0,clav4,blizh=0,i42=0,arrB[N];
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
            arr2[2]=5;
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
        case 3:
            mark=0;
            x3=1;
            clav3=0;
            while(clav3!=27)
            {
                    printf("\n Inter number (intager) arr31[%d] = ",x3);
                    scanf("%d",&arr31[x3]);
                    printf("\nFor EXIT into add array press ESC! For repeat any key!\n");
                    clav3 = getch();
                    x3++;
            }
            x3=x3-1;
            printf("\n\n col elementov masiva - %d\n\n",x3);
            for(i31=1;i31<=x3;i31++)
            {
                    if((i31)%2==0)
                    {
                        if(arr31[i31]>arr31[i31+2] && (i31+2)<=x3)
                        {
                            podmena=arr31[i31];
                            arr31[i31]=arr31[i31+2];
                            arr31[i31+2]=podmena;
                            i31=0;
                        }
                    }
                    else
                    {
                        if(arr31[i31]<arr31[i31+2] && (i31+2)<=x3)
                        {
                            podmena=arr31[i31];
                            arr31[i31]=arr31[i31+2];
                            arr31[i31+2]=podmena;
                            i31=0;
                        }
                    }

                }
             printf("\====================================================================================================================\n ");
            printf("\nSortitoravany Massiv\n ");
            for(i31=1;i31<=x3;i31++)
            {
                printf("\narr[%d]=%d\n",i31,arr31[i31]);
            }
            printf("\====================================================================================================================\n ");

        break;
        case 4:
            x4=1;
            clav4=0;
            min4=0;
            max4=0;
            while(clav4!=27)
            {
                    printf("\n Inter number (intager) arr41[%d] = ",x4);
                    scanf("%d",&arr41[x4]);
                    printf("\nFor EXIT into add array press ESC! For repeat any key!\n");
                    clav4 = getch();
                    x4++;
            }
            x4=x4-1;
            printf("\n\n col elementov masiva - %d\n\n",x4);

            for(i41=1;i41<=x4;i41++)
            {
                if((arr41[i41]>max4 ) || max4==0)
                {
                    max4=arr41[i41];
                }
                if((arr41[i41]<min4) || min4==0)
                {
                    min4=arr41[i41];
                }
            }
            printf("\nmax value - %d\n",max4);
            printf("\nmin value - %d\n",min4);
            double srAr= (min4+max4)/2;
            printf("\nsrednee arefmeticheskoe - %.2f\n",srAr);
            blizh=0;
            for(i41=1;i41<=x4;i41++)
            {
                if(abs(arr41[i41]-srAr)<blizh || blizh==0)
                {
                    blizh=abs(arr41[i41]-srAr);
                }
            }
            for(i41=1;i41<=x4;i41++)
            {
                if(arr41[i41]==blizh+srAr || arr41[i41]==abs(blizh-srAr))
                {
                    printf("\n\nBlizhayshee znachenie massiva k srednemu arifmeticheskomu - arr[%d]=%d\n",i41,arr41[i41]);
                }
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

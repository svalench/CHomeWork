#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    const N=36568;
    double Pi=3.14159265359;
    int clavisha;
    int num, x1;
    int x2,ostatok2,cycle2=0,cycle21=0,result2[N],arrCh[N],arrNCh[N],out2=0,out2Ch=0,out2NCh=0,max2=0,min2=0,sum2=0,c1=0,c2=0;
    int x3,num31,num32,bufNum,nok=0,nod,bufNok;
    int x4,i4,prost[N],sov[N],poli[N],merkerProst=0,countProst=0,sumSov,countSov=0,countPoli=0;
    int x5, fig,R, kat1,kat2,kat3;
    double P, S;
    char figName;
    double y1;
    printf("Control work 1. \n");
    printf(" TASK 1 - cycle equation(interval -10 10) \n TASK 2 - number support \n TASK 3 - NOD and NOK \n TASK 4 - program for interval 10 100 \n TASK 5 - geometric operation \n\n\n");
    while(clavisha!=27)
        {
    printf("\n Number of tasks:");
    scanf("%d",&num);
    printf("Task %d!!!!\n-----------------\n ",num);
    switch (num)
    {
    case 1:
           for (x1 = -10; x1 <= 10; x1++ )
        {

            if(x1>=-10 &&  x1<-3)
            {
                printf(" x =  %d \n",x1);
                y1=sqrt(abs(x1))/(cos(x1)-sin(x1));
                printf("\n result operation - y = %.2f \n \n",y1);
            }
            else if(x1>=-3 &&  x1<0)
            {
                printf(" x = %d\n",x1);
                y1=(powl(x1,2)*sin(x1))/sqrt(10-x1);
                printf("\n result operation - y = %.2f \n \n",y1);
            }
            else if(x1==0)
            {
                printf(" x =  %d\n",x1);
                y1=0;
                printf("\n result operation - y = %.2f \n \n",y1);
            }
            else if(x1>0 &&  x1<=3)
            {
                printf(" x =  %d\n",x1);
                y1=sqrt(pow(10,x1))/(10*x1);
                printf("\n result operation - y = %.2f \n \n",y1);
            }
            else if(x1>3 &&  x1<=10)
            {
                printf(" x =  %d\n",x1);
                y1=(cos(x1)-x1*cos(x1))/(sin(x1)+x1*sin(x1));
                printf("\n result operation - y = %.2f \n \n",y1);
            }
            else
            {
                printf("ERROR in logic \n");
            }

        }
    break;
    case 2:
        printf("Insert the number:");
        scanf("%d",&x2);
        while(x2)
        {
            ostatok2=x2%10;                         // определяем последнюю цифру в числе
            sum2+=ostatok2;                         // находим сумму всех чисел
            result2[cycle2]=ostatok2;               // получаем массив с цифрами числа справа налево по порядку
            if(ostatok2%2==0)                       // определяем четное или нет число
            {
                arrCh[cycle2]=ostatok2;             // создаем массив с четными цифрами числа
            }else
            {
                arrNCh[cycle2]=ostatok2;            // создаем массив с нечетными цифрами числа
            }
            if(!max2 || max2<ostatok2){            // находим максимальную цифру
                max2=ostatok2;
            }
            if(!min2 || min2>ostatok2)             // начодим минимальную цифру
            {
                min2=ostatok2;
            }
            x2=x2/10;                               // уменьшаем число на десяток
            cycle2++;                               //счетчик
        }
        cycle21=cycle2-1;                           // убераем одну лишнюю итерацию в результате выполнения while
        for(x2=0;x2<cycle2;x2++)                    // переворачиваем число
        {
            out2+=result2[x2]*powl(10,cycle21);     // собираем реверсированное число
            if(arrCh[x2]!=0)                        // проверка пустой ячейки в массиве
            {
              out2Ch+=arrCh[x2]*powl(10,c1);        // собираем число из четных цифр
              c1++;
            }
            if(arrNCh[x2]!=0)                       // проверка пустой ячейки в массиве
            {
            out2NCh+=arrNCh[x2]*powl(10,c2);        // собираем число из нечетных цифр
            c2++;
            }
            cycle21--;
        }
    printf("revers number - %d \n\n",out2);
    printf("Col  - %d \n\n",cycle2);
    printf("Summa num  - %d \n\n",sum2);
    printf("Max num  - %d \n\n",max2);
    printf("MIN num  - %d \n\n",min2);
    printf("Chislo is chetnyh num  - %d \n\n",out2Ch);
    printf("Chislo is nechetnyh num  - %d \n\n",out2NCh);

    break;
    case 3:
        printf("\nInsert the number 1(type INT ):");     // диалог для ввода первого числа
        scanf("%d",&num31);                            // захватываем число в переменную
        printf("\nInsert the number 2 (type INT ):");    //диалог для ввода 2го числа
        scanf("%d",&num32);                            // захватываем второе число в переменную
        if(num31>=num32)                                // определяем какое число больше и копируем ольшее в буфер
        {
            bufNum=num31;
        }
        else
        {
            bufNum=num32;
        }
        for(x3=1;x3<=bufNum;x3++)                       // перебираем большее число для нахождения НОД и НОК
        {
            if(bufNum%x3==0)
            {
                if(bufNum==num31)
                {
                    if(num32%x3==0)
                    {
                        nod=x3;
                    }
                }
                else
                {
                    if(num31%x3==0)
                    {
                        nod=x3;
                    }
                }
            }
            bufNok=bufNum*x3;
            if(bufNum==num31)
            {
                if(bufNok%num32==0 && nok==0)
                {
                    nok=bufNok;
                }
            }
            else
            {
                if(bufNok%num31==0 && nok==0)
                {
                    nok=bufNok;
                }
            }

        }

        printf("\n\nNOD = %d\n\n",nod);
        printf("\n\nNOK = %d\n\n",nok);
    break;
    case 4:
        for(x4=10;x4<=100;x4++)
        {
            for(i4=2;i4<x4;i4++)
            {
                if(x4%i4==0)
                {
                    merkerProst=1;
                }
            }
            if(merkerProst<1)
            {
                prost[countProst]=x4;
                countProst++;
            }
            for(i4=1;i4<x4;i4++)
            {
                if(x4%i4==0)
                {
                    sumSov+=i4;

                }
            }
            if(sumSov==x4)
            {
                sov[countSov]=x4;
                countSov++;
            }
            if(x4%10==x4/10)
            {
                poli[countPoli]=x4;
                countPoli++;
            }
            merkerProst=0;
            sumSov=0;
        }
        printf("prostye chisla na diapazone 10 100 :\n");
        for(i4=0;i4<countProst;i4++)
        {
            printf("%d ",prost[i4]);
        }
        printf("\n\nsovershenye chisla na diapazone 10 100 :\n");
        for(i4=0;i4<countSov;i4++)
        {
            printf("%d ",sov[i4]);
        }
        printf("\n\npolinomy na diapazone 10 100 :\n");
        for(i4=0;i4<countPoli;i4++)
        {
            printf("%d ",poli[i4]);
        }
        break;
    case 5:
        printf("Vvedite kakuy figurur raschitat' \n 1 - krug \n 2 - prrymougol'nik \n 3 - treugol'nik \n Vvedite ot 1 do 3:");
        scanf("%d",&fig);
        switch (fig)
        {
        case 1:
            figName=" krug ";
            printf("\n Vvedite radius kruga:");
            scanf("%d",&R);
            S=pow(R,2)*Pi;
            P=2*Pi*R;
        break;
        case 2:
            figName=" pryvougol'nik ";
            printf("\n Vvedite dlinu 1 storony:");
            scanf("%d",&kat1);
            printf("\n Vvedite dlinu 2 storony:");
            scanf("%d",&kat2);
            S=kat1*kat2;
            P=2*kat1+2*kat2;
        break;
        case 3:
            figName=" treugol'nik ";
            printf("\n Vvedite dlinu 1 kateta:");
            scanf("%d",&kat1);
            printf("\n Vvedite dlinu 2 kateta:");
            scanf("%d",&kat2);
            do
            {
                printf("\n Vvedite dlinu 3 kateta (ne dolzhna byt' bol'she %d):",kat1+kat2);
                scanf("%d",&kat3);
                if(kat3>(kat1+kat2))
                {
                    printf("\n\nVy vvely 3iy katet bjl'shii chem summa dvuh pervyh!\n ispravtes'! \n");
                }
            }
            while(kat3>(kat1+kat2));
            P=kat1+kat2+kat3;
            S=sqrt((P/2)*((P/2)-kat1)*((P/2)-kat2)*((P/2)-kat3));
        break;
        default:
            printf("Vy vveli nekorektnoe chislo!!!");
        }
        printf("\nPloshad' figury %s ravna %f \n",figName,S);
        printf("\nPerimetr  figury %s ravna %f \n",figName,P);

    break;
    default:
        printf("Not found task!!!");
    }
    printf("\nFor EXIT press ESC! For repeat any key!");
    clavisha = getch();
        }

    return 0;
}

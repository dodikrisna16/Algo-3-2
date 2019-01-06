#include<stdio.h>
#include<conio.h>

int main()
{
    int bil[7],i;
    printf("elemen 1?");scanf("%d",&bil[0]);
    bil[1]=5;
    bil[2]=bil[1]+20;
    bil[3]=bil[bil[1]];
    for(i=0;i<7;i++)printf("bil1[%d=%d dan alamatnya: %%x\n",i,bil[i]);
    getch();
    return(0);
}

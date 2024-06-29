#include<stdio.h>
int main()
{
    int ar[100];
    int size,i,j,temp;
    FILE *zn,*hq;

    zn=fopen("balsal.txt","r");
    fscanf(zn,"%d",&size);

    for(i=0;i<size;i++)
    {
        fscanf(zn,"%d",&ar[i]);
    }
    fclose(zn);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
            {
            if(ar[i]>ar[j])
        {
            temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
        }
        }
    }
    hq=fopen("heshbal.txt","w");
    for(i=0;i<size;i++)
    {
        fprintf(hq,"%d ",ar[i]);
    }
    return 0;
}
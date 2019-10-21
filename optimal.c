#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int nor,nof;
int ref[20];
int fr[20];
int optindex[10];
int optimal(int index)
{
    int pos;
    for(int i=0;i<nof;i++)
    {
        int notfound=1;
        for(int j=index+1;j<nor;j++)
        {
            if(fr[i]==ref[j])
            {
                notfound=0;
                optindex[i]=j;
                break;
            }
        }
        if(notfound==1)
        {
            return i;
        }
    }
    int max=optindex[0];
    for(int i=0;i<nof;i++)
    {
        if(max<optindex[i])
        {
            max=optindex[i];
            pos=i;
        }
    }
    return pos;
}
int main()
{
    int fault;
    int count=0;
    int pf=0,victim=-1;
    printf("enter number of pages referencing string:");
    scanf("%d",&nor);
    printf("enter number of frames:");
    scanf("%d",&nof);
    printf("enter the reference string:");
    for(int i=0;i<nor;i++)
    {
        scanf("%d",&ref[i]);
    }
    for(int i=0;i<nof;i++)
    {
        optindex[i]=-1;
        fr[i]=-1;
    }
    for(int i=0;i<nor;i++)
    {
        fault=1;
        printf("\n%d ->",ref[i]);
        for(int j=0;j<nof;j++)
        {
            if(ref[i]==fr[j])
            {
                fault=0;
                break;
            }
        }
        if(fault==1)
        {
            count++;
            if(count<=nof)
            {
                victim++;
            }
            else
            {
                victim=optimal(i);
            }
            pf++;
            fr[victim]=ref[i];
            for(int j=0;j<nof;j++)
            {
                printf("%4d",fr[j]);
            }
        }
    }
    printf("\n number of page fault:%d",pf);
    return 0;
}

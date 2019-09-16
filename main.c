#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

struct process
{

    int bt;
    int wt;
    int tt;
    int pno;
}p[10];

int main()
{
    int n,i;
    float totwt=0,tott=0,avg1,avg2;
    printf("enter the number of process");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        printf("enter the bt of the process %d  :",i+1);
        scanf("%d",&p[i].bt);
        p[i].pno=i+1;

    }
    p[0].wt=0;
    p[0].tt=p[0].bt+p[0].wt;
    for(i=1;i<n;i++)

    {

        p[i].wt=p[i-1].tt;
        p[i].tt=p[i].wt+p[i].bt;
    }
    for(i=0;i<n;i++)
    {

        totwt=totwt+p[i].wt;
        tott=tott+p[i].tt;
    }
    printf("total waiting time:%f\n",totwt);
    printf("total turn around time:%f \n",tott);
    avg1=(totwt/n);
    printf("avg wt is %f \n",avg1);
    avg2=(tott/n);
    printf("avgtt is %f \n",avg2);
    printf("process\tbt\twt\ttt\n");
    for(i=0;i<n;i++)
    {

        printf("p[%d]\t%d\t%d\t%d",(i+1),p[i].bt,p[i].wt,p[i].tt);
        printf("\n");
    }
    return 0;
}

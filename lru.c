#include<stdio.h>
void print(int a[],int f){
printf("Frames:");
for(int i=0;i<f;i++)
{
printf("%d ",a[i]);
}
printf("\n");
}
void main()
{
int n;
printf("Enter reference length:");
scanf("%d",&n);
int a[n];
printf("Enter reference string:\n");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int f;
printf("Enter no. of free frames:");
scanf("%d",&f);
int free=f;
int frames[f];
int count[f];
int pos=0;
int pf=0;
for(int j=0;j<f;j++)
{
count[j]=0;
frames[j]=-1;
}
int time=0;
for(int i=0;i<n;i++)
{
int found=0;
for(int j=0;j<f;j++)
{
if(frames[j]==a[i])
{
count[j]=time;
found=1;
break;
}
}
if(!found)
{
if(free)
{
frames[pos]=a[i];
pf++;
free--;
count[pos]=time;
pos++;
}
else{
int min=count[0];
int index=0;
for(int j=1;j<f;j++)
if(count[j]<min)
{
min=count[j];
index=j;
}
frames[index]=a[i];
count[index]=time;
pf++;
}
}
time++;
print(frames,f);
}
printf("\nNo of page faults:%d\n",pf);
}

#include<stdio.h>

int main()
{
int n;
printf("Enter the size of array\n");
scanf("%d",&n);
int a[n];
printf("Enter the array elements\n");
for(int i = 0;i<n;i++)
scanf("%d",&a[i]);
int f ;
printf("Enter the index to make it fix\n");
scanf("%d",&f);
for(int j =0;j<f-1;j++)
    for(int k = 0;k<f-1;k++)
 {if(a[k]>a[k+1])
 {int t = a[k];
 a[k] = a[k+1];
 a[k+1]= t;
 }
   }
for(int i = f+1;i<n;i++)
    for(int j = f+1;j<n;j++)
{
    if(a[j]>a[j+1])
    {
        int t = a[j];
        a[j] = a[j+1];
        a[j+1] = t;
    }
}
   for(int i = 0;i<n;i++)
     printf("%d ",a[i]);



return 0;

}

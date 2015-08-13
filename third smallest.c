#include<stdio.h>
void main()
{
  int temp,size,arr[100],i,j;
  printf("Enter no of elements\n");
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<size;i++)
  {
    for(j=i+1;j<size;j++)
    {
      if(a[i]>a[j])
      {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
  if(size>=3)
  {
    printf("Third smallest :%d",a[2]);
  }
  else
  printf("Only two numbers exists");
}

//binary search

/*#include<stdio.h>
int main(){
    int arr[]={1,2,4,6,7,8,9,10,12,14,16,18,19,22};
    int left,right,middle;
    int number;
    printf("enter the number thoes number you want to find index possition\n");
    scanf("%d",&number);
    
    left=0;
    right=13;
    
    while(left<=right){
        middle=(left+right)/2;
        if(arr[middle]==number){
            printf("item found at index no %d",middle);
            return 0;
        }
        
        else if(arr[middle]<number)
        {
            left=middle +1;
        }
        else
        {
            right=middle-1;
        }
    }
   printf("item not found , please check this array");
        return 0; 
}*/


//bubble short


/*#include<stdio.h>
 int main()
 {
 int arr[20],n,i,j,c;
 printf("enter the number of an array\n");                                       
 scanf("%d",&n);
 printf("enter the element of an array\n");
 for(i=0;i<n-1;i++)
 {
 scanf("%d",&arr[i]);
 }
 for(j=n-2;j>=0;j--)
 {
 for(i=0;i<j;i++)
 {
 if(arr[i]>arr[i+1])
 {
 c=arr[i];
 arr[i]=arr[i+1];
 arr[i+1]=c;
 }
 }
 }
 printf("after shorting the array\n");
 {
 for(i=0;i<=n-1;i++)
 printf("%d\n",arr[i]);
 }
 return 0;
}*/


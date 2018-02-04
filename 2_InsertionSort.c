# include <stdio.h>
# include <conio.h>
# include <string.h>

void insertionSort(int n, int arr[])
{
    int i;

    int j;

    int key;

    int temp;

    for(i=1;i<n;i++)
    {
       key=arr[i];

       j=i-1;

       while(j>=0 && arr[j]>key)
       {
           arr[j+1] = arr[j];
           j=j-1;

       }
       arr[j+1]=key;
    }

}

void printArray(int n, int arr[])
{
     int i;
     for(i=0;i<n;i++){
        printf("%d",arr[i]);
     }
}
int main()
{
    int n;

    scanf("%d",&n);

    int arr[n];

    int i;

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    insertionSort(n,arr);
    printArray(n,arr);



}

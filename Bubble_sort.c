# include <stdio.h>
# include <string.h>
# include <stdlib.h>
void bubbleSort(int arr[],int n){
        int a;
        int b;
        int temp;
        int j;
        for(a=0;a<n-1;a++)
        {
            for(b=0;b<n-a-1;b++)
            {
                if(arr[b]>arr[b+1])
                    {
                    temp=arr[b];
                    arr[b]=arr[b+1];
                    arr[b+1]=temp;
                    }
            }
        }
        printf("\nArray after sort\n");
         for(j=0;j<n;j++)
        {
            printf("%d\n",arr[j]);
        }

}

main()
 {
        int n;
        int i;
        int j;
        printf("Enter the number of elements you want to have in an array:");
        scanf("%d",&n);
        int arr[n];
        memset(arr,0,n*sizeof(arr[0]));
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("\nArray before sort\n");
         for(j=0;j<n;j++)
        {
            printf("%d\n",arr[j]);
        }
        bubbleSort(arr,n);
        return 0;
 }

# include <stdio.h>
# include <string.h>
# include <math.h>
void fibonacci(int n){
                static int n1=0;
                static int n2=1;
                int n3;
    if(n>0){

                n3=n1+n2;
                n1=n2;
                n2=n3;
                printf(" %d ",n3);
                fibonacci(n-1);

    }
}
int main(){
    int n;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("%d %d ",0,1);
    fibonacci(n-2);
    return 0;
}

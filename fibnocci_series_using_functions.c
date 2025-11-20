#include<stdio.h>
int fib_n(int );
int main(){
    int n,fib;
    printf("Enter factorial numeber: ");
    scanf("%d",&n);
 fib=fib_n(n);
    printf("factoral of numbers: %d\n",fib);

    return 0;

}
int fib_n(int n){
    int i;
    int a=0,b=1,s=1;
    for(i=1;i<=n;i--){
        s=a+b;
        a=b;
        b=s;
    }
    return s;
}
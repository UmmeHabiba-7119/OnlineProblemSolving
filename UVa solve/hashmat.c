#include <stdio.h>
int main(){
    long long int h, op;
    while(scanf("%lld %lld", &h, &op) != EOF)
    {
       if(h > op){
        printf("%lld\n", h - op);
    }
    else{
        printf("%lld\n", op - h);
    }
    }
return 0;
}


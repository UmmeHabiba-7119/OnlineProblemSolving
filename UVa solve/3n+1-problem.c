#include<stdio.h>
int main(){
    int value1, value2, temp, i, j, count=1, max_count=0;
    while(scanf("%d%d", &value1, &value2) != EOF){
            printf("%d %d", value1, value2);
        if(value1>value2){
            temp = value1;
            value1 = value2;
            value2 = temp;
        }
        for(i=value1; i<=value2; i++){
                count = 1;
                j = i;
                while(j != 1){
                    if(j%2 == 1){
                        j = j*3 + 1;
                        count++;
                    }
                    else{
                        j = j/2;
                        count++;
                    }
                }

            if(count > max_count){
                max_count = count;
            }
        }
        printf(" %d\n", max_count);
        max_count = 0;
    }
    return 0;
}

#include <stdio.h>

int main(){
    int cnt = 0;
    for (int i = 1; i <= 2019; i++){
        int m = i;
        while (m > 0){
            if (m % 10 == 9){
                cnt++;
                break;
            }else{
                m /= 10;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}
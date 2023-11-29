#include<stdio.h>


int main(){
    
    int nums [2][2] = {
        {1,2},
        {2,3}
    };


    printf("%d", nums[1][0]);

    int i,j;
    for (i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%d", nums[i][j]);
        }
        printf("\n");
    }



    return 0;
}
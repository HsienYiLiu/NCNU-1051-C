#include <stdio.h>
#include <stdlib.h>

int procss_num,procss_name;
int allocate[5][3] = {{0, 1, 0}, {2, 0, 0}, {3, 0, 2}, {2, 1, 1}, {0, 0, 2}};
int max[5][3] = {{7, 5, 3}, {3, 2, 2}, {9, 0, 2}, {2, 2, 2}, {4, 3, 3}};
int avaiable[3] = {3,3,2};
int need[5][3] ;
int finish[5] = {-1,-1,-1,-1,-1};
int safe[5],count = 0,process;
//set data
int main(){
    int i,j;
    for(i=0;i<5;i++){
       for(j=0;j<3;j++){
           printf("\t\t");
           need[i][j]=max[i][j]-allocate[i][j];       //calculating Need of each process
        }
    }
    printf("\n Max matrix:\tAllocation matrix:\tNeed:\n");
    for(i = 0; i < 5; i++)
    {
        for( j = 0; j < 3; j++)
            printf("%d ", max[i][j]);
        printf("\t\t");
        for( j = 0; j < 3; j++)
            printf("%d ", allocate[i][j]);
        printf("\t\t");
            for( j = 0; j < 3; j++)
                printf("%d ", need[i][j]);
        printf("\n");
    }
    int p,bmax,bavaiable,ballocate;
    scanf("%d%d%d%d",&p,&bmax,&bavaiable,&ballocate);
    int bank[3] = {bmax,bavaiable,ballocate};
      if(max[p][0] > bank[0] && max[p][1] > bank[1] && max[p][2] > bank[2] && avaiable[0] > bank[0]&& avaiable[1] > bank[1]&& avaiable[2] > bank[2]){
          allocate[p][0] = allocate[p][0] + bank[0];
          allocate[p][1] = allocate[p][1] + bank[1];
          allocate[p][2] = allocate[p][2] + bank[2];
          need[p][0] = need[p][0] - bank[0];
          need[p][1] = need[p][1] - bank[1];
          need[p][2] = need[p][2] - bank[2];
      }
    //for need

    for(i = 0 ; i < 5 ;i++){
      for(j = 0 ; j < 3 ; j++){
        printf("%d", need[i][j]);
      }
    }

    printf("\n Max matrix:\tAllocation matrix:\tNeed:\n");
    for(i = 0; i < 5; i++)
    {
        for( j = 0; j < 3; j++)
            printf("%d ", max[i][j]);
        printf("\t\t");
        for( j = 0; j < 3; j++)
            printf("%d ", allocate[i][j]);
        printf("\t\t");
            for( j = 0; j < 3; j++)
                printf("%d ", need[i][j]);
        printf("\n");
    }
    int count = 0;
    for(i = 0; i < 5; i++){
        if(finish[i] == -1){//if not completed
            for(j = 0; j < 3; j++){
                if(avaiable[j] < need[i][j]){
                    break;
                  }else{
                      avaiable[j] += allocate[i][j];
                      if(j == 2){
                          finish[i] = 1;
                          safe[count] = i;
                          count++;
                          printf("%d\n",i );
                          i = -1;
                      }
                }
            }
        }
    }
    for(i = 0 ; i < 5 ; i++){
        printf("%d\n", safe[i]);
    }

}

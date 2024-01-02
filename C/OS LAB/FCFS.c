#include<stdio.h>
#include<math.h>

void FCFS(int BT[], int n){
    int WT =0;                          // WT = Waiting Time
    int TAT = 0;                          // TAT = Turn Around Time

    printf("Process \tBT \tWT \tTAT\n");

    for(int i=0; i<n; i++){
        WT += BT[i];   //calculates waiting time for the current process
        TAT += WT;
        

        printf("%d \t%d\t\t%d\t\t%d\n", i+1, BT[i], WT, TAT);

        int AWT = WT/n;
        int ATAT = TAT/n;

        printf("\nAverage Waiting Time(AWT): %d\n", AWT);
        printf("Average Turnaround Time: %d\n", ATAT);

    }

    int main(){
        int n;

        printf("Enter the number of processes: ");
        scanf("%d", &n);

        int BT[n];

        for (int i=0; i<n; i++){
            printf("Enter BT for Process %d: " ,i+1);
            scanf("%d", &BT[i]);

        }


        FCFS(BT, n);
    }




}
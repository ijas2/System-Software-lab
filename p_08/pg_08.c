/* 
    Author     : abhijithvijayan
    Created on : 28 Oct 18, 22:14
    Title      : FCFS Disk Scheduling
*/

#include<stdio.h>

int main() {
    int diskQueue[20], n, i, seekTime=0, diff;
    printf("Enter the size of Queue: ");
    scanf("%d", &n);
    printf("Enter the Queue: ");
    for(i=1;i<=n;i++) {                       /* head element to be read */                       
        scanf("%d",&diskQueue[i]);
    }
    printf("Enter the initial head position: ");
    scanf("%d", &diskQueue[0]);             /* head element */
    printf("\nMovement of Cylinders\n");
    for(i=0;i<n;i++) {
        diff= diskQueue[i+1] - diskQueue[i];
        if(diff<0) {
            diff*=-1;
        }
        seekTime+= diff;
        printf("Move from %d to %d with seek time %d\n", diskQueue[i], diskQueue[i+1], diff);
    }
    printf("\nTotal Seek Time: %d", seekTime);
    printf("\nAverage Seek Time = %f",(float) seekTime/n);
    printf("\n");
    return 0;
}
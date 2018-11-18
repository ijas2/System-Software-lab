    /* 
        Author     : abhijithvijayan
        Created on : 18 Nov 18, 14:32
        Title      : FIFO page-replacement algorithm
    */

    #include<stdio.h>

    void fifo(int [], int [], int, int);

    int main() {
        int i, pCount, fCount, str[30], frames[20];
        printf("Number of Pages : ");
        scanf("%d", &pCount);
        printf("Enter the reference string\n");
        for (i = 0; i < pCount; i++) {
            scanf("%d", &str[i]);
        }    
        printf("Number of Frames : ");
        scanf("%d", &fCount);
        // create frames array will null value
        for (i = 0; i < fCount; i++) {
            frames[i] = -1;
        }
        // call the function
        fifo(str, frames, pCount, fCount);

        return 0;
    }

    void fifo(int str[], int frames[], int pCount, int fCount) {
        printf("\n  Ref.String\tFrames\n");
        int i, j, k, flag, faultCount = 0, queue = 0;
        for (i = 0; i < pCount; i++) {
            printf("\t%d\t", str[i]);
            flag = 0;
            for (j = 0; j < fCount; j++) {
                if (frames[j] == str[i]) {   // compare with string in str[]
                    flag = 1;
                    printf("   Hit");
                    break;
                }
            }
            if (flag == 0) {                 // not present in frames
                frames[queue] = str[i];
                faultCount++;
                queue = (queue + 1) % fCount;   // Queue position in circular way
                // display
                for (k = 0; k < fCount; k++) {
                    printf("%d  ", frames[k]);
                }
            }
            printf("\n\n");
        }
        printf("Total Page Faults = %d\n", faultCount);     
    }
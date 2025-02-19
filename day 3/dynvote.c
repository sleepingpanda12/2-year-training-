#include <stdio.h>

// Function to count votes
void countvotes(int votes[], int n, int candidatevotes[]) {
    for (int i = 0; i < n; i++) {
        candidatevotes[votes[i] - 1]++;
    }
}

// Function to find the winner
int findwinner(int candidatevotes[]) {
    int max_index = 0;
    for (int i = 1; i < 5; i++) {
        if (candidatevotes[i] > candidatevotes[max_index]) {
            max_index = i;
        }
    }
    return max_index + 1;
}
void readvotes(int votes[],int n)
{
    printf("enter votes ( 1. 2. 3. 4.):");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&votes[i]);
    }
}

// Main function
int main() {
    int n;
    printf("enter the no/- of votes:");
    scanf("%d",&n);
    int* votes=NULL;
   votes=(int*)malloc(sizeof(int)*n);
    
   readvotes(votes,n);
    int *candidatevotes = NULL;
    candidatevotes =(int*)calloc(5,sizeof(int));

    // Count the votes
    countvotes(votes, n, candidatevotes);

    // Print the votes for each candidate
    for (int i = 0; i < 5; i++) {
        printf("Candidate %d votes are %d\n", i + 1, candidatevotes[i]);
    }

    // Find and print the winner
    printf("Winner is candidate %d\n", findwinner(candidatevotes));
    free(votes);
    votes=NULL;
    free(candidatevotes);
    candidatevotes=NULL;
    return 0;
}

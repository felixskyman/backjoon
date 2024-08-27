#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

typedef struct {
    char name[1001];
    int votes;
} Candidate;

int findCandidateIndex(Candidate candidates[], int candidateCount, char *name) {
    for (int i = 0; i < candidateCount; i++) {
        if (strcmp(candidates[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int p;
    scanf("%d", &p);

    for (int dataSet = 1; dataSet <= p; dataSet++) {
        int n, m;
        scanf("%d %d", &n, &m);

        Candidate candidates[100];
        for (int i = 0; i < n; i++) {
            scanf("%s", candidates[i].name);
            candidates[i].votes = 0;
        }

        for (int i = 0; i < m; i++) {
            char candidateName[1001], center[1001];
            int result;
            scanf("%s %d %s", candidateName, &result, center);

            int index = findCandidateIndex(candidates, n, candidateName);
            if (index != -1) {
                candidates[index].votes += result;
            }
        }

        int maxVotes = 0;
        int winnerIndex = -1;
        int winnerCount = 0;

        for (int i = 0; i < n; i++) {
            if (candidates[i].votes > maxVotes) {
                maxVotes = candidates[i].votes;
                winnerIndex = i;
                winnerCount = 1;
            } else if (candidates[i].votes == maxVotes) {
                winnerCount++;
            }
        }

        if (winnerCount == 1) {
            printf("VOTE %d: THE WINNER IS %s %d\n", dataSet, candidates[winnerIndex].name, candidates[winnerIndex].votes);
        } else {
            printf("VOTE %d: THERE IS A DILEMMA\n", dataSet);
        }
    }

    return 0;
}

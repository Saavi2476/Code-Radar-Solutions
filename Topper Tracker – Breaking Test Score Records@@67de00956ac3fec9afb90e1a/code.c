#include <stdio.h>

void trackScores(int scores[], int n, int result[]) {
    int highest = scores[0], lowest = scores[0];
    int highBreaks = 0, lowBreaks = 0;

    for (int i = 1; i < n; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
            highBreaks++;
        }
        if (scores[i] < lowest) {
            lowest = scores[i];
            lowBreaks++;
        }
    }
    
    result[0] = highBreaks;
    result[1] = lowBreaks;
}
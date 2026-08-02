#include <limits.h>
#include <stdio.h>
int getCost(int mins, int secs, int startAt, int moveCost, int pushCost) {
    if (mins < 0 || mins > 99 || secs < 0 || secs > 99) {
        return INT_MAX;
    }
    int val = mins * 100 + secs;
    char str[5]; 
    sprintf(str, "%d", val);
    int totalCost = 0;
    char currentFinger = startAt + '0';
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != currentFinger) {
            totalCost += moveCost; 
            currentFinger = str[i];
        }
        totalCost += pushCost;
    }

    return totalCost;
}

int minCostSetTime(int startAt, int moveCost, int pushCost, int targetSeconds) {
    int m1 = targetSeconds / 60;
    int s1 = targetSeconds % 60;
    int m2 = m1 - 1;
    int s2 = s1 + 60;
    int cost1 = getCost(m1, s1, startAt, moveCost, pushCost);
    int cost2 = getCost(m2, s2, startAt, moveCost, pushCost);
    return (cost1 < cost2) ? cost1 : cost2;
}

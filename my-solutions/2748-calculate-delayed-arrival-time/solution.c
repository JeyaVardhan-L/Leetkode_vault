int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    int t= (arrivalTime + delayedTime)>=24?(arrivalTime + delayedTime)%24:(arrivalTime + delayedTime);
    return t;
}

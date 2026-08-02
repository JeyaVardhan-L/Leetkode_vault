

int distanceBetweenBusStops(int* distance, int distanceSize, int start, int destination) {
    if (start > destination) {
        int temp = start;
        start = destination;
        destination = temp;
    }
    int clockwise_dist = 0;
    int total_dist = 0;
    for (int i = 0; i < distanceSize; i++) {
        total_dist += distance[i];
        if (i >= start && i < destination) {
            clockwise_dist += distance[i];
        }
    }
    int counterclockwise_dist = total_dist - clockwise_dist;
    if (clockwise_dist < counterclockwise_dist) {
        return clockwise_dist;
    } else {
        return counterclockwise_dist;
    }
}

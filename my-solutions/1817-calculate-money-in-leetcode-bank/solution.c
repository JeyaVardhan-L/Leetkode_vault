int totalMoney(int n) {
    int monmony = 1;
    int weekmony=1;
    int sum = 0;
        for ( int x=1 ; x<=n ; x++ ){
            sum = sum + weekmony ;
            weekmony++;
            if(x%7==0){
                monmony++;
                weekmony=monmony;
            }
        }
    return sum ;
}


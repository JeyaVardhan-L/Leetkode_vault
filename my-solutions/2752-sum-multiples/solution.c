int sumOfMultiples(int n) {
    int x=1;
    int sum=0;
    while(x<=n){
        if(x%3==0 || x%5==0 || x%7==0){
            sum=sum+x;
        }
        x++;  
    }
    return sum;
    
}

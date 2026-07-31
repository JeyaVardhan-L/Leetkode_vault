bool checkPerfectNumber(int num) {
    if ( num < 2 ){
        return false;
    }
    int store=1;
    for ( int i = 2 ; i <= num/2 ; i++ ){
        if(num%i==0){
            store+=i;
        }
    }
    return store==num;
}

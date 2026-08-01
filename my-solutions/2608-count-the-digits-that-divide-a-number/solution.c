int countDigits(int num) {
    int remnum = num;
    int rem=0;
    int count=0;
    while(remnum != 0){
        rem=remnum%10;
        if(rem!=0 && num%rem==0){
            count++;
        }
        remnum=remnum/10;
    }
    return count;
}

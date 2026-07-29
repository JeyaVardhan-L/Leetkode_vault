bool isSameAfterReversals(int num) {
    bool x;
    if(num != 0){
        x = (num%10!=0);
    }
    else{
        x = true;
        
    }
    return x;
}

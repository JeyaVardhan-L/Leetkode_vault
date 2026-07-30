bool isPalindrome(int x) {
    if(x<0 || (x%10==0 && x!=0 )){
        return false;
    }
    int a = x;
    int b = 0;

    while(a>b){
        b = b*10+a%10;
        a = a/10;
    }

    if(a==b || a==b/10){
        return true;
    }
    else{
        return false;
    }
}

bool isPalindrome(long int x){
    if(0 > x){
        return false;
    }
    long int reverseVers = 0, oldVers = x;
    while(oldVers > 0){
        reverseVers = reverseVers * 10 + oldVers % 10;
        oldVers /= 10;
    }
    return reverseVers == x;
}
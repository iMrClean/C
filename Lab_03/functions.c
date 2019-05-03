int palindrome(int a) {
    int d = 0;
    while (a != 0) {
        d = d * 10 + a % 10;
        a /= 10;
    }
    return d;
}
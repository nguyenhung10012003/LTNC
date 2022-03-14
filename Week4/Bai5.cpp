bool isPrime (int number) {
    if (number < 2) return false;
    if (number == 2 || number == 3) return true;
    if (number % 2 == 0 || number % 3 == 0) return false;
    int i = 5;
    for (; i <= trunc(sqrt(number)); i+=6)
        if (number % i == 0 || number % (i+2) == 0) return false;
        return true;
}
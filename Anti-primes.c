int array[20];

int countDivisors(int n) {
    int i, count;
    if (n < 2) 
        return 1;
    count = 2;
    for (i = 2; i <= n/2; ++i) {
        if (n%i == 0) 
            ++count;
    }
    return count;
}
 
int main() {
    int n, d, maxDiv = 0, count = 0, i;
    for (n = 1, i = 0; count < 20; n++) {
        d = countDivisors(n);
        if (d > maxDiv) {
            array[i] = n;
            i++;
            maxDiv = d;
            count++;
        }
    }
    return 0;
}

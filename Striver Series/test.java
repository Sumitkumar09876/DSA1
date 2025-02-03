import java.util.Scanner;

class Solution {

    static long amountToBeInvested(long N) {
        if (N == 0) {
            return 0;
        }

        long sumOfDigits = 0;
        long tempN = N;

        while (tempN > 0) {
            sumOfDigits += tempN % 10;
            tempN /= 10;
        }

        if (sumOfDigits == 0) {
            return 0;
        }

        return N / sumOfDigits;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long N;

        N = sc.nextLong();

        long investmentAmount = amountToBeInvested(N);

        System.out.println(investmentAmount);

        sc.close();
    }
}
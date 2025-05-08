import java.util.Scanner;

class Main {

    public void helper_function() {
        //make modifications in the code below to accept input values

        Scanner sc = new Scanner(System.in);
        String inputLine = sc.nextLine();
        String[] numsStr = inputLine.split(" ");
        int[] arr = new int[numsStr.length];
        for (int i = 0; i < numsStr.length; i++) {
            arr[i] = Integer.parseInt(numsStr[i]);
        }
        int S = sc.nextInt();
        int minLength = Integer.MAX_VALUE;
        int currentSum = 0;
        int start_index = 0;

        for (int end_index = 0; end_index < arr.length; end_index++) {
            currentSum += arr[end_index];
            while (currentSum >= S) {
                minLength = Math.min(minLength, end_index - start_index + 1);
                currentSum -= arr[start_index];
                start_index++;
            }
        }

        if (minLength == Integer.MAX_VALUE) {
            System.out.println(0);
        } else {
            System.out.println(minLength);
        }
    }

    public static void main(String[] args) {
        Main m = new Main();
        m.helper_function();
    }
}
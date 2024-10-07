import java.io.BufferedReader;
import java.io.InputStreamReader;

class Main {
    public static void main(String args[]) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // Read the number of movies
        int n = Integer.parseInt(br.readLine());
        
        // Read the ratings for the movies as a space-separated string
        String[] ratings = br.readLine().split(" ");
        
        // Create a StringBuilder to store the result
        StringBuilder result = new StringBuilder();
        
        // Loop through each rating and calculate the bonus rating
        for (int i = 0; i < n; i++) {
            int bonusRating = calculateBonusRating(ratings[i]);
            result.append(bonusRating).append(" ");
        }
        
        // Print the final bonus ratings, trimming any extra space at the end
        System.out.println(result.toString().trim());
    }
    
    // Function to calculate the bonus rating for a single movie rating
    public static int calculateBonusRating(String rating) {
        int evenProduct = 1; // Product of even digits (excluding 0)
        int oddProduct = 1;  // Product of odd digits
        boolean hasEven = false; // To track if we have any even digits

        for (char ch : rating.toCharArray()) {
            int digit = ch - '0'; // Convert character to integer
            
            if (digit == 0) {
                continue; // Skip zeroes
            }

            if (digit % 2 == 0) {
                evenProduct *= digit;
                hasEven = true;
            } else {
                oddProduct *= digit;
            }
        }
        
        // If there are no even digits, we assign evenProduct = 1 to avoid multiplication by 0
        if (!hasEven) {
            evenProduct = 1;
        }

        // Calculate the difference between evenProduct and oddProduct
        int bonusRating = evenProduct - oddProduct;
        
        // If the result is non-negative, return the result, else return 0
        return Math.max(bonusRating, 0);
    }
}

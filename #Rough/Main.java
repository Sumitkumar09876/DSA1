import java.io.*;
import java.util.*;

// UserMainCode class
class UserMainCode {
    public int magicString(String input1) {
        // If the string is empty or has only one character, it's already a Magic String
        if (input1 == null || input1.length() <= 1) {
            return 0;
        }

        // Count the occurrences of each character
        Map<Character, Integer> charCounts = new HashMap<>();
        for (char c : input1.toCharArray()) {
            charCounts.put(c, charCounts.getOrDefault(c, 0) + 1);
        }

        // Find the maximum occurrence count
        int maxCount = Collections.max(charCounts.values());

        // Calculate the minimum number of steps
        int totalSteps = input1.length() - maxCount;

        return totalSteps;
    }
}

// Main class with main method
public class Main {
    public static void main(String[] args) {
        UserMainCode userMainCode = new UserMainCode();
        
        // Test cases
        String[] testCases = {"aaabbbccdddd", "aaaa", "abcdefghijklmnopqrstuvwxyz"};
        
        for (String testCase : testCases) {
            int result = userMainCode.magicString(testCase);
            System.out.println("Input: " + testCase);
            System.out.println("Minimum steps: " + result);
            System.out.println();
        }
    }
}

import java.io.*;
import java.util.*;

class Result {

    public static int[] getRedistributedLoad(int[] serverCapacity, int[] serverLoad) {
        // Sort both arrays
        Arrays.sort(serverCapacity);
        Arrays.sort(serverLoad);

        // Create a map to store the original indices of serverCapacity
        Integer[] originalIndices = new Integer[serverCapacity.length];
        for (int i = 0; i < serverCapacity.length; i++) {
            originalIndices[i] = i;
        }
        Arrays.sort(originalIndices, (a, b) -> serverCapacity[a] - serverCapacity[b]);

        // Create the result array
        int[] redistributedLoad = new int[serverLoad.length];
        for (int i = 0; i < serverLoad.length; i++) {
            redistributedLoad[originalIndices[i]] = serverLoad[i];
        }

        return redistributedLoad;
    }
}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        int[] serverCapacity = new int[n];
        for (int i = 0; i < n; i++) {
            serverCapacity[i] = Integer.parseInt(bufferedReader.readLine().trim());
        }

        int m = Integer.parseInt(bufferedReader.readLine().trim());

        int[] serverLoad = new int[m];
        for (int i = 0; i < m; i++) {
            serverLoad[i] = Integer.parseInt(bufferedReader.readLine().trim());
        }

        int[] result = Result.getRedistributedLoad(serverCapacity, serverLoad);

        for (int value : result) {
            bufferedWriter.write(String.valueOf(value));
            bufferedWriter.newLine();
        }

        bufferedReader.close();
        bufferedWriter.close();
    }
}

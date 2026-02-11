package Questions.Step_4_Binary_Search;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.TreeMap;

public class FindRightInterval {
    public int[] findRightInterval(int[][] intervals) {
        int[] result = new int[intervals.length];
        TreeMap<Integer, Integer> map = new TreeMap<>();

        for (int i = 0; i < intervals.length; i++) {
            map.put(intervals[i][0], i);
        }

        for (int i = 0; i < intervals.length; i++) {
            Map.Entry<Integer, Integer> entry = map.ceilingEntry(intervals[i][1]);
            result[i] = (entry != null) ? entry.getValue() : -1;
        }

        return result;
    }

    public static void main(String[] args) {
        FindRightInterval solution = new FindRightInterval();
        int[][] intervals = { { 3, 4 }, { 2, 3 }, { 1, 2 } };
        int[] result = solution.findRightInterval(intervals);
        System.out.println("Right Intervals: " + Arrays.toString(result)); // Output: [-1, 0, 1]
    }
}

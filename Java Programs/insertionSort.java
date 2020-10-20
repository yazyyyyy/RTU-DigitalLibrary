// It is Insertion Sort Program and also analyses worst
// case, best case and average case time complexity on
// various input sizes.

import java.util.*;
public class A {
    public static void sort1(int arr[])
    {
        int n = arr.length;
        for (int j = 1; j < n; j++) {
            int key = arr[j];
            int i = j - 1;
            while (i >= 0 && arr[i] > key) {
                arr[i + 1] = arr[i];
                i = i - 1;
            }
            arr[i + 1] = key;
        }
    }
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the no of test cases");
        int n;
        n = scan.nextInt();
        for (int t = 0; t < n; t++) {
            int a;
            System.out.println("Enter the no of items");
            a = scan.nextInt();
            Random rd = new Random();
            int[] arr = new int[a];
            for (int i = 0; i < a; i++) {
                arr[i] = rd.nextInt(2000);
            }
            // Average case
            long start = System.currentTimeMillis();
            sort1(arr);
            long end = System.currentTimeMillis();
            System.out.println(
                "Time elapsed for average case is "
                + (end - start) + " milliseconds");

            // Best case
            start = System.nanoTime();
            sort1(arr);
            end = System.nanoTime();
            System.out.println(
                "Time elapsed for best case is "
                + (end - start) + " nanoseconds");
            // Worst case
            // Sort the array in descending order
            int temp;
            for (int i = 0; i < arr.length; i++) {
                for (int j = i + 1; j < arr.length; j++) {
                    if (arr[i] < arr[j]) {
                        temp = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
            start = System.currentTimeMillis();
            sort1(arr);
            end = System.currentTimeMillis();
            System.out.println(
                "Time elapsed for worst case is "
                + (end - start) + " milliseconds");
        }
    }
}

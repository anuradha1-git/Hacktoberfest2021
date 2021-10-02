//Codechef Solution 


import java.util.Scanner;

public class SpecialTriplet {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();

        while(t-- != 0) {
            int n = scan.nextInt();
            int[] a = new int[n];

            for(int i = 0; i < n; i++) {
                a[i] = i + 1;
            }
            int count = n-1;
            for (int i = 0; i < n-1; i++) {
                int l = i+1;
                int h = n-1;
                while(l <= h) {
                    if((a[i] % a[l] == a[h]) && (a[l] % a[h] == 0)) count++;
                    if((a[l] % a[h] == a[i]) && (a[h] % a[i] == 0)) count++;
                    if((a[h] % a[i] == a[l]) && (a[i] % a[l] == 0)) count++;
                    l++;
                    h--;
                }
            }
            System.out.println(count);
        }
    }
}

import java.util.Random;
public class pattern_draw {
    public static void main(String[] args) {

        Random random = new Random();
        int n, i, j, space, half1, half2;
        n = random.nextInt(15) + 10;
        if (n % 2 == 0)
            n++;
        System.out.println("n: " + n);
        space = n/2;

        for(i = 0; i <= n/2; i++){
            for (j = 0; j < space; j++) {
                System.out.print(" ");
            }
            half1 = (2*i)+1;
            for (j = 0; j < half1; j++) {
                System.out.print("*");
            }
            System.out.print("\n");
            space--;
        }
        space =+1;
        for (i = 0; i < (n/2); i++) {
            for (j = 0; j < space; j++) {
                System.out.print(" ");
            }
            half2 =  n-space*2;
            for (j = 0; j < half2; j++) {
                System.out.print("*");
            }
            System.out.print("\n");
            space++;
        }
    }
}
f

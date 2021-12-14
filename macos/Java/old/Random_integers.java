import java.util.Random;
public class Random_integers {
    public static void main(String[] args) {
        Random random = new Random();
        int face, fr1 = 0, fr2 = 0, fr3 = 0;
        for (int i = 1; i <= 12; i++) {
            face = random.nextInt(3) + 1;
            switch (face) {
            case 1:
                ++fr1;
                break;
            case 2:
                ++fr2;
                break;
            case 3:
                ++fr3;
                break;
            }
            System.out.print(face + " ");
            if (i % 4 == 0)
                System.out.println();
        }
        System.out.println("Frequancy of one: " + fr1);
        System.out.println("Frequancy of two: " + fr2);
        System.out.println("Frequancy of three: " + fr3);
    }
}

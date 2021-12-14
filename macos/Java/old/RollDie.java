import java.util.Random;
public class RollDie {
    public static void main(String[] args) {
        Random randomNum = new Random();
        int frequancy[] = new int[7];
        for (int roll = 1; roll <= 6000; roll++)
            ++frequancy[1 + randomNum.nextInt(6)];

        System.out.printf("%s%10s\n", "Face", "Frequancy");

        for (int face = 1; face < frequancy.length; face++) {
            System.out.printf("%4d%10d\n", face, frequancy[face]);
        }
    }
}

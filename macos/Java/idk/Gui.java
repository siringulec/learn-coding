/*import javax.swing.JOptionPane;

public class Gui {
    public static void main(String[] args) {
        String name = JOptionPane.showInputDialog(null ,"İsminizi girin:", "Soyadinizi girin:", 3);
        //int age = Integer.parseInt(JOptionPane.showInputDialog("Yaşınızı girin:"));
        JOptionPane.showMessageDialog(null,"Merhaba, " + name);
    }
}*/
import javax.swing.*;

public class Gui {
    public static void main(String[] args) {
        GamePlay();
    }

    public static void GamePlay(){
        int computerNumber = (int) (Math.random()*100 + 1);
        int userAnswer = 0, count = 1, guess = 10;
        System.out.println("The correct guess would be " + computerNumber);

        while (userAnswer != computerNumber && count < guess+1)
        {
            String response = JOptionPane.showInputDialog(null,
                "1 ile 100 arasında bir sayı gir, "+ guess + " hakkın var:\nEnter a number between 1 and 100, you have " +guess+ " guesses:", "Tahmin Oyunu||Guessing Game",JOptionPane.INFORMATION_MESSAGE, new ImageIcon("icon.png"), null, "").toString();
            userAnswer = Integer.parseInt(response);
            determineGuess(userAnswer, computerNumber, count , guess);
            count++;
        }
        int answer = JOptionPane.showConfirmDialog(null,"Yeniden oynamak ister misin?\nWanna play again?", "Tahmin Oyunu||Guessing Game", JOptionPane.YES_NO_OPTION ,JOptionPane.QUESTION_MESSAGE, new ImageIcon("icon3.png"));
        if (answer == 0)
            GamePlay();
    }

    public static void determineGuess(int userAnswer, int computerNumber, int count, int guess){
        ImageIcon icon = new ImageIcon("icon.png");
        if (userAnswer <=0 || userAnswer >100) {
            JOptionPane.showMessageDialog(null, "Geçersiz sayı!\n Invalid guess!", "Tahmin Oyunu||Guessing Game", JOptionPane.WARNING_MESSAGE);
        }
        if (count == guess){
            JOptionPane.showMessageDialog(null, "Hakkını kaybettin, cevap: " + computerNumber + "\nYou lost, answer: " +computerNumber, "Tahmin Oyunu||Guessing Game", JOptionPane.INFORMATION_MESSAGE, new ImageIcon("icon2.png"));
        }
        else if (userAnswer == computerNumber ){
            JOptionPane.showMessageDialog(null, "Doğru cevap!\nToplam tahmin sayısı: " + count+ "\nCorrect answer!\nTotal guesses: " + count, "Tahmin Oyunu||Guessing Game", JOptionPane.INFORMATION_MESSAGE, new ImageIcon("icon1.png"));
        }
        else if (userAnswer > computerNumber) {
            JOptionPane.showMessageDialog(null,"Tahminin çok yüksek, yeniden dene.\nToplam tahmin sayısı: " + count+ "\nYour guess is too high, try again.\nTotal guesses: "+count, "Tahmin Oyunu||Guessing Game", JOptionPane.INFORMATION_MESSAGE, icon);
        }
        else if (userAnswer < computerNumber) {
            JOptionPane.showMessageDialog(null,"Tahminin çok düşük, yeniden dene.\nToplam tahmin sayısı: " + count+ "\nYour guess is too low, try again.\nTotal guesses: "+count, "Tahmin Oyunu||Guessing Game", JOptionPane.INFORMATION_MESSAGE, icon);
        }
        else {
            JOptionPane.showMessageDialog(null,"exit error", "Tahmin Oyunu||Guessing Game", JOptionPane.WARNING_MESSAGE);
        }

    }
}

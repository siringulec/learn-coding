import java.time.LocalDate;
public class LocalDateExample1 {
    public static void main(String[] args) {
        LocalDate date = LocalDate.of(2022, 1 , 1);
        LocalDate yesterday = date.minusDays(1);
        LocalDate tomorrow = yesterday.plusDays(2);
        //String day = date.getDayOfWeek();
        System.out.println("Today date: "+date);
        System.out.println("Yesterday date: "+yesterday);
        System.out.println("Tomorrow date: "+tomorrow);
        System.out.println("Day of week: "+date.getDayOfWeek());
    }
}

import java.io.*;
import java.util.*;
import java.time.LocalDate;
import java.time.temporal.ChronoUnit;

public class Main {
    public static void main(String[] args) throws IOException {
    	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    	int x=0;
    	StringTokenizer st = new StringTokenizer(br.readLine());

    	int year1 = Integer.parseInt(st.nextToken());
    	int month1 = Integer.parseInt(st.nextToken());
    	int day1 = Integer.parseInt(st.nextToken());

    	st = new StringTokenizer(br.readLine());

    	int year2 = Integer.parseInt(st.nextToken());
    	int month2 = Integer.parseInt(st.nextToken());
    	int day2 = Integer.parseInt(st.nextToken());
    	
    	LocalDate date1 = LocalDate.of(year1, month1, day1);
    	LocalDate date2 = LocalDate.of(year2, month2, day2);

    	long days = ChronoUnit.DAYS.between(date1, date2);

    	 if (!date1.plusYears(1000).isAfter(date2)) {
            System.out.println("gg");
        } else {
            System.out.println("D-" + days);
        }
    }
}
import java.util.*;
public class ola {
    public static void main(String[] args)
    {
        try (Scanner sc = new Scanner(System.in)) {
            int A=sc.nextInt();
            int B=sc.nextInt();
            int C=sc.nextInt();

            int average=(A+B+C)/3;
            System.out.println("Average is "+average);
        }
    }
}

import java.util.*;
public class Incometaxcalculator {
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int income= in.nextInt();
        int tax=0;

        if (income<500000)
        {
        tax=0;
        }
        else if (income>=500000 && income < 1000000)
        {
            tax=(int)(income* 0.2);

        }
        else if (income>1000000)
        {
            tax=(int)(income*0.3);

        }

        System.out.println("Tax is:"+tax);

         

in.close();
    }
}

import java.util.*;
public class positive_negativenumber {
    public static void main(  String[] args)
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the Number");
        int a = sc.nextInt();


        if (a>0)
        {
            System.out.println("It is a positive number:"+a);

        } 
        else if (a<0)
        {
            System.out.println("It is a negative number:"+a);
        }
        
        else 
        {
            System.out.println("Not valid");
        }

        sc.close();

    }
}

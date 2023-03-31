import  java.util.*;
public class exam {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        int y=sc.nextInt();

        if (x%2!=0 && y%2!=0)
        {
            System.out.println("We are odd");
        }
        else{
            System.out.println("We are Simple");
        }
        sc.close();
    }
}

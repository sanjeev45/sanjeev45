
import java.util.*;
public class javaBasic {

   public static void calculatesum(){
    Scanner sc=new Scanner(System.in);
    int a =sc.nextInt();
    int b=sc.nextInt();
    int sum=a+b;
    System.out.println("Sum is:"+ sum);
sc.close();
}

   public static void multiply(int a,int b){

    int multiply=a*b;
    System.out.println("Multiplication is:"+ multiply);
   }
    public static void main(String[] args)
    {
        //function call

        calculatesum();
    Scanner sc=new Scanner(System.in);
    int a =sc.nextInt();
    int b=sc.nextInt();
    multiply(a,b);


    sc.close();
    
    }

    
}

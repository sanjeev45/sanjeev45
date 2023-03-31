import java.util.*;
public class totalsalary {
    public static void main(String[] args)
    {
        //Finding the toatal salary of the Employee
        Scanner sc=new Scanner(System.in);
        int allow;
        int totalsalary;

        System.out.println("Enter your Basic Salary");

        int basicsalary= sc.nextInt();

        char grade = sc.next().charAt(0);

        if (grade=='A') 
        {
            allow = 1700; 

        }
        else if (grade =='B')
        {
            allow = 1500;
        }

        else
        {
            allow = 1300;
        }

        int hra=(int)(0.20f* basicsalary);

        int da= (int) (0.50f* basicsalary);

        int pf=(int)(0.11f* basicsalary);


        totalsalary= basicsalary+hra+da+allow-pf;


        System.out.println("Total Salary is:"+totalsalary);







        
sc.close();


    }
}

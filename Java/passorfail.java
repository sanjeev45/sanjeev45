import java.util.*;
public class passorfail {
    public static void main(String[] args)
    {
        // To check whether pass or fail

        Scanner in=new Scanner(System.in);

        int marks=in.nextInt();

        String reportcard=marks>=35?"Pass":"Fail";

        System.out.println(reportcard);


        in.close();


    }

    
}

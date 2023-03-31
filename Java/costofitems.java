import java.util.*;
public class costofitems {

    public static void main(String[] args)
    {
        try (Scanner sc = new Scanner(System.in)) {
            float pencil=sc.nextFloat();
            float pen=sc.nextFloat();
            float eraser=sc.nextFloat();


            float Bill= pencil+ pen +eraser;

            System.out.println("Bill is :"+Bill);

            float newBill= Bill+(0.18f*Bill);
            System.out.println("Bill including GST is:"+newBill);




        }
    }
}

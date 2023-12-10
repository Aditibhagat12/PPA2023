import java.util.*;
class InputOutput
{
    public static void main (String arg[])
    {
        Scanner sobj = new Scanner (System.in);
        System.out.println("Enter first number : ");

        int NO1 = sobj.nextln();

        System.out.println("Enter second number : ");
        int NO2 = sobj.nextlnt();
        
        int Ans = 0;
        Ans = NO1 + NO2;

        System.out.println("Addition is : "+ Ans);
        sobj.close();
    
        
    }
}

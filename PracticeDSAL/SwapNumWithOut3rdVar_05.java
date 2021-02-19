
public class SwapNumWithOut3rdVar_05 {
    public static void main(String[] args) {

        int a = 10;
        int b = 5;

        /*
		 Swapping an two Numbers without using an third variables:
		*/
		a = a + b; //On adding gives sum of two of them.
		b = a - b; //Values of a goes on changes -> 15.So, On subtraction b from a -> 10
		a = a - b; 
		
		System.out.println("After swaping an two numbers: ");
		System.out.println("a " + " = " + a);
		System.out.println("b " + " = " + b);

        
    }
}

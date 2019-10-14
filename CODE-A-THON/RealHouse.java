// AUTHOR: MOHAMMAD FAISAL
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
import java.util.Scanner;
import java.util.ArrayList;
public class Main {

	
	public static void main(String[] args) {
		/* Your class should be named Main.
 			* Read input as specified in the question.
 			* Print output as specified in the question.
		*/

		// Write your code here
        Scanner scn = new Scanner(System.in);
        String str = scn.next();
        int a=0,t=0;
        ArrayList<String> al = new ArrayList<String>();
        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)=='('){
                t+=1;
            }
            else
            {
                t-=1;
            }
            if(t==0)
            {
                al.add(str.substring(a+1,i));
                a = i+1;
            }
        }
        String ans ="";
        for(String s:al)
        {
            ans+=s;
        }
        System.out.println(ans);
	}

}

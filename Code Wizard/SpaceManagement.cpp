// Author :: Mohammad Faisal
// BEGINNING WITH THE NAME OF ALMIGHTY GOD ALLAH
import java.util.Scanner;
import java.util.*;
public class Main {

	
	public static void main(String[] args) {
		// Write your code here
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        ArrayList<String> al= new ArrayList<>();
        
        for(int i=0; i<n; i++)
        {
            al.add(sc.next());
        }
        al = solve(al);
        for(String str: al)
        {
            System.out.println(str);
        }
        
	}
    public static ArrayList<String> solve(ArrayList<String> names){
        HashSet<String> s = new HashSet<>();
        HashMap<String,Integer> m = new HashMap<>();
        ArrayList<String> k = new ArrayList<>();
        
        for(String name: names)
        {
            if(m.containsKey(name)){
                int n = m.get(name);
                m.put(name,n+1);
                k.add(name +" "+ Integer.toString(n+1));
            }
            else
            {
                m.put(name,1);
                String temp = "";
                boolean ins = false;
                for(char c: name.toCharArray()){
                    temp+=c;
                    if(!ins && !s.contains(temp))
                    {
                        ins = true;
                        k.add(temp);
                    }
                    s.add(temp);
                }
              if(!ins) k.add(temp);
            }

        }
        return k;
    }
}

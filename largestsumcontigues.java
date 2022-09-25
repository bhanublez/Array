import java.util.*;
import java.lang.*;
import java.io.*;
class Codchef{
public static void main(String[] args)throws java.lang.Exception
{
    Scanner sc = new Scanner(System.in);
    int tc=sc.nextInt();
    while(tc-->0){
        HashSet<Integer> set= new HashSet<>();
        int n=sc.nextInt();
        int pos=0,neg=0;
        while(n-->0){
            int a=sc.nextInt();
            if(!set.contains(a)){
                set.add(a);
                if(a>=0){
                    pos+=a;
                }
                else {
                    neg+=a;
                }
            }
        }
        System.out.println(pos+" "+neg);
    }

}
}

import java.util.*;
class Main
{
  public static void main(String args[])
  {
    Scanner sc=new Scanner(System.in);
   System.out.println("enter n1 value");
   int n1=sc.nextInt();
   System.out.println("enter n2 value");
   int n2=sc.nextInt();
   if(n1==n2)
   {
     System.out.println("0");
   }
   else if(n1%6==n2%6)
   {
     System.out.println((n1<n2)?n1:n2);
   }
   else
   {
     System.out.println((n1>n2)?n1:n2);
   }
  }
}
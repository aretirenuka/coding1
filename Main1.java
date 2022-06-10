import java.util.*;
class Main
{
  public static void main(String args[])
  {
    Scanner sc=new Scanner(System.in);
    System.out.println("enter x value:");
    int x=sc.nextInt();
    System.out.println("enter y value:");
    int y=sc.nextInt();
    System.out.println("enter z value:");
    int z=sc.nextInt();
    System.out.println((Math.abs(x-y)>=20||Math.abs(y-z)>=20||Math.abs(z-x)>=20));
}
}
 
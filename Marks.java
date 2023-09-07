import java.util.Scanner;

public class Marks {
    public static void main(String[] args) {
        Scanner Sc = new Scanner(System.in);
        System.out.println("Enter Your Bengali Mark:");
        int n1 = Sc.nextInt();
        System.out.println("Enter Your English Mark:");
        int n2 = Sc.nextInt();
        System.out.println("Enter Your Math Mark:");
        int n3 = Sc.nextInt();
        System.out.println("Enter Your Phys Mark:");
        int n4 = Sc.nextInt();
        System.out.println("Enter Your Chem Mark:");
        int n5 = Sc.nextInt();
        System.out.println("Enter Your Biology Mark:");
        int n6 = Sc.nextInt();
        int sum = n1+n2+n3+n4+n5+n6;
        int per = (sum/6);
        System.out.println("Your Percentage is:"+per);
//        System.out.println(per);
    }
}

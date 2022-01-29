package myFirstJavaProject;
import java.util.Scanner;

import javax.sound.sampled.SourceDataLine;
public class Test {
    public static void main(String[] args) {
        Scanner inp = new Scanner(System.in);
        student s = new student();
        System.out.println("Nam kow mia:");
        s.myName = inp.nextLine();
        System.out.println("Areh " + s.myName + " bhaiiii, \n--Hae bhai \n apnar boyos koto?");
        s.myAge = inp.nextInt();

        if (s.Upojokto()){
            System.out.println(s.myName + " Tumar to mia biyer boyos hoye gese");
        }
        else{
            System.out.println(s.myName+ "-- dut vat - ja beda koitte aisos biya korte?");
        }
    } 
}
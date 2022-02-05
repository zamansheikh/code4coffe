import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        boolean isRepeat = true;
        while(isRepeat){

            System.out.println("------------------------------------------------------");
            System.out.println("|        Assignment Done by Zaman4031_PC_C           |");
            System.out.println("|                                                    |");
            System.out.println("|                  Select Assignment No:             |");
            System.out.println("|                                                    |");
            System.out.println("------------------------------------------------------");
            System.out.print("$");
            Scanner input = new Scanner(System.in);
            int assignmentNo = input.nextInt();
            switch (assignmentNo){
                case 1:
                assignment01.assign_01();
                break;
                case 2:
                assignment02.assign02();
                break;
                case 3:
                assignment03.assign03();
                break;
                case 4:
                assignment04.assign04();
                break;
                case 5:
                assignment05.assign05();
                break;
                case 6:
                assignment06.assign06();
                break;
                case 7:
                assignment07.assign07();
                break;
                case 8:
                assignment08.assign08();
                break;
                case 9:
                assignment09.assign09();
                break;
                case 10:
                assignment10.assign10();
                break;
                case 11:
                assignment11.assign11();
                break;
            }
        }

    }
}

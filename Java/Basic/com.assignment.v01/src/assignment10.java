import java.util.Scanner;
public class assignment10 {
    public static void assign10() {
        System.out.println("Write a program to take input to two matrix, multiply and display the result.");
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of rows in first matrix: ");
        int matrix1Row = input.nextInt();
        System.out.print("Enter the number of columns in first matrix: ");
        int matrix1Column = input.nextInt();
        System.out.print("Enter the number of rows in second matrix: ");
        int matrix2Row = input.nextInt();
        System.out.print("Enter the number of columns in second matrix: ");
        int matrix2Column = input.nextInt();
        if (matrix1Column != matrix2Row) {
            System.out.println("Matrix multiplication is not possible.");
            return;
        }
        int[][] matrix1 = new int[matrix1Row][matrix1Column];
        int[][] matrix2 = new int[matrix2Row][matrix2Column];
        System.out.println("Enter the elements of first matrix: ");
        for (int i = 0; i < matrix1Row; i++) {
            for (int j = 0; j < matrix1Column; j++) {
                System.out.print("Enter element " + (i + 1) + "," + (j + 1) + ": ");
                matrix1[i][j] = input.nextInt();
            }
        }
        System.out.println("Enter the elements of second matrix: ");
        for (int i = 0; i < matrix2Row; i++) {
            for (int j = 0; j < matrix2Column; j++) {
                System.out.print("Enter element " + (i + 1) + "," + (j + 1) + ": ");
                matrix2[i][j] = input.nextInt();
            }
        }
        int[][] result = new int[matrix1Row][matrix2Column];
        for (int i = 0; i < matrix1Row; i++) {
            for (int j = 0; j < matrix2Column; j++) {
                for (int k = 0; k < matrix1Column; k++) {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        System.out.println("The result of multiplication is: ");
        for (int i = 0; i < matrix1Row; i++) {
            for (int j = 0; j < matrix2Column; j++) {
                System.out.print(result[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println("Press any key to continue...");
        input.next();
        return;
    }
}
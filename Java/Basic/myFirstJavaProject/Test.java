

public class Test {
    public static void main(String[] args) {

        student[] myStudents = new student[5];

        for (int i = 0; i < myStudents.length -3; i++) {
            myStudents[i] = new student();
            myStudents[i].studentmethod();
            myStudents[i].studentprint();
        }

    }
}
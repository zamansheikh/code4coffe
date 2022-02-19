public class TestCourse {

    void runPro(){
        Course c1 = new Course("Java");
        c1.addStudent("Zaman Sheikh");
        c1.addStudent("Rahik Ahsan");
        c1.addStudent("Rakibul Islam");
        c1.getStudent();
        c1.dropStudent("Zaman Sheikh");
        for(int i=0; i<c1.getNumberOfStudents(); i++){
            System.out.println(c1.getStudent()[i]);
        }
    }
    
}

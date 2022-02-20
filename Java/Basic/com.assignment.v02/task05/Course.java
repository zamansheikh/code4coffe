public class Course {
    private String coureName;
    private String[] students = new String[100];
    private int numberOfStudents;

    public Course( String courseName){
        this.coureName = courseName;
    }
    public String getCourseName(){
        return this.coureName;
    }
    public void addStudent(String student){
        students[numberOfStudents] = student;
        numberOfStudents++;
    }
    public void dropStudent(String student){
        for( int i = 0; i < numberOfStudents; i++){
            if( student == students[i]){
                for( int j = i; j < numberOfStudents; j++){
                    students[j] = students[j+1];
                }
                numberOfStudents--;
                return;
            }
        }
        System.out.println("Student not found");
    }
    public String[] getStudent (){
        return students;
    }
    public int getNumberOfStudents(){
        return numberOfStudents;
    }
    
}

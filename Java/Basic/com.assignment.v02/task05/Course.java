public class Course {
    private String coureName;
    private String[] students ;
    private int numberOfStudents;

    public void CourseName ( String courseName){
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
        students[numberOfStudents] = student;
        numberOfStudents--;
    }
    public getStudent (){
        return this.students;
    }
    public getNumberOfStudents(){
        return numberOfStudents;
    }
    
}

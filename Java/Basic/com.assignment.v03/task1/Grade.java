public class Grade extends Student {
    private String courseName;
    private double marks;
    Grade( int id, String name, String courseName, double marks){
        super(id, name);
        this.courseName = courseName;
        this.marks = marks;
    }
    void displayGrade(){
        if(marks >= 80){
            System.out.println("Grade: A");
        }
        else if(marks >= 60){
            System.out.println("Grade: B");
        }
        else if(marks >= 40){
            System.out.println("Grade: C");
        }
        else if(marks >= 20){
            System.out.println("Grade: D");
        }
        else{
            System.out.println("Grade: F");
        }
    }
    
}

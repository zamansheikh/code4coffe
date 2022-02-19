public class student {
    String name;
    String ID;
    int age;
    String department;
    String course;
    int mark;
    boolean isPass ;
    student(String name, String ID, int age, String department, String course, int mark) {
        this.name = name;
        this.ID = ID;
        this.age = age;
        this.department = department;
        this.course = course;
        this.mark = mark;
        if(mark >= 40) {
            isPass = true;
        } else {
            isPass = false;
        }
    }
    public void viewInfo() {
        System.out.println("Name: " + name);
        System.out.println("ID: " + ID);
        System.out.println("Age: " + age);
        System.out.println("Department: " + department);
        System.out.println("Course: " + course);
        System.out.println("Mark: " + mark);
        if(isPass) {
            System.out.println("Pass");
        } else {
            System.out.println("Fail");
        }
    }
}

public class App {
    public static void main(String[] args) throws Exception {
        int i=0,n=4; 
        Student[] arr;
        arr = new Student[5]; 
        for(i,i<=n,i++)
        {
        arr[i] = new Student(); 
         }
        arr[0].setData(683, "Zamal"); 
        arr[1].setData(836, "Kamal");
        arr[2].setData(926, "Hasan"); 
        arr[3].setData(966, "Mehedi");
        arr[4].setData(551, "Zafor");

            for(i,i<=n,i++)
                {
                 System.out.println( "Student data in student arr "+i); 
                     arr[i].display(); 
                } 
    }

    class Student {
        public int id;
        public String name;
        public void setData(int id, String name) {
            this.id = id;
            this.name = name;
        }

        public void display() {
            System.out.println("Student id is: " + id + " "+ "and Student name is: "+ name);
            System.out.println();
        }
    }
}

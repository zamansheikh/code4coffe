package myFirstJavaProject;

public class box {
    int high;
    int width;
    int length;
    //Constructor
    box(int h, int w, int l) {
        high = h;
        width = w;
        length = l;
    }

    public static int volume(box myBox) {
        return myBox.high * myBox.width * myBox.length;
    }

}

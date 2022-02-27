public class Sphere extends GeometricStructure {


    private double radius;
    double area;
    double volume;


    Sphere(double radius) {
        this.radius = radius;
    }

    public double getRadius() {
        return radius;
    }

    public void setRadius(double radius) {
        this.radius = radius;
    }
}

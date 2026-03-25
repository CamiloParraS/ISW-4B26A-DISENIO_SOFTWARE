public class App {
    public static void main(String[] args) throws Exception {
        Circle circle = new Circle(2.0, "blue");
        System.out.println("/n -----------------------------");
        System.out.println(circle);
        System.out.println("Area: " + circle.getArea());

        System.out.println("-----------------------------");
        System.out.println("CYLINDER");
        Cylinder cylinder = new Cylinder(2.0, 5.0, "green");
        System.out.println(cylinder);
        System.out.println("Volume: " + cylinder.getVolume());
    }
}
